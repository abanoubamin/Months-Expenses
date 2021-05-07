#include "MyForm.h"
#include <iostream>
#include<fstream>
#include <string>
#include <unordered_map>
#include <vector>
#include"item.h"


using namespace System;
using namespace System::Windows::Forms;
using namespace std;
[STAThread]


void Main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	Project3::MyForm form;
	Application::Run(%form);

	
}