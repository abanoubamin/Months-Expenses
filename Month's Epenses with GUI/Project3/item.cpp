#include "item.h"
#include <iostream>
#include <fstream>
#include <string>
#include <unordered_map>
#include <vector>
using namespace std;
item::item()
{
	Name = Date = "";
	Price = Spent = 0;
}
item::item(string name, string date, float price, float spent)
{
	Name = name;
	Date = date;
	Price = price;
	Spent = spent;
}
void item::store_into_map()//take something from the file 
{
	ifstream read("Items.txt");
	item items;
	string Month;
	char line[1000];
	while (!read.eof())
	{
		read >> Month;
		if (read.eof())
			break;
		read >> items.Name >> items.Date >> items.Price >> items.Spent >> items.remain;
		read.getline(line, 1000);
		expenses[Month].push_back(items);
	}
	read.close();
}
void item::write_into_map()//put something in the file 
{
	ofstream write("Items.txt");
	unordered_map<string, vector<item>> ::iterator it = expenses.begin();
	for (it = expenses.begin(); it != expenses.end(); it++)
	{
		for (int i = 0; i<it->second.size(); i++)
		{
			write << it->first << endl;
			write << it->second[i].Name << ' ' << it->second[i].Date << ' ' << it->second[i].Price << ' ' << it->second[i].Spent << ' ' << it->second[i].remain << endl;
		}
	}
	write.close();
}

void item::delete_from_map()
{
	expenses.clear();
	store_into_map();
	while (true)
	{

		cout << "enter\n";
		string name;//name of product
		string month;
		cout << "enter month\n";
		cin >> month;
		cout << "enter the name of the product you want to delete\n";
		cin >> name;
		vector<item>::iterator it1;//iterator on vector to search for product
		for (it1 = expenses[month].begin(); it1 != expenses[month].end(); it1++)
		{
			if (it1->Name == name)
			{
				expenses[month].erase(it1);
				break;
			}
		}
		write_into_map();
		cout << "deleted sucessfully\n";
		char x;
		cout << "if you want to do delete again(y,n)\n";
		cin >> x;
		if (x == 'n' || x == 'N')
			break;
		else if (x == 'y' || x == 'Y')
			continue;
		else
		while (true)
		{
			cout << "Wrong choice, choose (Y/N) ? : ";
			cin >> x;
			if (x == 'Y' || x == 'y' || x == 'n' || x == 'N')
				break;
		}
		if (x == 'n' || x == 'N')
			break;
	}
}
void item::insert()
{
	expenses.clear();
	ofstream store("Items.txt", ios::app);
	string month;
	while (true)
	{
		cout << "Enter the month: ";
		cin >> month;
		store << month << endl;
		cout << "Enter the name of item: ";
		cin >> Name;
		store << Name << "   ";
		cout << "Enter the Date: ";
		cin >> Date;
		store << Date << "   ";
		cout << "Enter the Total Price: ";
		cin >> Price;
		store << Price << "   ";
		cout << "Enter the amount of money spent: ";
		cin >> Spent;
		store << Spent << "   ";
		remain = Remain();
		store << remain << endl;

		cout << "Do you need to store another item (Y/N) ? : ";
		char c;
		cin >> c;
		if (c == 'N' || c == 'n')
			break;
		else if (c == 'Y' || c == 'y')
			continue;
		else
		while (true)
		{
			cout << "Do you need to store another item (Y/N) ? : ";
			cin >> c;
			if (c == 'N' || c == 'n' || c == 'Y' || c == 'y')
				break;
		}
		if (c == 'N' || c == 'n')
			break;
	}
	store.close();
}

