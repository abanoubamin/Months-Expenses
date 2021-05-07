#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <unordered_map>
#include <vector>

using namespace std;



class item
{
public:
	string Name; //Name of item bought
	string Date; //Date of buying
	float Price; //Price
	float Spent; //Amount of money spent
	float remain; //Amount of money remaining

	vector<item>v; //Vector of items
	unordered_map<string, vector<item>> expenses; //Months' Expenses unordered_map

public:
	//Constructors
	item(void);
	item(string, string, float, float);
	float Remain(); //Calculation of the remaining amount of money
	void store_into_map(); //Read from the text file to an unordered_map
	void write_into_map();
	void delete_from_map();
	void insert(); //Add new expenses
	void search(); //Search for the expenses per month
	void Edit_item();//Edit anything from data item , for example name or date or,.....
	string change_month(string);//Take only month and year from date
	void display();
	//Destructor
	~item(void);
};

