#pragma once
#include "Settings.h"
namespace lambient {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Dynamic
	/// </summary>
	public ref class Dynamic : public System::Windows::Forms::Form
	{
	public:
		Dynamic(void)
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
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown1;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown2;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown3;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::RadioButton^  rB2;
	private: System::Windows::Forms::RadioButton^  rB1;
	private: System::Windows::Forms::PictureBox^  modebox;
	Settings^ set1 = gcnew Settings();
	private: System::Windows::Forms::PictureBox^  modeBox2;
			 //private: System::Windows::Forms::Image myimage = gcnew Bitmap("C:\\Users\\Krzysiek\\Desktop\\Projekt\\1.jpg");


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
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown3 = (gcnew System::Windows::Forms::NumericUpDown());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->rB2 = (gcnew System::Windows::Forms::RadioButton());
			this->rB1 = (gcnew System::Windows::Forms::RadioButton());
			this->modebox = (gcnew System::Windows::Forms::PictureBox());
			this->modeBox2 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->BeginInit();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
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
			this->version->Text = L"V 0.13";
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
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Impact", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button5->Location = System::Drawing::Point(738, 471);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(90, 34);
			this->button5->TabIndex = 19;
			this->button5->Text = L"Apply";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(43, 53);
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(120, 22);
			this->numericUpDown1->TabIndex = 21;
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->Location = System::Drawing::Point(43, 105);
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Size = System::Drawing::Size(120, 22);
			this->numericUpDown2->TabIndex = 22;
			// 
			// numericUpDown3
			// 
			this->numericUpDown3->Location = System::Drawing::Point(43, 160);
			this->numericUpDown3->Name = L"numericUpDown3";
			this->numericUpDown3->Size = System::Drawing::Size(120, 22);
			this->numericUpDown3->TabIndex = 23;
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::Transparent;
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->numericUpDown1);
			this->groupBox1->Controls->Add(this->numericUpDown3);
			this->groupBox1->Controls->Add(this->numericUpDown2);
			this->groupBox1->ForeColor = System::Drawing::Color::White;
			this->groupBox1->Location = System::Drawing::Point(94, 246);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(251, 224);
			this->groupBox1->TabIndex = 24;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Capture Range";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(11, 162);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(26, 17);
			this->label3->TabIndex = 26;
			this->label3->Text = L"Up";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(0, 110);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(41, 17);
			this->label2->TabIndex = 25;
			this->label2->Text = L"Right";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(9, 59);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(32, 17);
			this->label1->TabIndex = 24;
			this->label1->Text = L"Left";
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->Location = System::Drawing::Point(5, 48);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(68, 403);
			this->pictureBox1->TabIndex = 25;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox2->Location = System::Drawing::Point(764, 48);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(68, 403);
			this->pictureBox2->TabIndex = 26;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox3->Location = System::Drawing::Point(176, 9);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(480, 67);
			this->pictureBox3->TabIndex = 27;
			this->pictureBox3->TabStop = false;
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
			// Dynamic
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(837, 508);
			this->Controls->Add(this->modeBox2);
			this->Controls->Add(this->modebox);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->version);
			this->Controls->Add(this->button2);
			this->Name = L"Dynamic";
			this->Text = L"Dynamic";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
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
	//this->modebox->BackgroundImage->FromFile("C:\\Users\\Krzysiek\\Desktop\\Projekt\\2.jpg");
}
private: System::Void rB1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	//Problem
	this->modebox->Visible = true;
	this->modeBox2->Visible = false;
	//this->modebox->BackgroundImage->FromFile("C:\\Users\\Krzysiek\\Desktop\\Projekt\\1.jpg");
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Hide();
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	Application::Exit();
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	set1->Show();
}
};
}
