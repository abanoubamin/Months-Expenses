#pragma once
#include <iostream>
#include <sstream>
#include<fstream>
#include <string>
#include <msclr\marshal_cppstd.h>
#include <unordered_map>
#include <vector>
#include "item.h"

using namespace std;


namespace Project3 {
	item i;

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;

	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::Label^  label6;







	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::TextBox^  textBox8;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::RichTextBox^  richTextBox1;

	private: System::Windows::Forms::TextBox^  textBox9;

	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::TextBox^  textBox10;
	private: System::Windows::Forms::TextBox^  textBox11;
	private: System::Windows::Forms::TextBox^  textBox12;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::TextBox^  textBox13;

	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::TextBox^  textBox14;
	private: System::Windows::Forms::RichTextBox^  richTextBox2;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::TextBox^  textBox15;
	private: System::Windows::Forms::Label^  label21;
	private: System::Windows::Forms::TextBox^  textBox16;
	private: System::Windows::Forms::Label^  label22;
	private: System::Windows::Forms::TextBox^  textBox17;
	private: System::Windows::Forms::Label^  label23;
	private: System::Windows::Forms::TextBox^  textBox18;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::FlowLayoutPanel^  flowLayoutPanel1;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;

	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::FlowLayoutPanel^  flowLayoutPanel2;
	private: System::Windows::Forms::Panel^  panel2;

	private: System::Windows::Forms::PictureBox^  pictureBox2;


	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Panel^  panel3;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Panel^  panel4;

