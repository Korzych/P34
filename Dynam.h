#pragma once
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
	public ref class Dynam : public System::Windows::Forms::Form
	{
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
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  blendit;


	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;



	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;




	private: System::Windows::Forms::TextBox^  rbox;

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
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::PictureBox^  pictureBox1;




	protected:

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
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->rbox = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->version = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->blit->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->clr))->BeginInit();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
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
			this->blit->Location = System::Drawing::Point(64, 59);
			this->blit->Name = L"blit";
			this->blit->Size = System::Drawing::Size(293, 381);
			this->blit->TabIndex = 0;
			this->blit->TabStop = false;
			this->blit->Text = L"Blend IT!";
			this->blit->Enter += gcnew System::EventHandler(this, &Dynam::groupBox1_Enter);
			// 
			// clr
			// 
			this->clr->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->clr->Location = System::Drawing::Point(34, 268);
			this->clr->Name = L"clr";
			this->clr->Size = System::Drawing::Size(81, 80);
			this->clr->TabIndex = 13;
			this->clr->TabStop = false;
			// 
			// cbdn
			// 
			this->cbdn->AutoSize = true;
			this->cbdn->Location = System::Drawing::Point(142, 289);
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
			this->cbars->Location = System::Drawing::Point(142, 209);
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
			this->blendit->Location = System::Drawing::Point(148, 324);
			this->blendit->Name = L"blendit";
			this->blendit->Size = System::Drawing::Size(90, 43);
			this->blendit->TabIndex = 0;
			this->blendit->Text = L"Blend IT!";
			this->blendit->UseVisualStyleBackColor = true;
			this->blendit->Click += gcnew System::EventHandler(this, &Dynam::blendit_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::Transparent;
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->pictureBox1);
			this->groupBox1->Controls->Add(this->button5);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->rbox);
			this->groupBox1->Controls->Add(this->button3);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Impact", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->groupBox1->Location = System::Drawing::Point(526, 59);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(250, 381);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"RGB ";
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(139, 302);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(90, 34);
			this->button5->TabIndex = 9;
			this->button5->Text = L"Apply";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Impact", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
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
			this->label1->Location = System::Drawing::Point(45, 50);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(26, 29);
			this->label1->TabIndex = 6;
			this->label1->Text = L"R";
			// 
			// rbox
			// 
			this->rbox->BackColor = System::Drawing::SystemColors::Window;
			this->rbox->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rbox->Location = System::Drawing::Point(77, 50);
			this->rbox->Name = L"rbox";
			this->rbox->Size = System::Drawing::Size(100, 30);
			this->rbox->TabIndex = 3;
			this->rbox->Text = L"0-255";
			this->rbox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(139, 243);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(90, 38);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Random";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Impact", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button2->Location = System::Drawing::Point(761, 9);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(64, 29);
			this->button2->TabIndex = 10;
			this->button2->Text = L"EXIT ";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Dynam::button2_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Impact", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button4->Location = System::Drawing::Point(3, 476);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(93, 29);
			this->button4->TabIndex = 11;
			this->button4->Text = L"RETURN";
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
			this->version->Size = System::Drawing::Size(76, 17);
			this->version->TabIndex = 12;
			this->version->Text = L"Alpha 0.02";
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->pictureBox1->Location = System::Drawing::Point(27, 256);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(81, 80);
			this->pictureBox1->TabIndex = 14;
			this->pictureBox1->TabStop = false;
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::Window;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(77, 189);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 30);
			this->textBox1->TabIndex = 15;
			this->textBox1->Text = L"0-255";
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::SystemColors::Window;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(77, 121);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 30);
			this->textBox2->TabIndex = 16;
			this->textBox2->Text = L"0-255";
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// Dynam
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(837, 508);
			this->Controls->Add(this->version);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->blit);
			this->Name = L"Dynam";
			this->Text = L"Static Mode";
			this->blit->ResumeLayout(false);
			this->blit->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->clr))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void groupBox1_Enter(System::Object^  sender, System::EventArgs^  e) {
		
	}
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	//this->Hide();
	//MyForm^ mf2 = gcnew MyForm();
	//mf2->ShowDialog();
	}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	Application::Exit();
}

private: System::Void blendit_Click(System::Object^  sender, System::EventArgs^  e) {
	int sumr,sumg,sumb,sum = 0;
	if (this->cbwhite->Checked)
	{
	//	MessageBox::Show("White");
		sumr = sumr + 255;
		sumg = sumg + 255;
		sumb = sumb + 255;
		sum++;
	}
	if (this->cbgreen->Checked)
	{
	//	MessageBox::Show("Green");
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
		this->clr->BackColor = Color::FromArgb(sumr, sumg, sumb);
	}
	
}
};
}
