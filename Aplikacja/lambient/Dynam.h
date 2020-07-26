#pragma once
#include <stdlib.h>
#include "Settings.h"
#include <algorithm>
#include <string>
//#include "MyForm.h"
namespace lambient {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Dynam
	/// </summary>
	public ref class Dynam :  public System::Windows::Forms::Form//, public Settings
	{
	public: 

	String ^portname="";
	private: System::Windows::Forms::Button^  button1;
	public:

	public:

		Settings^ set2 = gcnew Settings();
			// int BaudR = 0;

	public:
		Dynam(void)
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

		~Dynam()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^  blit;
	private: System::Windows::Forms::GroupBox^  gbox;

	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  blendit;


	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;


	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;

	private: System::Windows::Forms::CheckBox^  cbred;
	private: System::Windows::Forms::CheckBox^  cbyellow;
	private: System::Windows::Forms::CheckBox^  cbblue;
	private: System::Windows::Forms::CheckBox^  cbgreen;
	private: System::Windows::Forms::CheckBox^  cbwhite;
	private: System::Windows::Forms::CheckBox^  cbdn;
	private: System::Windows::Forms::CheckBox^  cbun;
	private: System::Windows::Forms::CheckBox^  cbars;
	private: System::Windows::Forms::CheckBox^  cbmag;
	private: System::Windows::Forms::CheckBox^  cbfall;
	private: System::Windows::Forms::CheckBox^  cbgamb;
	private: System::Windows::Forms::CheckBox^  cbmalach;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Label^  version;
	private: System::Windows::Forms::PictureBox^  clr;
	private: System::Windows::Forms::PictureBox^  rgbbox;
	private: System::Windows::Forms::NumericUpDown^  numberboxr;
	private: System::Windows::Forms::NumericUpDown^  numberboxb;

	private: System::Windows::Forms::NumericUpDown^  numberboxg;
	private: System::Windows::Forms::RadioButton^  radioButton1;
	private: System::Windows::Forms::RadioButton^  radioButton2;

	protected:

	protected:

	private:
		/// <summary>
		int statred;
		int statgreen;
		int statblue;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Dynam::typeid));
			this->blit = (gcnew System::Windows::Forms::GroupBox());
			this->clr = (gcnew System::Windows::Forms::PictureBox());
			this->cbdn = (gcnew System::Windows::Forms::CheckBox());
			this->cbun = (gcnew System::Windows::Forms::CheckBox());
			this->cbars = (gcnew System::Windows::Forms::CheckBox());
			this->cbmag = (gcnew System::Windows::Forms::CheckBox());
			this->cbfall = (gcnew System::Windows::Forms::CheckBox());
			this->cbgamb = (gcnew System::Windows::Forms::CheckBox());
			this->cbmalach = (gcnew System::Windows::Forms::CheckBox());
			this->cbred = (gcnew System::Windows::Forms::CheckBox());
			this->cbyellow = (gcnew System::Windows::Forms::CheckBox());
			this->cbblue = (gcnew System::Windows::Forms::CheckBox());
			this->cbgreen = (gcnew System::Windows::Forms::CheckBox());
			this->cbwhite = (gcnew System::Windows::Forms::CheckBox());
			this->blendit = (gcnew System::Windows::Forms::Button());
			this->gbox = (gcnew System::Windows::Forms::GroupBox());
			this->numberboxb = (gcnew System::Windows::Forms::NumericUpDown());
			this->numberboxg = (gcnew System::Windows::Forms::NumericUpDown());
			this->numberboxr = (gcnew System::Windows::Forms::NumericUpDown());
			this->rgbbox = (gcnew System::Windows::Forms::PictureBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->version = (gcnew System::Windows::Forms::Label());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->blit->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->clr))->BeginInit();
			this->gbox->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numberboxb))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numberboxg))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numberboxr))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->rgbbox))->BeginInit();
			this->SuspendLayout();
			// 
			// blit
			// 
			this->blit->BackColor = System::Drawing::Color::Transparent;
			this->blit->Controls->Add(this->clr);
			this->blit->Controls->Add(this->cbdn);
			this->blit->Controls->Add(this->cbun);
			this->blit->Controls->Add(this->cbars);
			this->blit->Controls->Add(this->cbmag);
			this->blit->Controls->Add(this->cbfall);
			this->blit->Controls->Add(this->cbgamb);
			this->blit->Controls->Add(this->cbmalach);
			this->blit->Controls->Add(this->cbred);
			this->blit->Controls->Add(this->cbyellow);
			this->blit->Controls->Add(this->cbblue);
			this->blit->Controls->Add(this->cbgreen);
			this->blit->Controls->Add(this->cbwhite);
			this->blit->Controls->Add(this->blendit);
			this->blit->Font = (gcnew System::Drawing::Font(L"Impact", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->blit->Location = System::Drawing::Point(52, 64);
			this->blit->Name = L"blit";
			this->blit->Size = System::Drawing::Size(301, 401);
			this->blit->TabIndex = 0;
			this->blit->TabStop = false;
			this->blit->Text = L"Blend IT!";
			this->blit->Enter += gcnew System::EventHandler(this, &Dynam::groupBox1_Enter);
			// 
			// clr
			// 
			this->clr->BackColor = System::Drawing::Color::Transparent;
			this->clr->Location = System::Drawing::Point(34, 297);
			this->clr->Name = L"clr";
			this->clr->Size = System::Drawing::Size(81, 80);
			this->clr->TabIndex = 13;
			this->clr->TabStop = false;
			// 
			// cbdn
			// 
			this->cbdn->AutoSize = true;
			this->cbdn->Location = System::Drawing::Point(142, 209);
			this->cbdn->Name = L"cbdn";
			this->cbdn->Size = System::Drawing::Size(140, 29);
			this->cbdn->TabIndex = 12;
			this->cbdn->Text = L"Drake\'s Neck";
			this->cbdn->UseVisualStyleBackColor = true;
			// 
			// cbun
			// 
			this->cbun->AutoSize = true;
			this->cbun->Location = System::Drawing::Point(142, 249);
			this->cbun->Name = L"cbun";
			this->cbun->Size = System::Drawing::Size(96, 29);
			this->cbun->TabIndex = 11;
			this->cbun->Text = L"UN Blue";
			this->cbun->UseVisualStyleBackColor = true;
			// 
			// cbars
			// 
			this->cbars->AutoSize = true;
			this->cbars->Location = System::Drawing::Point(142, 289);
			this->cbars->Name = L"cbars";
			this->cbars->Size = System::Drawing::Size(95, 29);
			this->cbars->TabIndex = 10;
			this->cbars->Text = L"Arsenic";
			this->cbars->UseVisualStyleBackColor = true;
			// 
			// cbmag
			// 
			this->cbmag->AutoSize = true;
			this->cbmag->Location = System::Drawing::Point(142, 169);
			this->cbmag->Name = L"cbmag";
			this->cbmag->Size = System::Drawing::Size(104, 29);
			this->cbmag->TabIndex = 9;
			this->cbmag->Text = L"Magenta";
			this->cbmag->UseVisualStyleBackColor = true;
			// 
			// cbfall
			// 
			this->cbfall->AutoSize = true;
			this->cbfall->Location = System::Drawing::Point(142, 129);
			this->cbfall->Name = L"cbfall";
			this->cbfall->Size = System::Drawing::Size(85, 29);
			this->cbfall->TabIndex = 8;
			this->cbfall->Text = L"Fallow";
			this->cbfall->UseVisualStyleBackColor = true;
			// 
			// cbgamb
			// 
			this->cbgamb->AutoSize = true;
			this->cbgamb->Location = System::Drawing::Point(142, 89);
			this->cbgamb->Name = L"cbgamb";
			this->cbgamb->Size = System::Drawing::Size(110, 29);
			this->cbgamb->TabIndex = 7;
			this->cbgamb->Text = L"Gamboge";
			this->cbgamb->UseVisualStyleBackColor = true;
			// 
			// cbmalach
			// 
			this->cbmalach->AutoSize = true;
			this->cbmalach->Location = System::Drawing::Point(142, 49);
			this->cbmalach->Name = L"cbmalach";
			this->cbmalach->Size = System::Drawing::Size(114, 29);
			this->cbmalach->TabIndex = 6;
			this->cbmalach->Text = L"Malachite";
			this->cbmalach->UseVisualStyleBackColor = true;
			// 
			// cbred
			// 
			this->cbred->AutoSize = true;
			this->cbred->Location = System::Drawing::Point(34, 209);
			this->cbred->Name = L"cbred";
			this->cbred->Size = System::Drawing::Size(65, 29);
			this->cbred->TabIndex = 5;
			this->cbred->Text = L"Red";
			this->cbred->UseVisualStyleBackColor = true;
			// 
			// cbyellow
			// 
			this->cbyellow->AutoSize = true;
			this->cbyellow->Location = System::Drawing::Point(34, 169);
			this->cbyellow->Name = L"cbyellow";
			this->cbyellow->Size = System::Drawing::Size(85, 29);
			this->cbyellow->TabIndex = 4;
			this->cbyellow->Text = L"Yellow";
			this->cbyellow->UseVisualStyleBackColor = true;
			// 
			// cbblue
			// 
			this->cbblue->AutoSize = true;
			this->cbblue->Location = System::Drawing::Point(34, 129);
			this->cbblue->Name = L"cbblue";
			this->cbblue->Size = System::Drawing::Size(70, 29);
			this->cbblue->TabIndex = 3;
			this->cbblue->Text = L"Blue";
			this->cbblue->UseVisualStyleBackColor = true;
			// 
			// cbgreen
			// 
			this->cbgreen->AutoSize = true;
			this->cbgreen->Location = System::Drawing::Point(34, 89);
			this->cbgreen->Name = L"cbgreen";
			this->cbgreen->Size = System::Drawing::Size(82, 29);
			this->cbgreen->TabIndex = 2;
			this->cbgreen->Text = L"Green";
			this->cbgreen->UseVisualStyleBackColor = true;
			// 
			// cbwhite
			// 
			this->cbwhite->AutoSize = true;
			this->cbwhite->Location = System::Drawing::Point(34, 49);
			this->cbwhite->Name = L"cbwhite";
			this->cbwhite->Size = System::Drawing::Size(81, 29);
			this->cbwhite->TabIndex = 1;
			this->cbwhite->Text = L"White";
			this->cbwhite->UseVisualStyleBackColor = true;
			// 
			// blendit
			// 
			this->blendit->Location = System::Drawing::Point(139, 324);
			this->blendit->Name = L"blendit";
			this->blendit->Size = System::Drawing::Size(98, 43);
			this->blendit->TabIndex = 0;
			this->blendit->Text = L"Blend IT!";
			this->blendit->UseVisualStyleBackColor = true;
			this->blendit->Click += gcnew System::EventHandler(this, &Dynam::blendit_Click);
			// 
			// gbox
			// 
			this->gbox->BackColor = System::Drawing::Color::Transparent;
			this->gbox->Controls->Add(this->numberboxb);
			this->gbox->Controls->Add(this->numberboxg);
			this->gbox->Controls->Add(this->numberboxr);
			this->gbox->Controls->Add(this->rgbbox);
			this->gbox->Controls->Add(this->label3);
			this->gbox->Controls->Add(this->label2);
			this->gbox->Controls->Add(this->label1);
			this->gbox->Controls->Add(this->button3);
			this->gbox->Enabled = false;
			this->gbox->Font = (gcnew System::Drawing::Font(L"Impact", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->gbox->Location = System::Drawing::Point(495, 64);
			this->gbox->Name = L"gbox";
			this->gbox->Size = System::Drawing::Size(319, 401);
			this->gbox->TabIndex = 1;
			this->gbox->TabStop = false;
			this->gbox->Text = L"RGB ";
			this->gbox->Enter += gcnew System::EventHandler(this, &Dynam::gbox_Enter);
			// 
			// numberboxb
			// 
			this->numberboxb->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->numberboxb->Location = System::Drawing::Point(77, 189);
			this->numberboxb->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 255, 0, 0, 0 });
			this->numberboxb->Name = L"numberboxb";
			this->numberboxb->Size = System::Drawing::Size(120, 30);
			this->numberboxb->TabIndex = 16;
			this->numberboxb->ValueChanged += gcnew System::EventHandler(this, &Dynam::numberboxb_ValueChanged);
			// 
			// numberboxg
			// 
			this->numberboxg->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->numberboxg->Location = System::Drawing::Point(77, 119);
			this->numberboxg->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 255, 0, 0, 0 });
			this->numberboxg->Name = L"numberboxg";
			this->numberboxg->Size = System::Drawing::Size(120, 30);
			this->numberboxg->TabIndex = 15;
			this->numberboxg->ValueChanged += gcnew System::EventHandler(this, &Dynam::numberboxg_ValueChanged);
			// 
			// numberboxr
			// 
			this->numberboxr->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->numberboxr->Location = System::Drawing::Point(77, 50);
			this->numberboxr->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 255, 0, 0, 0 });
			this->numberboxr->Name = L"numberboxr";
			this->numberboxr->Size = System::Drawing::Size(120, 30);
			this->numberboxr->TabIndex = 13;
			this->numberboxr->ValueChanged += gcnew System::EventHandler(this, &Dynam::numberboxr_ValueChanged);
			// 
			// rgbbox
			// 
			this->rgbbox->BackColor = System::Drawing::Color::Black;
			this->rgbbox->Location = System::Drawing::Point(77, 255);
			this->rgbbox->Name = L"rgbbox";
			this->rgbbox->Size = System::Drawing::Size(81, 80);
			this->rgbbox->TabIndex = 14;
			this->rgbbox->TabStop = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Impact", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label3->Location = System::Drawing::Point(45, 190);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(26, 29);
			this->label3->TabIndex = 8;
			this->label3->Text = L"B";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Impact", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label2->ForeColor = System::Drawing::Color::Lime;
			this->label2->Location = System::Drawing::Point(45, 120);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(26, 29);
			this->label2->TabIndex = 7;
			this->label2->Text = L"G";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Impact", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label1->ForeColor = System::Drawing::Color::Red;
			this->label1->Location = System::Drawing::Point(45, 50);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(26, 29);
			this->label1->TabIndex = 6;
			this->label1->Text = L"R";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(199, 297);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(105, 38);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Random";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Dynam::button3_Click);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Impact", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button5->Location = System::Drawing::Point(735, 471);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(90, 34);
			this->button5->TabIndex = 9;
			this->button5->Text = L"Apply";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Dynam::button5_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button2->Location = System::Drawing::Point(761, 9);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(64, 29);
			this->button2->TabIndex = 10;
			this->button2->Text = L"Exit";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Dynam::button2_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Impact", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button4->Location = System::Drawing::Point(3, 471);
			this->button4->Margin = System::Windows::Forms::Padding(20);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(90, 34);
			this->button4->TabIndex = 11;
			this->button4->Text = L"Return";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Dynam::button4_Click);
			// 
			// version
			// 
			this->version->AutoSize = true;
			this->version->BackColor = System::Drawing::Color::Transparent;
			this->version->ForeColor = System::Drawing::Color::Cornsilk;
			this->version->Location = System::Drawing::Point(12, 9);
			this->version->Name = L"version";
			this->version->Size = System::Drawing::Size(49, 17);
			this->version->TabIndex = 12;
			this->version->Text = L"V 1.00";
			this->version->Click += gcnew System::EventHandler(this, &Dynam::version_Click);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->BackColor = System::Drawing::Color::Transparent;
			this->radioButton1->Checked = true;
			this->radioButton1->Location = System::Drawing::Point(29, 64);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(17, 16);
			this->radioButton1->TabIndex = 13;
			this->radioButton1->TabStop = true;
			this->radioButton1->UseVisualStyleBackColor = false;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &Dynam::radioButton1_CheckedChanged);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->BackColor = System::Drawing::Color::Transparent;
			this->radioButton2->Location = System::Drawing::Point(472, 64);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(17, 16);
			this->radioButton2->TabIndex = 14;
			this->radioButton2->UseVisualStyleBackColor = false;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &Dynam::radioButton2_CheckedChanged);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button1->Location = System::Drawing::Point(659, 9);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(92, 29);
			this->button1->TabIndex = 15;
			this->button1->Text = L"Settings";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Dynam::button1_Click);
			// 
			// Dynam
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(837, 508);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->version);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->gbox);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->blit);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Dynam";
			this->Text = L"Static Mode";
			this->Load += gcnew System::EventHandler(this, &Dynam::Dynam_Load);
			this->blit->ResumeLayout(false);
			this->blit->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->clr))->EndInit();
			this->gbox->ResumeLayout(false);
			this->gbox->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numberboxb))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numberboxg))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numberboxr))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->rgbbox))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void groupBox1_Enter(System::Object^  sender, System::EventArgs^  e) {
		
	}
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
		if (set2->serialPort1->IsOpen)
		{
			set2->serialPort1->Close();
		}

	this->Hide();
	
	}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	this->DialogResult = System::Windows::Forms::DialogResult::OK;
	Application::Exit();
}