	private: System::Windows::Forms::PictureBox^  pictureBox4;
	private: System::Windows::Forms::PictureBox^  pictureBox5;
	private: System::Windows::Forms::FlowLayoutPanel^  flowLayoutPanel3;
	private: System::Windows::Forms::Label^  label25;
	private: System::Windows::Forms::Label^  label24;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Button^  button12;
private: System::Windows::Forms::Button^  button1;
private: System::Windows::Forms::Button^  button11;
private: System::Windows::Forms::Button^  button13;
private: System::Windows::Forms::Label^  label26;
private: DevComponents::DotNetBar::Controls::CircularProgress^  circularProgress1;
private: System::Windows::Forms::Label^  label12;
private: System::Windows::Forms::Label^  label27;
private: System::Windows::Forms::PictureBox^  pictureBox6;
private: System::Windows::Forms::PictureBox^  pictureBox7;








	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;







#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>


		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->textBox17 = (gcnew System::Windows::Forms::TextBox());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->textBox18 = (gcnew System::Windows::Forms::TextBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->circularProgress1 = (gcnew DevComponents::DotNetBar::Controls::CircularProgress());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->flowLayoutPanel3 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->flowLayoutPanel2 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->flowLayoutPanel1->SuspendLayout();
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->flowLayoutPanel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(239, 181);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(231, 20);
			this->textBox1->TabIndex = 1;
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(239, 231);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(231, 20);
			this->textBox2->TabIndex = 2;
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->Location = System::Drawing::Point(239, 281);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(231, 20);
			this->textBox3->TabIndex = 3;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox3_TextChanged);
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->textBox4->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox4->Location = System::Drawing::Point(239, 331);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(231, 20);
			this->textBox4->TabIndex = 4;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 15));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(149, 181);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(57, 24);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Month";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 15));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(149, 231);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(55, 24);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Name";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 15));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(149, 281);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(45, 24);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Date";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 15));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(149, 331);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(46, 24);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Price";
			// 
			// textBox5
			// 
			this->textBox5->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->textBox5->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox5->Location = System::Drawing::Point(239, 381);
			this->textBox5->Multiline = true;
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(231, 20);
			this->textBox5->TabIndex = 10;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 15));
			this->label6->ForeColor = System::Drawing::Color::White;
			this->label6->Location = System::Drawing::Point(149, 381);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(53, 24);
			this->label6->TabIndex = 11;
			this->label6->Text = L"Spent";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::Color::White;
			this->label11->Location = System::Drawing::Point(92, 158);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(57, 24);
			this->label11->TabIndex = 21;
			this->label11->Text = L"Month";
			// 
			// textBox8
			// 
			this->textBox8->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->textBox8->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox8->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 20));
			this->textBox8->Location = System::Drawing::Point(155, 150);
			this->textBox8->Multiline = true;
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(269, 40);
			this->textBox8->TabIndex = 20;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Yellow;
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Bebas", 12));
			this->button3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(42)));
			this->button3->Location = System::Drawing::Point(430, 149);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(98, 41);
			this->button3->TabIndex = 19;
			this->button3->Text = L"Search";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// richTextBox1
			// 
			this->richTextBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(29)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->richTextBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->richTextBox1->ForeColor = System::Drawing::Color::White;
			this->richTextBox1->Location = System::Drawing::Point(96, 231);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->ReadOnly = true;
			this->richTextBox1->Size = System::Drawing::Size(546, 276);
			this->richTextBox1->TabIndex = 22;
			this->richTextBox1->Text = L"";
			// 
			// textBox9
			// 
			this->textBox9->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->textBox9->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox9->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 11));
			this->textBox9->Location = System::Drawing::Point(204, 207);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(160, 19);
			this->textBox9->TabIndex = 24;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Bebas", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(262, 429);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(121, 25);
			this->label13->TabIndex = 26;
			this->label13->Text = L"Amount paid :";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Bebas", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(262, 463);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(170, 25);
			this->label14->TabIndex = 27;
			this->label14->Text = L"Amount remaining :";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Bebas", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(262, 502);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(136, 25);
			this->label15->TabIndex = 28;
			this->label15->Text = L"Total Amount :";
			// 
			// textBox10
			// 
			this->textBox10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(42)));
			this->textBox10->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox10->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox10->ForeColor = System::Drawing::Color::Yellow;
			this->textBox10->Location = System::Drawing::Point(443, 428);
			this->textBox10->Name = L"textBox10";
			this->textBox10->ReadOnly = true;
			this->textBox10->Size = System::Drawing::Size(126, 27);
			this->textBox10->TabIndex = 29;
			// 
			// textBox11
			// 
			this->textBox11->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(42)));
			this->textBox11->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox11->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox11->ForeColor = System::Drawing::Color::Yellow;
			this->textBox11->Location = System::Drawing::Point(443, 462);
			this->textBox11->Name = L"textBox11";
			this->textBox11->ReadOnly = true;
			this->textBox11->Size = System::Drawing::Size(126, 27);
			this->textBox11->TabIndex = 30;
			// 
			// textBox12
			// 
			this->textBox12->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(42)));
			this->textBox12->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox12->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox12->ForeColor = System::Drawing::Color::Yellow;
			this->textBox12->Location = System::Drawing::Point(443, 497);
			this->textBox12->Name = L"textBox12";
			this->textBox12->ReadOnly = true;
			this->textBox12->Size = System::Drawing::Size(126, 27);
			this->textBox12->TabIndex = 31;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(24, 190);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(56, 21);
			this->label16->TabIndex = 33;
			this->label16->Text = L"Month";
			// 
			// textBox13
			// 
			this->textBox13->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->textBox13->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox13->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox13->Location = System::Drawing::Point(136, 190);
			this->textBox13->Multiline = true;
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(100, 20);
			this->textBox13->TabIndex = 32;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->Location = System::Drawing::Point(24, 226);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(87, 21);
			this->label18->TabIndex = 36;
			this->label18->Text = L"Item Name";
			// 
			// textBox14
			// 
			this->textBox14->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->textBox14->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox14->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox14->Location = System::Drawing::Point(136, 226);
			this->textBox14->Multiline = true;
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(100, 20);
			this->textBox14->TabIndex = 35;
			// 
			// richTextBox2
			// 
			this->richTextBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(29)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->richTextBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->richTextBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 17));
			this->richTextBox2->ForeColor = System::Drawing::Color::White;
			this->richTextBox2->Location = System::Drawing::Point(465, 184);
			this->richTextBox2->Name = L"richTextBox2";
			this->richTextBox2->ReadOnly = true;
			this->richTextBox2->Size = System::Drawing::Size(318, 185);
			this->richTextBox2->TabIndex = 37;
			this->richTextBox2->Text = L"";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Verdana", 12));
			this->label19->ForeColor = System::Drawing::Color::DimGray;
			this->label19->Location = System::Drawing::Point(565, 163);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(109, 18);
			this->label19->TabIndex = 38;
			this->label19->Text = L"Item details";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 12));
			this->label20->Location = System::Drawing::Point(24, 359);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(42, 21);
			this->label20->TabIndex = 42;
			this->label20->Text = L"Date";
			// 
			// textBox15
			// 
			this->textBox15->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->textBox15->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox15->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 11.25F));
			this->textBox15->Location = System::Drawing::Point(136, 330);
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(100, 20);
			this->textBox15->TabIndex = 41;
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 12));
			this->label21->Location = System::Drawing::Point(24, 329);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(52, 21);
			this->label21->TabIndex = 40;
			this->label21->Text = L"Name";
			// 
			// textBox16
			// 
			this->textBox16->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->textBox16->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox16->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 11.25F));
			this->textBox16->Location = System::Drawing::Point(136, 360);
			this->textBox16->Name = L"textBox16";
			this->textBox16->Size = System::Drawing::Size(100, 20);
			this->textBox16->TabIndex = 39;
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 12));
			this->label22->Location = System::Drawing::Point(24, 419);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(50, 21);
			this->label22->TabIndex = 46;
			this->label22->Text = L"Spent";
			// 
			// textBox17
			// 
			this->textBox17->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->textBox17->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox17->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 11.25F));
			this->textBox17->Location = System::Drawing::Point(136, 390);
			this->textBox17->Name = L"textBox17";
			this->textBox17->Size = System::Drawing::Size(100, 20);
			this->textBox17->TabIndex = 45;
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 12));
			this->label23->Location = System::Drawing::Point(24, 390);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(44, 21);
			this->label23->TabIndex = 44;
			this->label23->Text = L"Price";
			// 
			// textBox18
			// 
			this->textBox18->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->textBox18->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox18->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 11.25F));
			this->textBox18->Location = System::Drawing::Point(136, 420);
			this->textBox18->Name = L"textBox18";
			this->textBox18->Size = System::Drawing::Size(100, 20);
			this->textBox18->TabIndex = 43;
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::Yellow;
			this->button5->FlatAppearance->BorderSize = 0;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Bebas", 12));
			this->button5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(42)));
			this->button5->Location = System::Drawing::Point(288, 334);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(100, 100);
			this->button5->TabIndex = 47;
			this->button5->Text = L"Update";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::Yellow;
			this->button6->FlatAppearance->BorderSize = 0;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Font = (gcnew System::Drawing::Font(L"Bebas", 12));
			this->button6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(42)));
			this->button6->Location = System::Drawing::Point(288, 190);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(100, 56);
			this->button6->TabIndex = 48;
			this->button6->Text = L"View";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->flowLayoutPanel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(29)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->flowLayoutPanel1->Controls->Add(this->button7);
			this->flowLayoutPanel1->Controls->Add(this->button8);
			this->flowLayoutPanel1->Controls->Add(this->button10);
			this->flowLayoutPanel1->Controls->Add(this->button2);
			this->flowLayoutPanel1->Location = System::Drawing::Point(-11, 32);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(881, 56);
			this->flowLayoutPanel1->TabIndex = 49;
			// 
			// button7
			// 
			this->button7->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->button7->FlatAppearance->BorderSize = 0;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Font = (gcnew System::Drawing::Font(L"Bebas", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->ForeColor = System::Drawing::Color::White;
			this->button7->Location = System::Drawing::Point(3, 3);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(209, 49);
			this->button7->TabIndex = 23;
			this->button7->Text = L"Search";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button8
			// 
			this->button8->AutoSize = true;
			this->button8->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->button8->FlatAppearance->BorderSize = 0;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->Font = (gcnew System::Drawing::Font(L"Bebas", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->ForeColor = System::Drawing::Color::White;
			this->button8->Location = System::Drawing::Point(218, 3);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(227, 49);
			this->button8->TabIndex = 24;
			this->button8->Text = L"Add / Delete  item";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button10
			// 
			this->button10->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->button10->FlatAppearance->BorderSize = 0;
			this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button10->Font = (gcnew System::Drawing::Font(L"Bebas", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->ForeColor = System::Drawing::Color::White;
			this->button10->Location = System::Drawing::Point(451, 3);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(209, 49);
			this->button10->TabIndex = 26;
			this->button10->Text = L"Edit  item";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// button2
			// 
			this->button2->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Bebas", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(666, 3);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(209, 49);
			this->button2->TabIndex = 27;
			this->button2->Text = L"Display";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click_1);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(42)));
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Controls->Add(this->button3);
			this->panel1->Controls->Add(this->textBox8);
			this->panel1->Controls->Add(this->label11);
			this->panel1->Controls->Add(this->richTextBox1);
			this->panel1->Controls->Add(this->label7);
			this->panel1->Controls->Add(this->label25);
			this->panel1->Controls->Add(this->label24);
			this->panel1->Controls->Add(this->label17);
			this->panel1->Controls->Add(this->label10);
			this->panel1->Controls->Add(this->label9);
			this->panel1->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->panel1->ForeColor = System::Drawing::Color::White;
			this->panel1->Location = System::Drawing::Point(0, 83);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(866, 593);
			this->panel1->TabIndex = 50;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(42)));
			this->panel2->Controls->Add(this->panel3);
			this->panel2->Controls->Add(this->pictureBox3);
			this->panel2->Controls->Add(this->label1);
			this->panel2->Controls->Add(this->pictureBox2);
			this->panel2->Controls->Add(this->textBox1);
			this->panel2->Controls->Add(this->textBox2);
			this->panel2->Controls->Add(this->textBox3);
			this->panel2->Controls->Add(this->textBox4);
			this->panel2->Controls->Add(this->label2);
			this->panel2->Controls->Add(this->label3);
			this->panel2->Controls->Add(this->label4);
			this->panel2->Controls->Add(this->label5);
			this->panel2->Controls->Add(this->textBox5);
			this->panel2->Controls->Add(this->label6);
			this->panel2->Controls->Add(this->button12);
			this->panel2->Controls->Add(this->button9);
			this->panel2->ForeColor = System::Drawing::Color::White;
			this->panel2->Location = System::Drawing::Point(0, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(866, 593);
			this->panel2->TabIndex = 51;
			this->panel2->Visible = false;
			this->panel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel2_Paint);
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->panel4);
			this->panel3->Controls->Add(this->pictureBox4);
			this->panel3->Controls->Add(this->label8);
			this->panel3->Controls->Add(this->textBox13);
			this->panel3->Controls->Add(this->button6);
			this->panel3->Controls->Add(this->label16);
			this->panel3->Controls->Add(this->button5);
			this->panel3->Controls->Add(this->textBox14);
			this->panel3->Controls->Add(this->label22);
			this->panel3->Controls->Add(this->label18);
			this->panel3->Controls->Add(this->textBox17);
			this->panel3->Controls->Add(this->richTextBox2);
			this->panel3->Controls->Add(this->label23);
			this->panel3->Controls->Add(this->label19);
			this->panel3->Controls->Add(this->textBox18);
			this->panel3->Controls->Add(this->textBox16);
			this->panel3->Controls->Add(this->label20);
			this->panel3->Controls->Add(this->label21);
			this->panel3->Controls->Add(this->textBox15);
			this->panel3->Location = System::Drawing::Point(0, 0);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(943, 590);
			this->panel3->TabIndex = 51;
			this->panel3->Visible = false;
			// 
			// panel4
			// 
			this->panel4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel4->Controls->Add(this->pictureBox7);
			this->panel4->Controls->Add(this->label27);
			this->panel4->Controls->Add(this->pictureBox6);
			this->panel4->Controls->Add(this->circularProgress1);
			this->panel4->Controls->Add(this->label12);
			this->panel4->Controls->Add(this->button13);
			this->panel4->Controls->Add(this->label26);
			this->panel4->Controls->Add(this->flowLayoutPanel3);
			this->panel4->Controls->Add(this->pictureBox5);
			this->panel4->Controls->Add(this->textBox9);
			this->panel4->Controls->Add(this->textBox12);
			this->panel4->Controls->Add(this->label13);
			this->panel4->Controls->Add(this->textBox11);
			this->panel4->Controls->Add(this->label14);
			this->panel4->Controls->Add(this->textBox10);
			this->panel4->Controls->Add(this->label15);
			this->panel4->Location = System::Drawing::Point(0, 0);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(866, 590);
			this->panel4->TabIndex = 55;
			this->panel4->Visible = false;
			this->panel4->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel4_Paint);
			// 
			// pictureBox7
			// 
			this->pictureBox7->BackColor = System::Drawing::Color::Yellow;
			this->pictureBox7->Location = System::Drawing::Point(818, 145);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(18, 22);
			this->pictureBox7->TabIndex = 62;
			this->pictureBox7->TabStop = false;
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->BackColor = System::Drawing::Color::Transparent;
			this->label27->Font = (gcnew System::Drawing::Font(L"Bebas", 16, System::Drawing::FontStyle::Bold));
			this->label27->ForeColor = System::Drawing::Color::White;
			this->label27->Location = System::Drawing::Point(681, 141);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(140, 29);
			this->label27->TabIndex = 61;
			this->label27->Text = L"Amount paid";
			// 
			// pictureBox6
			// 
			this->pictureBox6->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.BackgroundImage")));
			this->pictureBox6->Location = System::Drawing::Point(568, 148);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(122, 84);
			this->pictureBox6->TabIndex = 60;
			this->pictureBox6->TabStop = false;
			// 
			// circularProgress1
			// 
			this->circularProgress1->AnimationSpeed = 50;
			this->circularProgress1->BackColor = System::Drawing::Color::Transparent;
			// 
			// 
			// 
			this->circularProgress1->BackgroundStyle->CornerType = DevComponents::DotNetBar::eCornerType::Square;
			this->circularProgress1->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->circularProgress1->Location = System::Drawing::Point(430, 211);
			this->circularProgress1->Name = L"circularProgress1";
			this->circularProgress1->ProgressBarType = DevComponents::DotNetBar::eCircularProgressType::Donut;
			this->circularProgress1->ProgressColor = System::Drawing::Color::Yellow;
			this->circularProgress1->ProgressTextVisible = true;
			this->circularProgress1->Size = System::Drawing::Size(164, 164);
			this->circularProgress1->Style = DevComponents::DotNetBar::eDotNetBarStyle::OfficeXP;
			this->circularProgress1->TabIndex = 58;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::Color::Transparent;
			this->label12->Font = (gcnew System::Drawing::Font(L"Bebas", 26.25F, System::Drawing::FontStyle::Bold));
			this->label12->ForeColor = System::Drawing::Color::White;
			this->label12->Location = System::Drawing::Point(12, 65);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(365, 46);
			this->label12->TabIndex = 59;
			this->label12->Text = L"| Display  the  results";
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::Color::Yellow;
			this->button13->FlatAppearance->BorderSize = 0;
			this->button13->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button13->Font = (gcnew System::Drawing::Font(L"Bebas", 12));
			this->button13->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(42)));
			this->button13->Location = System::Drawing::Point(267, 269);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(100, 56);
			this->button13->TabIndex = 57;
			this->button13->Text = L"Display";
			this->button13->UseVisualStyleBackColor = false;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::button13_Click);
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label26->Location = System::Drawing::Point(138, 207);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(56, 21);
			this->label26->TabIndex = 56;
			this->label26->Text = L"Month";
			// 
			// flowLayoutPanel3
			// 
			this->flowLayoutPanel3->BackColor = System::Drawing::Color::Black;
			this->flowLayoutPanel3->Location = System::Drawing::Point(0, 567);
			this->flowLayoutPanel3->Name = L"flowLayoutPanel3";
			this->flowLayoutPanel3->Size = System::Drawing::Size(866, 23);
			this->flowLayoutPanel3->TabIndex = 51;
			this->flowLayoutPanel3->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::flowLayoutPanel3_Paint);
			// 
			// pictureBox5
			// 
			this->pictureBox5->BackColor = System::Drawing::Color::Yellow;
			this->pictureBox5->Location = System::Drawing::Point(696, 0);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(120, 5);
			this->pictureBox5->TabIndex = 55;
			this->pictureBox5->TabStop = false;
			this->pictureBox5->Click += gcnew System::EventHandler(this, &MyForm::pictureBox5_Click);
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackColor = System::Drawing::Color::Yellow;
			this->pictureBox4->Location = System::Drawing::Point(475, 3);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(130, 5);
			this->pictureBox4->TabIndex = 54;
			this->pictureBox4->TabStop = false;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Font = (gcnew System::Drawing::Font(L"Bebas", 26.25F, System::Drawing::FontStyle::Bold));
			this->label8->ForeColor = System::Drawing::Color::White;
			this->label8->Location = System::Drawing::Point(12, 65);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(376, 46);
			this->label8->TabIndex = 25;
			this->label8->Text = L"| Edit an  exisiting  item";
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::Color::Yellow;
			this->pictureBox3->Location = System::Drawing::Point(211, 0);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(220, 5);
			this->pictureBox3->TabIndex = 53;
			this->pictureBox3->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Bebas", 26.25F, System::Drawing::FontStyle::Bold));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(12, 65);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(355, 46);
			this->label1->TabIndex = 24;
			this->label1->Text = L"| Add / Delete an  item";
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::White;
			this->pictureBox2->Location = System::Drawing::Point(212, 174);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(5, 250);
			this->pictureBox2->TabIndex = 20;
			this->pictureBox2->TabStop = false;
			// 
			// button12
			// 
			this->button12->AutoSize = true;
			this->button12->BackColor = System::Drawing::Color::Yellow;
			this->button12->FlatAppearance->BorderSize = 0;
			this->button12->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button12->Font = (gcnew System::Drawing::Font(L"Bebas", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button12->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(42)));
			this->button12->Location = System::Drawing::Point(637, 486);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(180, 49);
			this->button12->TabIndex = 55;
			this->button12->Text = L"Delete ";
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
			// 
			// button9
			// 
			this->button9->AutoSize = true;
			this->button9->BackColor = System::Drawing::Color::Yellow;
			this->button9->FlatAppearance->BorderSize = 0;
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button9->Font = (gcnew System::Drawing::Font(L"Bebas", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(42)));
			this->button9->Location = System::Drawing::Point(420, 486);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(180, 49);
			this->button9->TabIndex = 54;
			this->button9->Text = L"Add ";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Yellow;
			this->pictureBox1->Location = System::Drawing::Point(49, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(100, 5);
			this->pictureBox1->TabIndex = 23;
			this->pictureBox1->TabStop = false;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Bebas", 26.25F, System::Drawing::FontStyle::Bold));
			this->label7->ForeColor = System::Drawing::Color::White;
			this->label7->Location = System::Drawing::Point(12, 65);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(336, 46);
			this->label7->TabIndex = 52;
			this->label7->Text = L"| SEARCH FOR AN  ITEM";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label25->ForeColor = System::Drawing::Color::White;
			this->label25->Location = System::Drawing::Point(531, 204);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(88, 24);
			this->label25->TabIndex = 57;
			this->label25->Text = L"Remaining";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label24->ForeColor = System::Drawing::Color::White;
			this->label24->Location = System::Drawing::Point(462, 204);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(53, 24);
			this->label24->TabIndex = 56;
			this->label24->Text = L"Spent";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->ForeColor = System::Drawing::Color::White;
			this->label17->Location = System::Drawing::Point(388, 204);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(46, 24);
			this->label17->TabIndex = 55;
			this->label17->Text = L"Price";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::White;
			this->label10->Location = System::Drawing::Point(267, 204);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(45, 24);
			this->label10->TabIndex = 54;
			this->label10->Text = L"Date";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::White;
			this->label9->Location = System::Drawing::Point(92, 204);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(94, 24);
			this->label9->TabIndex = 53;
			this->label9->Text = L"Item Name";
			// 
			// flowLayoutPanel2
			// 
			this->flowLayoutPanel2->BackColor = System::Drawing::Color::Black;
			this->flowLayoutPanel2->Controls->Add(this->button1);
			this->flowLayoutPanel2->Controls->Add(this->button11);
			this->flowLayoutPanel2->Dock = System::Windows::Forms::DockStyle::Top;
			this->flowLayoutPanel2->Location = System::Drawing::Point(0, 0);
			this->flowLayoutPanel2->Name = L"flowLayoutPanel2";
			this->flowLayoutPanel2->Size = System::Drawing::Size(866, 36);
			this->flowLayoutPanel2->TabIndex = 50;
			// 
			// button1
			// 
			this->button1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Location = System::Drawing::Point(3, 3);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(22, 23);
			this->button1->TabIndex = 0;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_1);
			// 
			// button11
			// 
			this->button11->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button11->BackColor = System::Drawing::Color::Transparent;
			this->button11->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button11.BackgroundImage")));
			this->button11->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button11->FlatAppearance->BorderSize = 0;
			this->button11->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button11->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button11->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button11->Location = System::Drawing::Point(31, 3);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(22, 23);
			this->button11->TabIndex = 1;
			this->button11->UseVisualStyleBackColor = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(866, 674);
			this->Controls->Add(this->flowLayoutPanel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->flowLayoutPanel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->flowLayoutPanel1->ResumeLayout(false);
			this->flowLayoutPanel1->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->flowLayoutPanel2->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

				 i.expenses.clear();

				 ofstream inFile("Items.txt", std::ios_base::app | std::ios_base::out);



				 string month = msclr::interop::marshal_as<std::string>(textBox1->Text);
				 i.Name = msclr::interop::marshal_as<std::string>(textBox2->Text);
				 i.Date = msclr::interop::marshal_as<std::string>(textBox3->Text);
				 i.Price = Convert::ToDouble(textBox4->Text);
				 i.Spent = Convert::ToDouble(textBox5->Text);



				 inFile << month << endl;

				 inFile << i.Name << "   ";

				 inFile << i.Date << "   ";

				 inFile << i.Price << "   ";

				 inFile << i.Spent << "   ";

				 i.remain = i.Remain();

				 inFile << i.remain << endl;



	}








	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {

				 i.expenses.clear();
				 store_into_map();

				 string month = msclr::interop::marshal_as<std::string>(textBox1->Text);//name of product
				 string name = msclr::interop::marshal_as<std::string>(textBox2->Text);


				 vector<item>::iterator it1;//iterator on vector to search for product
				 for (it1 = i.expenses[month].begin(); it1 != i.expenses[month].end(); it1++)
				 {
					 if (it1->Name == name)
					 {
						 i.expenses[month].erase(it1);
						 break;
					 }
				 }
				 write_into_map();




	}

	void store_into_map(){

				 ifstream read("Items.txt");
				 item items;
				 string Month;
				
				 while (!read.eof())
				 {
					 read >> Month;
					 if (read.eof())
						 break;
					 read >> items.Name >> items.Date >> items.Price >> items.Spent >> items.remain;
					
					 i.expenses[Month].push_back(items);
				 }
				 read.close();

	}
			 private :string change_month(string date)
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
	void write_into_map()//put something in the file 
	{
				ofstream write("Items.txt");
				unordered_map<string, vector<item>> ::iterator it = i.expenses.begin();
				for (it = i.expenses.begin(); it != i.expenses.end(); it++)
				{
					for (int i = 0; i < it->second.size(); i++)
					{
						write << it->first << endl;
						write << it->second[i].Name << ' ' << it->second[i].Date << ' ' << it->second[i].Price << ' ' << it->second[i].Spent << ' ' << it->second[i].remain << endl;
					}
				}
				write.close();
	}

	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
				 i.expenses.clear();
				 
				 panel1->Show();
				 panel1->BringToFront();
	}

			 //////////////////////////////////////////////////////Search Button//////////////////////////////////////////////////////
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {

				 richTextBox1->Clear();
				 //richTextBox1->AppendText(" Name \t Date \t Price \t Spent \t Remaining \r\n");
				 i.expenses.clear();
				 store_into_map();

				 string Mon = msclr::interop::marshal_as<std::string>(textBox8->Text);

				 vector<item> ::iterator it;
				 ostringstream buffer;
				 it = i.expenses[Mon].begin();



				 for (it = i.expenses[Mon].begin(); it != i.expenses[Mon].end(); it++)
				 {
					 buffer << it->Price;
					 string stringp = buffer.str();
					 buffer.str("");
					 buffer.clear();
					 ostringstream buffer2;
					 buffer2 << it->Spent;
					 string strings = buffer2.str();
					 buffer2.str("");
					 buffer2.clear();
					 ostringstream buffer3;
					 buffer3 << it->remain;
					 string stringr = buffer3.str();
					 buffer3.str("");
					 buffer3.clear();
					 String^ n = gcnew String(it->Name.c_str());
					 String^ d = gcnew String(it->Date.c_str());
					 String^ p = gcnew String(stringp.c_str());
					 String^ s = gcnew String(strings.c_str());
					 String^ r = gcnew String(stringr.c_str());
					 String^ total = " "+n + "  " + d + " \t " + p + "  " + s + "  " + r;
					 richTextBox1->AppendText(total + "\r\n");
				 }










	}
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {

				 i.expenses.clear();
				 int sumation_of_spent = 0, sumation_of_remaining = 0, total_money = 0;
				 store_into_map();

				 string month = msclr::interop::marshal_as<std::string>(textBox9->Text);
				 sumation_of_spent = 0, sumation_of_remaining = 0, total_money = 0;
				 vector<item> ::iterator it;
				 for (it = i.expenses[month].begin(); it != i.expenses[month].end(); it++)
				 {
					 sumation_of_spent = sumation_of_spent + it->Spent;
					 sumation_of_remaining = sumation_of_remaining + it->remain;
				 }

				 total_money = sumation_of_spent + sumation_of_remaining;


				 ostringstream buffer;
				 buffer << sumation_of_spent;
				 string sumation_of_spent_s = buffer.str();
				 buffer.str("");
				 buffer.clear();
				 String^ sumation_of_spent_S = gcnew String(sumation_of_spent_s.c_str());
				 textBox10->Text = sumation_of_spent_S;


				 //sumation_of_remaining


				 buffer << sumation_of_remaining;
				 string sumation_of_remaining_s = buffer.str();
				 buffer.str("");
				 buffer.clear();
				 String^ sumation_of_remaining_S = gcnew String(sumation_of_remaining_s.c_str());
				 textBox11->Text = sumation_of_remaining_S;


				 //total_money
				 buffer << total_money;
				 string total_money_s = buffer.str();
				 buffer.str("");
				 buffer.clear();
				 String^ total_money_S = gcnew String(total_money_s.c_str());
				 textBox12->Text = total_money_S;



	}
	private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
				 i.expenses.clear();
				 richTextBox2->Clear();
				 store_into_map();
				 string month, name;
				 


				 month = msclr::interop::marshal_as<std::string>(textBox13->Text);
				 name = msclr::interop::marshal_as<std::string>(textBox14->Text);


				 vector<item>::iterator it;
				 int counter = 0;
				 for (it = i.expenses[month].begin(); it != i.expenses[month].end(); it++)
				 {
					 if (it->Name == name)
						 counter++;
				 }

				 if (counter == 0)
				 {
					 richTextBox2->Text = "This item doesn't exist!! Try Again.";
				 }
				 else
				 {
					 
					 for (it = i.expenses[month].begin(); it != i.expenses[month].end(); it++)
					 {
						 if (it->Name == name)
						 {
							 ostringstream buffer;
							 buffer << it->Price;
							 string stringp = buffer.str();
							 buffer.str("");
							 buffer.clear();
							 ostringstream buffer2;
							 buffer2 << it->Spent;
							 string strings = buffer2.str();
							 buffer2.str("");
							 buffer2.clear();
							 ostringstream buffer3;
							 buffer3 << it->remain;
							 string stringr = buffer3.str();
							 buffer3.str("");
							 buffer3.clear();
							 String^ n = gcnew String(it->Name.c_str());
							 String^ d = gcnew String(it->Date.c_str());
							 String^ p = gcnew String(stringp.c_str());
							 String^ s = gcnew String(strings.c_str());
							 String^ r = gcnew String(stringr.c_str());


							 richTextBox2->AppendText(" Item Name: " + n + "\r\n");
							 richTextBox2->AppendText(" Item Date: " + d + "\r\n");
							 richTextBox2->AppendText(" Item Price: " + p + "\r\n");
							 richTextBox2->AppendText(" Amount spent: " + s + "\r\n");
							 richTextBox2->AppendText(" Remaining amount: " + r + "\r\n");

							 break;
						 }
					 };





				 }
	}
	

	private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {

				 string month = msclr::interop::marshal_as<std::string>(textBox13->Text);
				 string name = msclr::interop::marshal_as<std::string>(textBox14->Text);
				 string newmonth;
				 vector<item>::iterator it;
				 //Change name
				 if (textBox15->TextLength!=0)
				 {
					 string Name = msclr::interop::marshal_as<std::string>(textBox15->Text); 
					 for (it = i.expenses[month].begin(); it != i.expenses[month].end(); it++)
					 {
						 if (it->Name == name)
						 {
							 it->Name = Name;
							 break;
						 }
					 }
					 write_into_map();
				 }
				 //Change Date
				 if (textBox16->TextLength != 0)
				 {
					
					 string Date = msclr::interop::marshal_as<std::string>(textBox16->Text);
					 newmonth = change_month(Date);
					 string Name2;
					 string newDate = Date;
					 float Price2;
					 float Spent2;
					 float remain2;
					 for (it = i.expenses[month].begin(); it != i.expenses[month].end(); it++)
					 {
						 if (it->Name == name)
						 {
							 Name2 = it->Name;
							 Price2 = it->Price;
							 Spent2 = it->Spent;
							 remain2 = it->remain;
							 i.expenses[month].erase(it);
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
					 i.expenses.clear();
					 store_into_map();
				 }
				 //Change Price & Spent
				 if (textBox17->TextLength != 0)
				 {
					 
					
					 float Price = Convert::ToDouble(textBox17->Text);
					 float Spent = Convert::ToDouble(textBox18->Text);
					 
					 for (it = i.expenses[month].begin(); it != i.expenses[month].end(); it++)
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
				 

	}
private: System::Void label10_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBox3_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void panel2_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
}
private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e) {
			 i.expenses.clear();
			 store_into_map();

			 string month = msclr::interop::marshal_as<std::string>(textBox1->Text);//name of product
			 string name = msclr::interop::marshal_as<std::string>(textBox2->Text);


			 vector<item>::iterator it1;//iterator on vector to search for product
			 for (it1 = i.expenses[month].begin(); it1 != i.expenses[month].end(); it1++)
			 {
				 if (it1->Name == name)
				 {
					 i.expenses[month].erase(it1);
					 break;
				 }
			 }
			 write_into_map();



}
private: System::Void circularProgressBar1_Load(System::Object^  sender, System::EventArgs^  e) {

			 
}
private: System::Void pictureBox5_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
			 panel4->Hide();
			 panel3->Hide();
			 panel2->Hide();
			 panel1->BringToFront();
}
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
			
			 panel4->Hide();
			 panel3->Hide();
			 panel2->Show();
			 panel2->BringToFront();



}
private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {
			 
			 panel1->Show();
			 panel2->Show();
			 panel4->Hide();
			 panel3->Show();
			 panel3->BringToFront();

}
private: System::Void flowLayoutPanel3_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
}
private: System::Void button2_Click_1(System::Object^  sender, System::EventArgs^  e) {
			 circularProgress1->Value = 0;
			 panel1->Show();
			 panel2->Show();
			 panel3->Show();
			 panel4->Show();
			 panel4->BringToFront();
}

		 /////////////////////////////////////////////////ADD Button/////////////////////////////////
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
			 i.expenses.clear();

			 ofstream inFile("Items.txt", std::ios_base::app | std::ios_base::out);



			 string month = msclr::interop::marshal_as<std::string>(textBox1->Text);
			 i.Name = msclr::interop::marshal_as<std::string>(textBox2->Text);
			 i.Date = msclr::interop::marshal_as<std::string>(textBox3->Text);
			 i.Price = Convert::ToDouble(textBox4->Text);
			 i.Spent = Convert::ToDouble(textBox5->Text);



			 inFile << month << endl;

			 inFile << i.Name << "   ";

			 inFile << i.Date << "   ";

			 inFile << i.Price << "   ";

			 inFile << i.Spent << "   ";

			 i.remain = i.Remain();

			 inFile << i.remain << endl;

}
		 /////////////////////////////////////////Delete Button////////////////////////////////////
