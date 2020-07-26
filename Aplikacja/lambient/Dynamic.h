#pragma once
#include "Settings.h"
#include <string>
#include <Windows.h>
#include <vector>
#include "Kolor.h"
#include <regex>
#include <cliext/vector>

namespace lambient {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Threading;
	

	/// <summary>
	/// Summary for Dynamic
	/// </summary>
	public ref class Dynamic : public System::Windows::Forms::Form
	{
	public:
		Dynamic(void);

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Dynamic()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	protected:
	private: System::Windows::Forms::Label^  version;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  startbutton;
	private: System::Windows::Forms::NumericUpDown^  edgerange;

			 ////////////////TEST////////////////////TEST
			 //DynamicThread^ o1();
			 Thread^ oThread1;
			 Thread^ oThread2;
			 Thread^ oThread3;
			 Thread^ oThread4;
			 Kolor^ k1=gcnew Kolor();
			 Kolor^ k2 = gcnew Kolor();
			 Kolor^ k3 = gcnew Kolor();
			 Compfl^ cmpfl=gcnew Compfl();
			 cliext::vector<Compfl^> compositionVector;
			 

			 /////////////////////////////////
	private: System::Windows::Forms::NumericUpDown^  uprange;

	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;





	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::RadioButton^  rB2;
	private: System::Windows::Forms::RadioButton^  rB1;
	private: System::Windows::Forms::PictureBox^  modebox;
			 Settings^ set1 = gcnew Settings();
	private: bool running = false;
	private: System::Windows::Forms::PictureBox^  modeBox2;
	private: System::Windows::Forms::Button^  stopbutton;
	private: System::Windows::Forms::RadioButton^  dbutton;

	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::RadioButton^  cbutton;
	private: System::Windows::Forms::GroupBox^  groupBox4;
	private: System::Windows::Forms::NumericUpDown^  timebox;

	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::NumericUpDown^  numberboxb;
	private: System::Windows::Forms::NumericUpDown^  numberboxg;
	private: System::Windows::Forms::NumericUpDown^  numberboxr;
	public: System::Windows::Forms::PictureBox^  rgbbox;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Label^  label8;



	private: System::Windows::Forms::GroupBox^  groupBox5;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Button^  button8;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Dynamic::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->version = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->startbutton = (gcnew System::Windows::Forms::Button());
			this->edgerange = (gcnew System::Windows::Forms::NumericUpDown());
			this->uprange = (gcnew System::Windows::Forms::NumericUpDown());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->rB2 = (gcnew System::Windows::Forms::RadioButton());
			this->rB1 = (gcnew System::Windows::Forms::RadioButton());
			this->modebox = (gcnew System::Windows::Forms::PictureBox());
			this->modeBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->stopbutton = (gcnew System::Windows::Forms::Button());
			this->dbutton = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->cbutton = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->timebox = (gcnew System::Windows::Forms::NumericUpDown());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->numberboxb = (gcnew System::Windows::Forms::NumericUpDown());
			this->numberboxg = (gcnew System::Windows::Forms::NumericUpDown());
			this->numberboxr = (gcnew System::Windows::Forms::NumericUpDown());
			this->rgbbox = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->edgerange))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->uprange))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->modebox))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->modeBox2))->BeginInit();
			this->groupBox3->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->groupBox5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->timebox))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numberboxb))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numberboxg))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numberboxr))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->rgbbox))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button1->Location = System::Drawing::Point(496, 7);
			this->button1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(69, 24);
			this->button1->TabIndex = 18;
			this->button1->Text = L"Settings";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Dynamic::button1_Click);
			// 
			// version
			// 
			this->version->AutoSize = true;
			this->version->BackColor = System::Drawing::Color::Transparent;
			this->version->ForeColor = System::Drawing::Color::Cornsilk;
			this->version->Location = System::Drawing::Point(11, 10);
			this->version->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->version->Name = L"version";
			this->version->Size = System::Drawing::Size(38, 13);
			this->version->TabIndex = 17;
			this->version->Text = L"V 0.97";
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button2->Location = System::Drawing::Point(573, 7);
			this->button2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(48, 24);
			this->button2->TabIndex = 16;
			this->button2->Text = L"Exit";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Dynamic::button2_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Impact", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button4->Location = System::Drawing::Point(9, 387);
			this->button4->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(70, 24);
			this->button4->TabIndex = 20;
			this->button4->Text = L"Return";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Dynamic::button4_Click);
			// 
			// startbutton
			// 
			this->startbutton->Font = (gcnew System::Drawing::Font(L"Impact", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->startbutton->Location = System::Drawing::Point(554, 383);
			this->startbutton->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->startbutton->Name = L"startbutton";
			this->startbutton->Size = System::Drawing::Size(68, 28);
			this->startbutton->TabIndex = 19;
			this->startbutton->Text = L"Start";
			this->startbutton->UseVisualStyleBackColor = true;
			this->startbutton->Click += gcnew System::EventHandler(this, &Dynamic::button5_Click);
			// 
			// edgerange
			// 
			this->edgerange->Location = System::Drawing::Point(82, 36);
			this->edgerange->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->edgerange->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 900, 0, 0, 0 });
			this->edgerange->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 50, 0, 0, 0 });
			this->edgerange->Name = L"edgerange";
			this->edgerange->Size = System::Drawing::Size(90, 20);
			this->edgerange->TabIndex = 22;
			this->edgerange->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 50, 0, 0, 0 });
			this->edgerange->ValueChanged += gcnew System::EventHandler(this, &Dynamic::numericUpDown2_ValueChanged);
			// 
			// uprange
			// 
			this->uprange->Location = System::Drawing::Point(82, 70);
			this->uprange->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->uprange->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 900, 0, 0, 0 });
			this->uprange->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 50, 0, 0, 0 });
			this->uprange->Name = L"uprange";
			this->uprange->Size = System::Drawing::Size(90, 20);
			this->uprange->TabIndex = 23;
			this->uprange->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 50, 0, 0, 0 });
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::Transparent;
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->uprange);
			this->groupBox1->Controls->Add(this->edgerange);
			this->groupBox1->ForeColor = System::Drawing::Color::White;
			this->groupBox1->Location = System::Drawing::Point(7, 211);
			this->groupBox1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->groupBox1->Size = System::Drawing::Size(188, 101);
			this->groupBox1->TabIndex = 24;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Capture Range";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(8, 74);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(21, 13);
			this->label3->TabIndex = 26;
			this->label3->Text = L"Up";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(8, 36);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(55, 13);
			this->label2->TabIndex = 25;
			this->label2->Text = L"Left/Right";
			this->label2->Click += gcnew System::EventHandler(this, &Dynamic::label2_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->BackColor = System::Drawing::Color::Transparent;
			this->groupBox2->Controls->Add(this->rB2);
			this->groupBox2->Controls->Add(this->rB1);
			this->groupBox2->ForeColor = System::Drawing::Color::White;
			this->groupBox2->Location = System::Drawing::Point(7, 103);
			this->groupBox2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Padding = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->groupBox2->Size = System::Drawing::Size(188, 103);
			this->groupBox2->TabIndex = 28;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Capture Zones";
			this->groupBox2->Enter += gcnew System::EventHandler(this, &Dynamic::groupBox2_Enter);
			// 
			// rB2
			// 
			this->rB2->AutoSize = true;
			this->rB2->Location = System::Drawing::Point(26, 63);
			this->rB2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->rB2->Name = L"rB2";
			this->rB2->Size = System::Drawing::Size(97, 17);
			this->rB2->TabIndex = 1;
			this->rB2->Text = L"Left/Right/Top";
			this->rB2->UseVisualStyleBackColor = true;
			this->rB2->CheckedChanged += gcnew System::EventHandler(this, &Dynamic::rB2_CheckedChanged);
			// 
			// rB1
			// 
			this->rB1->AutoSize = true;
			this->rB1->Checked = true;
			this->rB1->Location = System::Drawing::Point(26, 31);
			this->rB1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->rB1->Name = L"rB1";
			this->rB1->Size = System::Drawing::Size(73, 17);
			this->rB1->TabIndex = 0;
			this->rB1->TabStop = true;
			this->rB1->Text = L"Left/Right";
			this->rB1->UseVisualStyleBackColor = true;
			this->rB1->CheckedChanged += gcnew System::EventHandler(this, &Dynamic::rB1_CheckedChanged);
			// 
			// modebox
			// 
			this->modebox->BackColor = System::Drawing::Color::Transparent;
			this->modebox->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"modebox.BackgroundImage")));
			this->modebox->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->modebox->Location = System::Drawing::Point(33, 17);
			this->modebox->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->modebox->Name = L"modebox";
			this->modebox->Size = System::Drawing::Size(135, 81);
			this->modebox->TabIndex = 29;
			this->modebox->TabStop = false;
			// 
			// modeBox2
			// 
			this->modeBox2->BackColor = System::Drawing::Color::Transparent;
			this->modeBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"modeBox2.BackgroundImage")));
			this->modeBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->modeBox2->Location = System::Drawing::Point(33, 17);
			this->modeBox2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->modeBox2->Name = L"modeBox2";
			this->modeBox2->Size = System::Drawing::Size(135, 81);
			this->modeBox2->TabIndex = 30;
			this->modeBox2->TabStop = false;
			this->modeBox2->Visible = false;
			this->modeBox2->Click += gcnew System::EventHandler(this, &Dynamic::modeBox2_Click);
			// 
			// stopbutton
			// 
			this->stopbutton->Font = (gcnew System::Drawing::Font(L"Impact", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->stopbutton->Location = System::Drawing::Point(482, 383);
			this->stopbutton->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->stopbutton->Name = L"stopbutton";
			this->stopbutton->Size = System::Drawing::Size(68, 28);
			this->stopbutton->TabIndex = 31;
			this->stopbutton->Text = L"Stop";
			this->stopbutton->UseVisualStyleBackColor = true;
			this->stopbutton->Click += gcnew System::EventHandler(this, &Dynamic::stopbutton_Click);
			// 
			// dbutton
			// 
			this->dbutton->AutoSize = true;
			this->dbutton->BackColor = System::Drawing::Color::Transparent;
			this->dbutton->Checked = true;
			this->dbutton->Location = System::Drawing::Point(11, 41);
			this->dbutton->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->dbutton->Name = L"dbutton";
			this->dbutton->Size = System::Drawing::Size(14, 13);
			this->dbutton->TabIndex = 32;
			this->dbutton->TabStop = true;
			this->dbutton->UseVisualStyleBackColor = false;
			this->dbutton->CheckedChanged += gcnew System::EventHandler(this, &Dynamic::radioButton1_CheckedChanged);
			// 
			// groupBox3
			// 
			this->groupBox3->BackColor = System::Drawing::Color::Transparent;
			this->groupBox3->Controls->Add(this->modeBox2);
			this->groupBox3->Controls->Add(this->groupBox1);
			this->groupBox3->Controls->Add(this->groupBox2);
			this->groupBox3->Controls->Add(this->modebox);
			this->groupBox3->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->groupBox3->Location = System::Drawing::Point(27, 41);
			this->groupBox3->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Padding = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->groupBox3->Size = System::Drawing::Size(203, 326);
			this->groupBox3->TabIndex = 33;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Dynamic Mode";
			// 
			// cbutton
			// 
			this->cbutton->AutoSize = true;
			this->cbutton->BackColor = System::Drawing::Color::Transparent;
			this->cbutton->Location = System::Drawing::Point(282, 41);
			this->cbutton->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->cbutton->Name = L"cbutton";
			this->cbutton->Size = System::Drawing::Size(14, 13);
			this->cbutton->TabIndex = 34;
			this->cbutton->UseVisualStyleBackColor = false;
			this->cbutton->CheckedChanged += gcnew System::EventHandler(this, &Dynamic::cbutton_CheckedChanged);
			// 
			// groupBox4
			// 
			this->groupBox4->BackColor = System::Drawing::Color::Transparent;
			this->groupBox4->Controls->Add(this->groupBox5);
			this->groupBox4->Controls->Add(this->button6);
			this->groupBox4->Controls->Add(this->button5);
			this->groupBox4->Controls->Add(this->button3);
			this->groupBox4->Controls->Add(this->label7);
			this->groupBox4->Controls->Add(this->textBox1);
			this->groupBox4->Controls->Add(this->timebox);
			this->groupBox4->Controls->Add(this->label6);
			this->groupBox4->Controls->Add(this->numberboxb);
			this->groupBox4->Controls->Add(this->numberboxg);
			this->groupBox4->Controls->Add(this->numberboxr);
			this->groupBox4->Controls->Add(this->rgbbox);
			this->groupBox4->Controls->Add(this->label1);
			this->groupBox4->Controls->Add(this->label4);
			this->groupBox4->Controls->Add(this->label5);
			this->groupBox4->Enabled = false;
			this->groupBox4->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->groupBox4->Location = System::Drawing::Point(299, 41);
			this->groupBox4->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Padding = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->groupBox4->Size = System::Drawing::Size(309, 325);
			this->groupBox4->TabIndex = 35;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Composition Mode";
			// 
			// groupBox5
			// 
			this->groupBox5->BackColor = System::Drawing::Color::Transparent;
			this->groupBox5->Controls->Add(this->button8);
			this->groupBox5->Controls->Add(this->textBox2);
			this->groupBox5->Controls->Add(this->label8);
			this->groupBox5->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->groupBox5->Location = System::Drawing::Point(147, 37);
			this->groupBox5->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Padding = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->groupBox5->Size = System::Drawing::Size(158, 72);
			this->groupBox5->TabIndex = 36;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"Load Composition";
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::Transparent;
			this->button8->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button8.BackgroundImage")));
			this->button8->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->Font = (gcnew System::Drawing::Font(L"Impact", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button8->ForeColor = System::Drawing::Color::Black;
			this->button8->Location = System::Drawing::Point(129, 38);
			this->button8->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(25, 25);
			this->button8->TabIndex = 38;
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &Dynamic::button8_Click);
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->textBox2->Location = System::Drawing::Point(12, 37);
			this->textBox2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(111, 26);
			this->textBox2->TabIndex = 37;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &Dynamic::textBox2_TextChanged);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Font = (gcnew System::Drawing::Font(L"Impact", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label8->ForeColor = System::Drawing::Color::White;
			this->label8->Location = System::Drawing::Point(8, 15);
			this->label8->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(131, 20);
			this->label8->TabIndex = 32;
			this->label8->Text = L"Composition Name";
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->button6->Font = (gcnew System::Drawing::Font(L"Impact", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button6->ForeColor = System::Drawing::Color::Black;
			this->button6->Location = System::Drawing::Point(87, 281);
			this->button6->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(122, 31);
			this->button6->TabIndex = 30;
			this->button6->Text = L"Save Composition ";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &Dynamic::button6_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->button5->Font = (gcnew System::Drawing::Font(L"Impact", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button5->ForeColor = System::Drawing::Color::Black;
			this->button5->Location = System::Drawing::Point(87, 247);
			this->button5->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(122, 31);
			this->button5->TabIndex = 29;
			this->button5->Text = L"Delete Last Color";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &Dynamic::button5_Click_1);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->button3->Font = (gcnew System::Drawing::Font(L"Impact", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button3->ForeColor = System::Drawing::Color::Black;
			this->button3->Location = System::Drawing::Point(87, 211);
			this->button3->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(122, 31);
			this->button3->TabIndex = 28;
			this->button3->Text = L"Add Color";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Dynamic::button3_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Impact", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label7->ForeColor = System::Drawing::Color::White;
			this->label7->Location = System::Drawing::Point(20, 24);
			this->label7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(131, 20);
			this->label7->TabIndex = 27;
			this->label7->Text = L"Composition Name";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->textBox1->Location = System::Drawing::Point(24, 47);
			this->textBox1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(116, 23);
			this->textBox1->TabIndex = 26;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Dynamic::textBox1_TextChanged);
			// 
			// timebox
			// 
			this->timebox->BackColor = System::Drawing::Color::White;
			this->timebox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->timebox->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100, 0, 0, 0 });
			this->timebox->Location = System::Drawing::Point(77, 171);
			this->timebox->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->timebox->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000, 0, 0, 0 });
			this->timebox->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 500, 0, 0, 0 });
			this->timebox->Name = L"timebox";
			this->timebox->Size = System::Drawing::Size(62, 26);
			this->timebox->TabIndex = 25;
			this->timebox->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 500, 0, 0, 0 });
			this->timebox->ValueChanged += gcnew System::EventHandler(this, &Dynamic::numericUpDown1_ValueChanged);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Impact", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label6->ForeColor = System::Drawing::Color::White;
			this->label6->Location = System::Drawing::Point(4, 176);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(73, 20);
			this->label6->TabIndex = 24;
			this->label6->Text = L"Time [ms]";
			this->label6->Click += gcnew System::EventHandler(this, &Dynamic::label6_Click);
			// 
			// numberboxb
			// 
			this->numberboxb->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->numberboxb->Location = System::Drawing::Point(49, 138);
			this->numberboxb->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->numberboxb->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 255, 0, 0, 0 });
			this->numberboxb->Name = L"numberboxb";
			this->numberboxb->Size = System::Drawing::Size(90, 26);
			this->numberboxb->TabIndex = 23;
			// 
			// numberboxg
			// 
			this->numberboxg->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->numberboxg->Location = System::Drawing::Point(49, 106);
			this->numberboxg->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->numberboxg->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 255, 0, 0, 0 });
			this->numberboxg->Name = L"numberboxg";
			this->numberboxg->Size = System::Drawing::Size(90, 26);
			this->numberboxg->TabIndex = 22;
			this->numberboxg->ValueChanged += gcnew System::EventHandler(this, &Dynamic::numberboxg_ValueChanged);
			// 
			// numberboxr
			// 
			this->numberboxr->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->numberboxr->Location = System::Drawing::Point(49, 73);
			this->numberboxr->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->numberboxr->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 255, 0, 0, 0 });
			this->numberboxr->Name = L"numberboxr";
			this->numberboxr->Size = System::Drawing::Size(90, 26);
			this->numberboxr->TabIndex = 20;
			this->numberboxr->ValueChanged += gcnew System::EventHandler(this, &Dynamic::numberboxr_ValueChanged);
			// 
			// rgbbox
			// 
			this->rgbbox->BackColor = System::Drawing::Color::Transparent;
			this->rgbbox->Location = System::Drawing::Point(158, 149);
			this->rgbbox->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->rgbbox->Name = L"rgbbox";
			this->rgbbox->Size = System::Drawing::Size(141, 58);
			this->rgbbox->TabIndex = 21;
			this->rgbbox->TabStop = false;
			this->rgbbox->Click += gcnew System::EventHandler(this, &Dynamic::rgbbox_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Impact", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label1->Location = System::Drawing::Point(25, 138);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(21, 23);
			this->label1->TabIndex = 19;
			this->label1->Text = L"B";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Impact", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label4->ForeColor = System::Drawing::Color::Lime;
			this->label4->Location = System::Drawing::Point(25, 106);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(20, 23);
			this->label4->TabIndex = 18;
			this->label4->Text = L"G";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Impact", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label5->ForeColor = System::Drawing::Color::Red;
			this->label5->Location = System::Drawing::Point(25, 74);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(20, 23);
			this->label5->TabIndex = 17;
			this->label5->Text = L"R";
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// Dynamic
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(628, 413);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->cbutton);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->dbutton);
			this->Controls->Add(this->stopbutton);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->startbutton);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->version);
			this->Controls->Add(this->button2);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"Dynamic";
			this->Text = L"Dynamic";
			this->Load += gcnew System::EventHandler(this, &Dynamic::Dynamic_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->edgerange))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->uprange))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->modebox))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->modeBox2))->EndInit();
			this->groupBox3->ResumeLayout(false);
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->groupBox5->ResumeLayout(false);
			this->groupBox5->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->timebox))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numberboxb))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numberboxg))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numberboxr))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->rgbbox))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void groupBox2_Enter(System::Object^  sender, System::EventArgs^  e) {
	}
			 //Lokalizacja bêdzie zmienna
	private: System::Void rB2_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		//Problem
		this->modebox->Visible = false;
		this->modeBox2->Visible = true;
		
	}
	private: System::Void rB1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		//Problem
		this->modebox->Visible = true;
		this->modeBox2->Visible = false;
	
	}
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
		if (set1->serialPort1->IsOpen)
		{
			this->DialogResult = System::Windows::Forms::DialogResult::OK;
			set1->serialPort1->Close();
		}
		//MyForm::FormWindowState::Minimized;
		this->Hide();
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		this->DialogResult = System::Windows::Forms::DialogResult::OK;
		Application::Exit();
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		set1->Show();
	}
	 //W³¹czenie trybu dynamicznego
	private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e);

	private: System::Void numericUpDown2_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void stopbutton_Click(System::Object^  sender, System::EventArgs^  e) {
		//running = false;
		this->groupBox3->Enabled = true;
		this->groupBox4->Enabled = true;
		this->button1->Enabled = true;
		this->button2->Enabled = true;
		this->startbutton->Enabled = true;
		if (running == true)
		{ 

		int mode;
		if (rB1->Checked)
		{
			mode = 0;

		}
		else
		{
			mode = 1;
		}
		groupBox1->Enabled = true;
		groupBox2->Enabled = true;
		button1->Enabled = true;
		button2->Enabled = true;
		button4->Enabled = true;
		
		this->oThread1->Abort();
		this->set1->usend(0, 0, 0);
		this->set1->usend(0, 0, 0);
		this->set1->usend(0, 0, 0);
		//this->oThread2->Abort();
		//this->oThread3->Abort();
		/*
		if (mode == 1)
		{
			this->oThread1->Abort();
		}
		*/
		running = false;
		
		}
	}

	private: System::Void rightBox_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void modeBox2_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void Dynamic_Load(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void radioButton1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	if (this->dbutton->Checked)
	{
		this->cbutton->Checked = false;
		this->groupBox3->Enabled = true;
		this->groupBox4->Enabled = false;
	}
	if (!this->dbutton->Checked)
	{
		this->cbutton->Checked = true;
		this->groupBox4->Enabled = true;
		this->groupBox3->Enabled = false;
	}
}
private: System::Void label6_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void numericUpDown1_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void rgbbox_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void numberboxr_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {

	compositionVector.push_back(gcnew Compfl(System::Convert::ToString(numberboxr->Value), System::Convert::ToString(numberboxg->Value), System::Convert::ToString(numberboxb->Value), System::Convert::ToString(timebox->Value)));

}
private: System::Void cbutton_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	if (this->cbutton->Checked)
	{
		this->dbutton->Checked = false;
		this->groupBox4->Enabled = true;
	}
	if (!this->cbutton->Checked)
	{
		this->dbutton->Checked = true;
		this->groupBox3->Enabled = true;
	}
}
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
	//WCZYTYWANIE DANYCH DO WEKTORA KOMPOZYCJI
	
	
	//temp= openFileDialog1->FileName;
	//System::IO::File::OpenRead(temp);
	//System::IO::File::ReadAllLines(temp);
	//for(int i=0;i< System::IO::File::ReadAllLines(te)
	

}
private: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {

}
private: System::Void numberboxg_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button5_Click_1(System::Object^  sender, System::EventArgs^  e) {
	if (compositionVector.size() != 0)
	{
		compositionVector.pop_back();
	}
	else
	{
		MessageBox::Show("No colors stored","Oops!");
	}
}
	private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
		//c1.at(1) = L'x';

		String^ cmpname = textBox1->Text;
		if (cmpname->Length == 0)
		{
			MessageBox::Show("No name for file", "Oops!");
		}
		else
		{
			//cmpname = "C:\\Users\\Krzysiek\\source\\repos\\lambient\\Debug\\Comp"+cmpname + '.txt';
			cmpname = "Comp\\" + cmpname + ".txt";
			//System::IO::File::Create(cmpname);
			Compfl temp;
			if (!System::IO::File::Exists(cmpname))
			{
				// Create a file to write to
				System::IO::StreamWriter^ sw = System::IO::File::CreateText(cmpname);
				try
				{
					//	System::IO::StreamWriter^ sw = System::IO::File::AppendText(cmpname);
					for (int i = 0; i < compositionVector.size(); i++)
					{
						temp.b = compositionVector.at(i)->b;
						temp.t = compositionVector.at(i)->t;
						temp.r = compositionVector.at(i)->r;
						temp.g = compositionVector.at(i)->g;

						/*
						System::IO::File::AppendAllText(cmpname, temp.r);
						System::IO::File::AppendAllText(cmpname, temp.g);
						System::IO::File::AppendAllText(cmpname, temp.b);
						System::IO::File::AppendAllText(cmpname, temp.t);*/
						
						sw->WriteLine(temp.r);
						sw->WriteLine(temp.g);
						sw->WriteLine(temp.b);
						sw->WriteLine(temp.t);

					}
					MessageBox::Show("Composition saved.", "SUCCESS");
				}
				finally
				{
				   if (sw)
					  delete (IDisposable^)sw;
				}
			}
			else
			{
				System::IO::StreamWriter^ sw = System::IO::File::AppendText(cmpname);
				try
				{
					for (int i = 0; i < compositionVector.size(); i++)
					{
						temp.b = compositionVector.at(i)->b;
						temp.t = compositionVector.at(i)->t;
						temp.r = compositionVector.at(i)->r;
						temp.g = compositionVector.at(i)->g;

						/*
						System::IO::File::AppendAllText(cmpname, temp.r);
						System::IO::File::AppendAllText(cmpname, temp.g);
						System::IO::File::AppendAllText(cmpname, temp.b);
						System::IO::File::AppendAllText(cmpname, temp.t);*/
						sw->WriteLine(temp.r);
						sw->WriteLine(temp.g);
						sw->WriteLine(temp.b);
						sw->WriteLine(temp.t);

					}
				}
				finally
				{
				   if (sw)
					  delete (IDisposable^)sw;
				}
			}

		}
	}
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
	openFileDialog1->Filter = "Text File|*.txt|Word Doc|*.doc";
	openFileDialog1->InitialDirectory = "%HOMEPATH%\\Desktop\\AmbientRGB\\Comp";
	openFileDialog1->Title = "Open Text Files";
	openFileDialog1->ShowDialog();
	System::String^ showname = "";
	System::String^ filename = openFileDialog1->FileName;
	if(filename!="openFileDialog1")
	{ 
	for (int i = filename->Length - 5; i > 0; i--)//Usuwanie .txt z nazwy pliku
	{
		if (filename[i].Equals(92))
		{
			break;
		}
		showname = filename[i] + showname;
	}
	this->textBox2->Text = showname;
	}
}
};
	//W¹tek do przechwytywania danych
		public ref class DynamicThread : public Dynamic
		{
			int mode, side, up;//1 to 3 boki,0 to 2 boki
			Settings^ set1;
			Kolor c1, c2, c3;
			Kolor^ clr;
			Kolor^ clr2;
			Kolor^ clr3;
		public:
			Thread^ oThread2;
		public: DynamicThread()
		{
		}
		public: DynamicThread(Settings^ set1, Kolor^ &cl, Kolor^ &cl2, Kolor^ &cl3)
		{
		

		
			this->clr = cl2;
			this->clr3 = cl3;
			this->set1 = set1;
			this->clr = cl;

		}
		public: DynamicThread(int mode, int side, int up, Settings^ set1, Kolor ^&cl)
		{

		
			this->mode = mode;
			this->side = side;
			this->up = up;
			this->set1 = set1;
			this->clr = cl;
		

		}
		public: DynamicThread(int mode, int side, int up, Settings^ set1)
		{
			this->mode = mode;
			this->side = side;
			this->up = up;
			this->set1 = set1;
		
		}
		public:
			void ThreadProc()
			{
				COLORREF col1,col2;
			
				HWND hwnd;
				HDC hdc;
				hdc = GetDC(hwnd);
				FindWindowA(NULL, "tr");
				while (true)
				{
					c1.r = c1.b = c1.g = c2.b = c2.r = c2.g = c3.r = c3.g = c3.b = 0;
					int s = 0;
					//BOKI
						for (int y=0; y < 1080; y +=(1080/2))
						{
							for (int x = 0; x < side; x += (side / 2))
							{
								col1 = GetPixel(hdc, x, y);
								c1.r = c1.r + GetRValue(col1);
								c1.g = c1.g + GetGValue(col1);
								c1.b = c1.b + GetBValue(col1);
							
								col2 = GetPixel(hdc, 1919 - x, y);
								c2.r = c2.r + GetRValue(col2);
								c2.g = c2.g + GetGValue(col2);
								c2.b = c2.b + GetBValue(col2);
						
								s++;
							}
						
						}
						c1.r = c1.r / s;
						c1.g = c1.g / s;
						c1.b = c1.b / s;
						c2.r = c2.r / s;
						c2.g = c2.g / s;
						c2.b = c2.b / s;
				
					
						s = 0;
						if (mode == 1) //GÓRA i boki
						{
							//MessageBox::Show("running in full mode");
						for(int x = 0; x < 1920; x +=(1920/2))
						{
							for (int y = 0; y < up; y += (up / 2))
							{
								col1 = GetPixel(hdc, x, y);
								c3.r = c3.r + GetRValue(col1);
								c3.g = c3.g + GetGValue(col1);
								c3.b = c3.b + GetBValue(col1);
								s++;
							}
						}

						c3.r = c3.r / s;
						c3.g = c3.g / s;
						c3.b = c3.b / s;
					

						}
					
					
						this->set1->usend(c1.r, c1.g, c1.b);
						this->set1->usend(c2.r, c2.g, c2.b);
						this->set1->usend(c3.r, c3.g, c3.b);
				
					

				}
		
			}
			void ThreadLeft()
			{
				COLORREF col1;
				int s = 0;
				HWND hwnd;
				HDC hdc;
				hdc = GetDC(hwnd);
				FindWindowA(NULL, "tr");
				while (true)
				{
					for (int y = 0; y < 1080; y += (1080 / 5))
					{
						for (int x = 0; x < side; x += (side / 5))
						{
							col1 = GetPixel(hdc, x, y);
							c1.r = c1.r + GetRValue(col1);
							c1.g = c1.g + GetGValue(col1);
							c1.b = c1.b + GetBValue(col1);
							s++;
						}

					}
					c1.r = c1.r / s;
					c1.g = c1.g / s;
					c1.b = c1.b / s;
					s = 0;

					this->clr->r = c1.r;
					this->clr->b = c1.b;
					this->clr->g = c1.b;
					c1.r = c1.b = c1.g = 0;
				}
			}
			void ThreadRight()
			{
				COLORREF col1;
				int s = 0;
				HWND hwnd;
				HDC hdc;
				hdc = GetDC(hwnd);
				FindWindowA(NULL, "tr");
				while (true)
				{
					for (int y = 0; y < 1080; y += (1080 / 5))
					{
						for (int x = 0; x < side; x += (side / 5))
						{
						

							col1 = GetPixel(hdc, 1920 - x, y);
							c2.r = c2.r + GetRValue(col1);
							c2.g = c2.g + GetGValue(col1);
							c2.b = c2.b + GetBValue(col1);
							s++;
						}

					}
					c2.r = c2.r / s;
					c2.g = c2.g / s;
					c2.b = c2.b / s;
					s = 0;

					this->clr->r = c2.r;
					this->clr->b = c2.b;
					this->clr->g = c2.b;
					c2.r = c2.b = c2.g = 0;
				}
			}
			void ThreadTop()
			{
				COLORREF col1;
				int s = 0;
				HWND hwnd;
				HDC hdc;
				hdc = GetDC(hwnd);
				FindWindowA(NULL, "tr");
				while (true)
				{
					for (int x = 0; x < 1920; x += (1920 / 5))
					{
						for (int y = 0; y < up; y += (up / 5))
						{
							col1 = GetPixel(hdc, x, y);
							c1.r = c1.r + GetRValue(col1);
							c1.g = c1.g + GetGValue(col1);
							c1.b = c1.b + GetBValue(col1);
							s++;
						}
					}
					c1.r = c1.r / s;
					c1.g = c1.g / s;
					c1.b = c1.b / s;
					s = 0;

					this->clr->r = c1.r;
					this->clr->b = c1.b;
					this->clr->g = c1.b;
					c1.r = c1.b = c1.g = 0;
				}
			}
			void ThreadSend()
			{
				Sleep(1500);

					this->c1.r = this->clr->r;
					this->c1.g = this->clr->g;
					this->c1.b = this->clr->b;
					int i = this->clr->r;
					int j = this->clr->g;
					int k = this->clr->b;
					MessageBox::Show("Sending R: " + i + "G: " + j + "B: " + k);
					this->c2.r = this->clr2->r;
					this->c2.g = this->clr2->g;
					this->c2.b = this->clr2->b;

					this->c3.r = this->clr3->r;
					this->c3.g = this->clr3->g;
					this->c3.b = this->clr3->b;

					this->set1->usend(c1.g, c1.g, c1.b);
					this->set1->usend(c2.r, c2.g, c2.b);
					this->set1->usend(c3.r, c3.g, c3.b);
			
			
			}
		};
		public ref class ComboThread : public Dynamic
		{
			//W¹tek kompozycji
			System::String^ filename;
			Settings^ set1;
			int run = 0;
			public: ComboThread()
			{
				this->filename = "";
				this->run = 0;
			}
			ComboThread(System::String^ name, Settings^ set1)
			{
				this->filename = name;
				this->run = 0;
				this->set1 = set1;
			}
			public: void readProc()
			{
				//Proces czytania
				if (run == 0)
				{
					if (filename->Length != 0)
					{
						filename = "Comp\\" + filename + ".txt";
						run++;
					}
					else
					{
					//
					}
					
				}
				if (filename->Length != 0)
				{
					System::String^ r;
					System::String^ g;
					System::String^ b;
					System::String^ t;
					int count = 0;
					while (true)
					{
						System::IO::StreamReader^ sr = System::IO::File::OpenText(filename);
						try
						{
							String^ s = "";
							int aa, ab, ac;
							while (s = sr->ReadLine())
							{
								switch (count)
								{

								case 0:
									r = s;
									aa = Convert::ToInt16(r);
									count++;
									break;
								case 1:
									g = s;
									ab = Convert::ToInt16(g);
									count++;
									break;
								case 2:
									b = s;
									ac = Convert::ToInt16(b);
									count++;
									break;
								case 3:
									t = s;
									count = 0;
									int tm = Convert::ToInt16(t);
									lambient::Dynamic::rgbbox->BackColor = Color::FromArgb(aa, ab, ac);
									this->set1->usend(aa, ab, ac);
									this->set1->usend(aa, ab, ac);
									this->set1->usend(aa, ab, ac);
									Sleep(tm);
									break;
								}
							}
						}
						finally
						{
						   if (sr)
							  delete (IDisposable^)sr;
						}
					}
				}
				
			}
	};
}