private: System::Void blendit_Click(System::Object^  sender, System::EventArgs^  e) {
	int sumr,sumg,sumb,sum = 0;
	if (this->cbwhite->Checked)
	{
	
		sumr = sumr + 255;
		sumg = sumg + 255;
		sumb = sumb + 255;
		sum++;
	}
	if (this->cbgreen->Checked)
	{
	
		sumg = sumg + 128;
		sum++;
	}
	if (this->cbblue->Checked)
	{
	//	MessageBox::Show("Blue");
		sumb = sumb + 255;
		sum++;
	}
	if (this->cbyellow->Checked)
	{
	//	MessageBox::Show("Yellow");
		sumg = sumg + 255;
		sumr = sumr + 255;
		sum++;
	}
	if (this->cbred->Checked)
	{
		//MessageBox::Show("Red");
		sumr = sumr + 255;
		sum++;
	}
	if (this->cbmalach->Checked)
	{
		//MessageBox::Show("Malachite");
		sumr = sumr + 11;
		sumg = sumg + 218;
		sumb = sumb + 81;
		sum++;
	}
	if (this->cbgamb->Checked)
	{
	//	MessageBox::Show("Gamboge");
		sumr = sumr + 228;
		sumg = sumg + 155;
		sumb = sumb + 15;
		sum++;
	}
	if (this->cbfall->Checked)
	{
		//MessageBox::Show("Fallow");
		sumr = sumr + 193;
		sumg = sumg + 154;
		sumb = sumb + 107;
		sum++;
	}
	if (this->cbmag->Checked)
	{
		//MessageBox::Show("Magenta");
		sumr = sumr +255;
		sumb = sumb + 255;
		sum++;
	}
	if (this->cbars->Checked)
	{
		//MessageBox::Show("Arsenic");
		sumr = sumr + 59;
		sumb = sumb + 75;
		sumg = sumg + 68;
		sum++;
	}
	if (this->cbun->Checked)
	{
	//	MessageBox::Show("UN Blue ");
		sumr = sumr + 91;
		sumg = sumg + 146;
		sumb = sumb + 229;
		sum++;
	}
	if (this->cbdn->Checked)
	{
		//MessageBox::Show("Drake's Neck");

		sumr = sumr + 49;
		sumg = sumg + 107;
		sumb = sumb + 138;
		sum++;
		
	}
	if (sum != 0)
	{ 
		sumr = sumr / sum;
		sumg = sumg / sum;
		sumb = sumb / sum;
		this->statblue = sumb;
		this->statred = sumr;
		this->statgreen = sumg;
		this->clr->BackColor = Color::FromArgb(sumr, sumg, sumb);
	}
	
}