void item::search()
{
	expenses.clear();
	store_into_map();
	while (true)
	{
		string Mon;
		cout << "Enter the month: ";
		cin >> Mon;

		vector<item> ::iterator it;
		for (it = expenses[Mon].begin(); it != expenses[Mon].end(); it++)
		{
			cout << it->Name << "   " << it->Date << "   " << it->Price << "   " << it->Spent << "   " << it->remain << endl;
		}

		cout << "Do you want to search again (Y/N) ? : ";
		char c;
		cin >> c;
		if (c == 'N' || c == 'n')
			break;
		else if (c == 'Y' || c == 'y')
			continue;
		else
		while (true)
		{
			cout << "Do you want to search again (Y/N) ? : ";
			cin >> c;
			if (c == 'N' || c == 'n' || c == 'Y' || c == 'y')
				break;
		}
		if (c == 'N' || c == 'n')
			break;
	}
}
void item::Edit_item()
{
	expenses.clear();
	store_into_map();
	string month, name;
	string newmonth;
	cout << "Enter the month: ";
	cin >> month;
	cout << "Enter the name of item: ";
	cin >> name;
	vector<item>::iterator it;
	int counter = 0;
	for (it = expenses[month].begin(); it != expenses[month].end(); it++)
	{
		if (it->Name == name)
			counter++;
	}

	if (counter == 0)
		cout << "No item in this month has this name \n";
	else
	{
		cout << "\nThe previous data:\n";
		for (it = expenses[month].begin(); it != expenses[month].end(); it++)
		{
			if (it->Name == name)
			{
				cout << "Name: " << it->Name << "\nDate: " << it->Date << "\nPrice: " << it->Price
					<< "\nSpent: " << it->Spent << "\nRemain:" << it->remain << endl;

				break;
			}
		}
		int order;
		while (true)
		{
			cout << "\nEnter 1 to change the name \n";
			cout << "Enter 2 to change the date \n";
			cout << "Enter 3 to change the Price \n";
			cout << "Enter 4 to change the spent \n";

			cin >> order;
			while (order != 1 && order != 2 && order != 3 && order != 4)
			{
				cout << "Select the right order : ";
				cin >> order;
			}
			if (order == 1)
			{
				cout << "Enter the new name\n";
				cin >> Name;
				for (it = expenses[month].begin(); it != expenses[month].end(); it++)
				{
					if (it->Name == name)
					{
						it->Name = Name;
						break;
					}
				}
				write_into_map();
			}
			else if (order == 2)
			{
				cout << "Enter the new date\n";
				cin >> Date;
				newmonth = change_month(Date);
				string Name2;
				string newDate = Date;
				float Price2;
				float Spent2;
				float remain2;
				for (it = expenses[month].begin(); it != expenses[month].end(); it++)
				{
					if (it->Name == name)
					{
						Name2 = it->Name;
						Price2 = it->Price;
						Spent2 = it->Spent;
						remain2 = it->remain;
						expenses[month].erase(it);
						break;
					}
				}
				write_into_map();
				ofstream store("Items.txt", ios::app);//app : shortcut append , it's mean add new data on previous data in the file 
				store << newmonth << endl;
				store << Name2 << "   ";
				store << newDate << "   ";
				store << Price2 << "   ";
				store << Spent2 << "   ";
				store << remain2 << endl;
				store.close();
				expenses.clear();
				store_into_map();
			}
			else if (order == 3)
			{
				cout << "Enter the new price\n";
				cin >> Price;
				cout << "Enter the new spent\n";
				cin >> Spent;
				for (it = expenses[month].begin(); it != expenses[month].end(); it++)
				{
					if (it->Name == name)
					{
						it->Price = Price;
						it->Spent = Spent;
						it->remain = Price - Spent;
						break;
					}
				}
				write_into_map();
			}
			else if (order == 4)
			{
				cout << "Enter the new spent\n";
				cin >> Spent;
				for (it = expenses[month].begin(); it != expenses[month].end(); it++)
				{
					if (it->Name == name)
					{
						it->Spent = Spent;
						it->remain = it->Price - Spent;
						break;
					}
				}
				write_into_map();
			}
			cout << "\nThe new data is:\n";
			if (order == 1)
				name = Name;
			if (order == 2)
				month = newmonth;
			for (it = expenses[month].begin(); it != expenses[month].end(); it++)
			{
				if (it->Name == name)
				{
					cout << "Name: " << it->Name << "\nDate: " << it->Date << "\nPrice: " << it->Price
						<< "\nSpent: " << it->Spent << "\nRemain:" << it->remain << endl;

					break;
				}
			}
			cout << "Do you want to edin again (Y/N) ? : ";
			char c;
			cin >> c;
			if (c == 'N' || c == 'n')
				break;
			else if (c == 'Y' || c == 'y')
				continue;
			else
			while (true)
			{
				cout << "Wrong choice, choose (Y/N) ? : ";
				cin >> c;
				if (c == 'N' || c == 'n' || c == 'Y' || c == 'y')
					break;
			}
			if (c == 'N' || c == 'n')
				break;
		}
	}

}
string item::change_month(string date)
{
	string month = "";
	for (int i = 0; i < date.length(); i++)
	{
		if (date[i] == '/')
		{
			for (int j = i + 1; j < date.length(); j++)
				month += date[j];
			break;
		}
	}
	return month;
}
float item::Remain()
{
	return (Price - Spent);
}

void item::display(){
	expenses.clear();
	int sumation_of_spent = 0, sumation_of_remaining = 0, total_money = 0;
	store_into_map();
	while (true)
	{
		string month;
		cout << "Enter month: ";
		cin >> month;
		sumation_of_spent = 0, sumation_of_remaining = 0, total_money = 0;
		vector<item> ::iterator it;
		for (it = expenses[month].begin(); it != expenses[month].end(); it++)
		{
			sumation_of_spent = sumation_of_spent + it->Spent;
			sumation_of_remaining = sumation_of_remaining + it->remain;
		}
		total_money = sumation_of_spent + sumation_of_remaining;
		cout << "Amount of money spent is : " << sumation_of_spent << endl;
		cout << "Amount of money remaining is : " << sumation_of_remaining << endl;
		cout << "Total amount of money: " << total_money << endl;
		char choice;
		cout << "Do you want to display again(Y or N): ";
		cin >> choice;
		if (choice == 'n' || choice == 'N')
			break;
		else if (choice == 'y' || choice == 'Y')
			continue;
		else
		{
			while (true)
			{
				cout << "Do you want to display again(Y or N): ";
				cin >> choice;
				if (choice == 'n' || choice == 'N' || choice == 'y' || choice == 'Y')
					break;
			}
			if (choice == 'n' || choice == 'N')
				break;
		}
	}
}
item::~item(void)
{

}
