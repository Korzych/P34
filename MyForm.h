#pragma once
//P³ynna zmiana kolorów poprzez zmienianie o kilka wartoœci RGB
//KOMUNIKACJA Z USART
//Okna przyjmuj¹ce wartoœci RGB
//Zapisane Sekwencje tryb dynamiczny
//Tryb przyechwytywania kolorów
//Wybór rozmiaru obszarów przechwytywania trybu dynamicznego 



namespace lambient {

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
			//TODO: konstruktor 
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
	private: System::Windows::Forms::CheckBox^  mode1;
	protected:

	protected:


	private: System::Windows::Forms::CheckBox^  mode2;


	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Label^  title;

	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  version;


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
			this->mode1 = (gcnew System::Windows::Forms::CheckBox());
			this->mode2 = (gcnew System::Windows::Forms::CheckBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->title = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->version = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// mode1
			// 
			this->mode1->AutoSize = true;
			this->mode1->Checked = true;
			this->mode1->CheckState = System::Windows::Forms::CheckState::Checked;
			this->mode1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->mode1->Location = System::Drawing::Point(43, 40);
			this->mode1->Name = L"mode1";
			this->mode1->Size = System::Drawing::Size(135, 33);
			this->mode1->TabIndex = 2;
			this->mode1->Text = L"Static Mode";
			this->mode1->UseVisualStyleBackColor = true;
			// 
			// mode2
			// 
			this->mode2->AutoSize = true;
			this->mode2->BackColor = System::Drawing::Color::Transparent;
			this->mode2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->mode2->Location = System::Drawing::Point(359, 40);
			this->mode2->Name = L"mode2";
			this->mode2->Size = System::Drawing::Size(155, 33);
			this->mode2->TabIndex = 3;
			this->mode2->Text = L"Dynamic Mode";
			this->mode2->UseVisualStyleBackColor = false;
			this->mode2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox2_CheckedChanged);
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::Transparent;
			this->groupBox1->Controls->Add(this->mode2);
			this->groupBox1->Controls->Add(this->mode1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Haettenschweiler", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->groupBox1->Location = System::Drawing::Point(124, 167);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(528, 100);
			this->groupBox1->TabIndex = 5;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Select Mode";
			// 
			// title
			// 
			this->title->AutoSize = true;
			this->title->BackColor = System::Drawing::Color::Transparent;
			this->title->Font = (gcnew System::Drawing::Font(L"Haettenschweiler", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->title->Location = System::Drawing::Point(316, 73);
			this->title->Name = L"title";
			this->title->Size = System::Drawing::Size(171, 42);
			this->title->TabIndex = 6;
			this->title->Text = L"Ambient RGB";
			this->title->Click += gcnew System::EventHandler(this, &MyForm::label1_Click_1);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::Window;
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button1->Font = (gcnew System::Drawing::Font(L"Haettenschweiler", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button1->Location = System::Drawing::Point(323, 440);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(147, 48);
			this->button1->TabIndex = 7;
			this->button1->Text = L"Proceed";
			this->button1->UseVisualStyleBackColor = false;
			// 
			// version
			// 
			this->version->AutoSize = true;
			this->version->BackColor = System::Drawing::Color::Transparent;
			this->version->Location = System::Drawing::Point(760, 9);
			this->version->Name = L"version";
			this->version->Size = System::Drawing::Size(76, 17);
			this->version->TabIndex = 8;
			this->version->Text = L"Alpha 0.01";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Maroon;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(836, 514);
			this->Controls->Add(this->version);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->title);
			this->Controls->Add(this->groupBox1);
			this->Name = L"MyForm";
			this->Text = L"Ambient RGB";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void checkBox2_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void label1_Click_1(System::Object^  sender, System::EventArgs^  e) {
}
};
}