//Wysy³anie danych przez UART
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
	
	if (!System::IO::File::Exists("config.txt"))//Czy plik istnieje
	{
		MessageBox::Show("Please configure port and try again", "Configuration error");
	}
	else
	{
		if(this->set2->serialPort1->IsOpen)
		{
			this->set2->serialPort1->Close();
		}
		this->set2->serialPort1->PortName=System::IO::File::ReadAllText("config.txt");
		this->set2->serialPort1->Open();
	
		int a = statred;
		int b = statgreen;
		int c = statblue;
		this->set2->usend(this->statred, this->statgreen, this->statblue);
		this->set2->usend(this->statred, this->statgreen, this->statblue);
		this->set2->usend(this->statred, this->statgreen, this->statblue);

	}
}
private: System::Void numberboxr_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
	int r1 = (int)numberboxr->Value;
	int g1 = (int)numberboxg->Value;
	int b1 = (int)numberboxb->Value;
	this->statred = r1;
	this->statblue = b1;
	this->statgreen = g1;

	this->rgbbox->BackColor = Color::FromArgb(r1, g1, b1);
}
private: System::Void numberboxg_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
	int r1 = (int)numberboxr->Value;
	int g1 = (int)numberboxg->Value;
	int b1 = (int)numberboxb->Value;
	this->statred = r1;
	this->statblue = b1;
	this->statgreen = g1;
	this->rgbbox->BackColor = Color::FromArgb(r1, g1, b1);
}
private: System::Void numberboxb_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
	int r1 = (int)numberboxr->Value;
	int g1 = (int)numberboxg->Value;
	int b1 = (int)numberboxb->Value;
	this->statred = r1;
	this->statblue = b1;
	this->statgreen = g1;
	this->rgbbox->BackColor = Color::FromArgb(r1, g1, b1);
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {

	int r1=(rand()%255);
	int g1 = (rand() % 255);
	int b1 = (rand() % 255);

	numberboxr->Value = r1;
	numberboxg->Value = g1;
	numberboxb->Value = b1;

	this->statblue = b1;
	this->statred = r1;
	this->statgreen = g1;

	this->rgbbox->BackColor = Color::FromArgb(r1, g1, b1);
}
private: System::Void radioButton1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	if (this->radioButton1->Checked == 1)
	{
		this->blit->Enabled = 1;
		this->gbox->Enabled = 0;
	}
	else
	{
		this->blit->Enabled = 0;
		this->gbox->Enabled = 1;
	}
}
private: System::Void radioButton2_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	if (this->radioButton2->Checked == 1)
	{
		this->blit->Enabled = 0;
		this->gbox->Enabled = 1;
	}
	else
	{
		this->blit->Enabled = 1;
		this->gbox->Enabled = 0;
	}
	
}
	
private: System::Void gbox_Enter(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void Dynam_Load(System::Object^  sender, System::EventArgs^  e) {

}
private: System::Void groupBox1_Enter_1(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void pselect_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void baudrates_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	set2->ShowDialog();
}

private: System::Void version_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
}