private: System::Void button12_Click(System::Object^  sender, System::EventArgs^  e) {
			 i.expenses.clear();
			 store_into_map();

			 string month = msclr::interop::marshal_as<std::string>(textBox1->Text);//name of product
			 string name = msclr::interop::marshal_as<std::string>(textBox2->Text);


			 vector<item>::iterator it1;//iterator on vector to search for product
			 for (it1 = i.expenses[month].begin(); it1 != i.expenses[month].end(); it1++)
			 {
				 if (it1->Name == name)
				 {
					 i.expenses[month].erase(it1);
					 break;
				 }
			 }
			 write_into_map();
}
private: System::Void button13_Click(System::Object^  sender, System::EventArgs^  e) {

			 i.expenses.clear();
			 int sumation_of_spent = 0, sumation_of_remaining = 0, total_money = 0;
			 store_into_map();

			 string month = msclr::interop::marshal_as<std::string>(textBox9->Text);
			 sumation_of_spent = 0, sumation_of_remaining = 0, total_money = 0;
			 vector<item> ::iterator it;
			 for (it = i.expenses[month].begin(); it != i.expenses[month].end(); it++)
			 {
				 sumation_of_spent = sumation_of_spent + it->Spent;
				 sumation_of_remaining = sumation_of_remaining + it->remain;
			 }

			 total_money = sumation_of_spent + sumation_of_remaining;


			 ostringstream buffer;
			 buffer << sumation_of_spent;
			 string sumation_of_spent_s = buffer.str();
			 buffer.str("");
			 buffer.clear();
			 String^ sumation_of_spent_S = gcnew String(sumation_of_spent_s.c_str());
			 textBox10->Text = sumation_of_spent_S;


			 //sumation_of_remaining


			 buffer << sumation_of_remaining;
			 string sumation_of_remaining_s = buffer.str();
			 buffer.str("");
			 buffer.clear();
			 String^ sumation_of_remaining_S = gcnew String(sumation_of_remaining_s.c_str());
			 textBox11->Text = sumation_of_remaining_S;


			 //total_money
			 buffer << total_money;
			 string total_money_s = buffer.str();
			 buffer.str("");
			 buffer.clear();
			 String^ total_money_S = gcnew String(total_money_s.c_str());
			 textBox12->Text = total_money_S;

			 circularProgress1->Value = (sumation_of_spent * 100) / total_money;
}
private: System::Void panel4_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
}
private: System::Void button1_Click_1(System::Object^  sender, System::EventArgs^  e) {

			 Environment::Exit(0);
}
};
	}

	