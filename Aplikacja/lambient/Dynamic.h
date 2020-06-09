#pragma once
#include "Settings.h"
#include <string>
#include <Windows.h>
#include <vector>
#include "Kolor.h"

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
			 
			 

			 /////////////////////////////////
	private: System::Windows::Forms::NumericUpDown^  uprange;

	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::PictureBox^  leftBox;
	private: System::Windows::Forms::PictureBox^  rightBox;

	private: System::Windows::Forms::PictureBox^  topBox;

	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::RadioButton^  rB2;
	private: System::Windows::Forms::RadioButton^  rB1;
	private: System::Windows::Forms::PictureBox^  modebox;
			 Settings^ set1 = gcnew Settings();
	private: bool running = false;
	private: System::Windows::Forms::PictureBox^  modeBox2;
	private: System::Windows::Forms::Button^  stopbutton;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Dynamic::typeid));
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
			this->leftBox = (gcnew System::Windows::Forms::PictureBox());
			this->rightBox = (gcnew System::Windows::Forms::PictureBox());
			this->topBox = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->rB2 = (gcnew System::Windows::Forms::RadioButton());
			this->rB1 = (gcnew System::Windows::Forms::RadioButton());
			this->modebox = (gcnew System::Windows::Forms::PictureBox());
			this->modeBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->stopbutton = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->edgerange))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->uprange))->BeginInit();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->leftBox))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->rightBox))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->topBox))->BeginInit();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->modebox))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->modeBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button1->Location = System::Drawing::Point(662, 9);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(92, 29);
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
			this->version->Location = System::Drawing::Point(15, 12);
			this->version->Name = L"version";
			this->version->Size = System::Drawing::Size(49, 17);
			this->version->TabIndex = 17;
			this->version->Text = L"V 0.97";
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button2->Location = System::Drawing::Point(764, 9);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(64, 29);
			this->button2->TabIndex = 16;
			this->button2->Text = L"Exit";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Dynamic::button2_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Impact", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button4->Location = System::Drawing::Point(12, 476);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(93, 29);
			this->button4->TabIndex = 20;
			this->button4->Text = L"Return";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Dynamic::button4_Click);
			// 
			// startbutton
			// 
			this->startbutton->Font = (gcnew System::Drawing::Font(L"Impact", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->startbutton->Location = System::Drawing::Point(738, 471);
			this->startbutton->Name = L"startbutton";
			this->startbutton->Size = System::Drawing::Size(90, 34);
			this->startbutton->TabIndex = 19;
			this->startbutton->Text = L"Start";
			this->startbutton->UseVisualStyleBackColor = true;
			this->startbutton->Click += gcnew System::EventHandler(this, &Dynamic::button5_Click);
			// 
			// edgerange
			// 
			this->edgerange->Location = System::Drawing::Point(109, 44);
			this->edgerange->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 900, 0, 0, 0 });
			this->edgerange->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 50, 0, 0, 0 });
			this->edgerange->Name = L"edgerange";
			this->edgerange->Size = System::Drawing::Size(120, 22);
			this->edgerange->TabIndex = 22;
			this->edgerange->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 50, 0, 0, 0 });
			this->edgerange->ValueChanged += gcnew System::EventHandler(this, &Dynamic::numericUpDown2_ValueChanged);
			// 
			// uprange
			// 
			this->uprange->Location = System::Drawing::Point(109, 86);
			this->uprange->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 900, 0, 0, 0 });
			this->uprange->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 50, 0, 0, 0 });
			this->uprange->Name = L"uprange";
			this->uprange->Size = System::Drawing::Size(120, 22);
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
			this->groupBox1->Location = System::Drawing::Point(94, 246);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(251, 140);
			this->groupBox1->TabIndex = 24;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Capture Range";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(11, 91);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(26, 17);
			this->label3->TabIndex = 26;
			this->label3->Text = L"Up";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(11, 44);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(69, 17);
			this->label2->TabIndex = 25;
			this->label2->Text = L"Left/Right";
			this->label2->Click += gcnew System::EventHandler(this, &Dynamic::label2_Click);
			// 
			// leftBox
			// 
			this->leftBox->BackColor = System::Drawing::Color::Transparent;
			this->leftBox->Location = System::Drawing::Point(5, 48);
			this->leftBox->Name = L"leftBox";
			this->leftBox->Size = System::Drawing::Size(68, 403);
			this->leftBox->TabIndex = 25;
			this->leftBox->TabStop = false;
			// 
			// rightBox
			// 
			this->rightBox->BackColor = System::Drawing::Color::Transparent;
			this->rightBox->Location = System::Drawing::Point(764, 48);
			this->rightBox->Name = L"rightBox";
			this->rightBox->Size = System::Drawing::Size(68, 403);
			this->rightBox->TabIndex = 26;
			this->rightBox->TabStop = false;
			this->rightBox->Click += gcnew System::EventHandler(this, &Dynamic::rightBox_Click);
			// 
			// topBox
			// 
			this->topBox->BackColor = System::Drawing::Color::Transparent;
			this->topBox->Location = System::Drawing::Point(176, 9);
			this->topBox->Name = L"topBox";
			this->topBox->Size = System::Drawing::Size(480, 67);
			this->topBox->TabIndex = 27;
			this->topBox->TabStop = false;
			// 
			// groupBox2
			// 
			this->groupBox2->BackColor = System::Drawing::Color::Transparent;
			this->groupBox2->Controls->Add(this->rB2);
			this->groupBox2->Controls->Add(this->rB1);
			this->groupBox2->ForeColor = System::Drawing::Color::White;
			this->groupBox2->Location = System::Drawing::Point(94, 98);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(251, 127);
			this->groupBox2->TabIndex = 28;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Capture Zones";
			this->groupBox2->Enter += gcnew System::EventHandler(this, &Dynamic::groupBox2_Enter);
			// 
			// rB2
			// 
			this->rB2->AutoSize = true;
			this->rB2->Location = System::Drawing::Point(35, 77);
			this->rB2->Name = L"rB2";
			this->rB2->Size = System::Drawing::Size(119, 21);
			this->rB2->TabIndex = 1;
			this->rB2->Text = L"Left/Right/Top";
			this->rB2->UseVisualStyleBackColor = true;
			this->rB2->CheckedChanged += gcnew System::EventHandler(this, &Dynamic::rB2_CheckedChanged);
			// 
			// rB1
			// 
			this->rB1->AutoSize = true;
			this->rB1->Checked = true;
			this->rB1->Location = System::Drawing::Point(35, 38);
			this->rB1->Name = L"rB1";
			this->rB1->Size = System::Drawing::Size(90, 21);
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
			this->modebox->Location = System::Drawing::Point(363, 108);
			this->modebox->Name = L"modebox";
			this->modebox->Size = System::Drawing::Size(180, 100);
			this->modebox->TabIndex = 29;
			this->modebox->TabStop = false;
			// 
			// modeBox2
			// 
			this->modeBox2->BackColor = System::Drawing::Color::Transparent;
			this->modeBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"modeBox2.BackgroundImage")));
			this->modeBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->modeBox2->Location = System::Drawing::Point(363, 108);
			this->modeBox2->Name = L"modeBox2";
			this->modeBox2->Size = System::Drawing::Size(180, 100);
			this->modeBox2->TabIndex = 30;
			this->modeBox2->TabStop = false;
			this->modeBox2->Visible = false;
			// 
			// stopbutton
			// 
			this->stopbutton->Font = (gcnew System::Drawing::Font(L"Impact", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->stopbutton->Location = System::Drawing::Point(642, 471);
			this->stopbutton->Name = L"stopbutton";
			this->stopbutton->Size = System::Drawing::Size(90, 34);
			this->stopbutton->TabIndex = 31;
			this->stopbutton->Text = L"Stop";
			this->stopbutton->UseVisualStyleBackColor = true;
			this->stopbutton->Click += gcnew System::EventHandler(this, &Dynamic::stopbutton_Click);
			// 
			// Dynamic
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(837, 508);
			this->Controls->Add(this->stopbutton);
			this->Controls->Add(this->modeBox2);
			this->Controls->Add(this->modebox);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->topBox);
			this->Controls->Add(this->rightBox);
			this->Controls->Add(this->leftBox);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->startbutton);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->version);
			this->Controls->Add(this->button2);
			this->Name = L"Dynamic";
			this->Text = L"Dynamic";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->edgerange))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->uprange))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->leftBox))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->rightBox))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->topBox))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->modebox))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->modeBox2))->EndInit();
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
		//this->oThread2->Abort();
		//this->oThread3->Abort();
		if (mode == 1)
		{
			this->oThread4->Abort();
		}
		
		running = false;
		

	}

	private: System::Void rightBox_Click(System::Object^  sender, System::EventArgs^  e) {
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
					for (int y=0; y < 1080; y +=(1080/5))
					{
						for (int x = 0; x < side; x += (side / 5))
						{
							col1 = GetPixel(hdc, x, y);
							c1.r = c1.r + GetRValue(col1);
							c1.g = c1.g + GetGValue(col1);
							c1.b = c1.b + GetBValue(col1);
							
							col2 = GetPixel(hdc, 1920 - x, y);
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
					c2.b = c2.b /s ;
					s = 0;
					if (mode == 1) //GÓRA i boki
					{
						//MessageBox::Show("running in full mode");
					for(int x = 0; x < 1920; x +=(1920/5))
					{
						for (int y = 0; y < up; y += (up / 5))
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
}