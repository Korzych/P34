#pragma once

#include <fstream>
#include <iostream>

namespace lambient {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO::Ports;
	using System::Runtime::InteropServices::Marshal;
	//String getPort();
	static std::string toStandardString(System::String^ string)

	{
		System::IntPtr pointer = Marshal::StringToHGlobalAnsi(string);
		char* charPointer = reinterpret_cast<char*>(pointer.ToPointer());
		std::string returnString(charPointer, string->Length);
		Marshal::FreeHGlobal(pointer);
		return returnString;
	}
	/// <summary>
	/// Summary for Settings
	/// </summary>
	public ref class Settings : public System::Windows::Forms::Form
	{
	public:
		Settings(void)
		{
			InitializeComponent();
			findPorts();
			//
			//TODO: Add the constructor code here
			//
		}
	
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Settings()
		{
			if (components)
			{
				delete components;
			}
		}
	//private: System::IO::Ports::SerialPort^  _serialPort;
	private: System::Windows::Forms::ComboBox^  pselect;
	protected:

	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Label^  label1;



	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button1;

	private: System::Windows::Forms::ProgressBar^  progressBar1;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  version;
	public: System::IO::Ports::SerialPort^  serialPort1;
	private: System::Windows::Forms::Button^  button3;



	public:
	private: System::ComponentModel::IContainer^  components;
			 /*
	public: void usend(System::String^ br, System::String^ bg,System::String^ bb)
	{
		this->serialPort1->Write(br);
		this->serialPort1->Write(bg);
		this->serialPort1->Write(bb);
	}*/
	public: void usend(int r, int g, int b)
	{
		uint8_t x = (uint8_t)r;
		uint8_t y = (uint8_t)g;
		uint8_t z = (uint8_t)b;
		auto a1 = gcnew cli::array<System::Byte>{x,y,z};
		if (!this->serialPort1->IsOpen)
		{
			this->serialPort1->Open();
		}
		this->serialPort1->Write(a1, 0, a1->Length);
	//	this->serialPort1->Write(a2, 0, a2->Length);
	//this->serialPort1->Write(a3, 0, a3->Length);
		/*
		byte a1 = (byte)a;
		byte a2 = (byte)b;
		byte a3 = (byte)c;
		cli::array<byte>
		this->serialPort1->Write(a1, 0, 1);
		//void Write(cli::array <System::Byte> ^ buffer, int offset, int count);

		
		this->serialPort1->Write(br);
		this->serialPort1->Write(bg);
		this->serialPort1->Write(bb);
		*/
	}
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Settings::typeid));
			this->pselect = (gcnew System::Windows::Forms::ComboBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->version = (gcnew System::Windows::Forms::Label());
			this->serialPort1 = (gcnew System::IO::Ports::SerialPort(this->components));
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// pselect
			// 
			this->pselect->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->pselect->FormattingEnabled = true;
			this->pselect->Location = System::Drawing::Point(14, 85);
			this->pselect->Name = L"pselect";
			this->pselect->Size = System::Drawing::Size(121, 33);
			this->pselect->TabIndex = 0;
			this->pselect->SelectedIndexChanged += gcnew System::EventHandler(this, &Settings::comboBox1_SelectedIndexChanged);
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::Transparent;
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->pselect);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Impact", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->groupBox1->Location = System::Drawing::Point(51, 29);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(203, 242);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Port Communication";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(14, 193);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(125, 35);
			this->button2->TabIndex = 5;
			this->button2->Text = L"Close Port";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Settings::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(14, 152);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(125, 35);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Open Port";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Settings::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Impact", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label1->Location = System::Drawing::Point(10, 61);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(110, 21);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Port Selection";
			this->label1->Click += gcnew System::EventHandler(this, &Settings::label1_Click);
			// 
			// progressBar1
			// 
			this->progressBar1->Location = System::Drawing::Point(51, 317);
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(125, 30);
			this->progressBar1->TabIndex = 2;
			this->progressBar1->Click += gcnew System::EventHandler(this, &Settings::progressBar1_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Impact", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label3->Location = System::Drawing::Point(46, 289);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(100, 25);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Port Status";
			// 
			// version
			// 
			this->version->AutoSize = true;
			this->version->BackColor = System::Drawing::Color::Transparent;
			this->version->ForeColor = System::Drawing::Color::Cornsilk;
			this->version->Location = System::Drawing::Point(12, 9);
			this->version->Name = L"version";
			this->version->Size = System::Drawing::Size(49, 17);
			this->version->TabIndex = 13;
			this->version->Text = L"V 0.97";
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Impact", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button3->Location = System::Drawing::Point(12, 368);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(93, 29);
			this->button3->TabIndex = 14;
			this->button3->Text = L"Return";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Settings::button3_Click);
			// 
			// Settings
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(282, 409);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->version);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->progressBar1);
			this->Controls->Add(this->groupBox1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Settings";
			this->Text = L"Settings";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		//Znajdowanie wolnych portów
	private: void findPorts(void) {
		array<Object^>^ objectArray = System::IO::Ports::SerialPort::GetPortNames();
		this->pselect->Items->AddRange(objectArray);
	};
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	};

	private: System::Void progressBar1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	this->serialPort1->Close();
	this->progressBar1->Value = 0;
	 
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	if (this->pselect->Text==String::Empty)
	{
		MessageBox::Show("select all options and try again");
	}
	else
	{
		try {
			if (!this->serialPort1->IsOpen)
			{
				this->serialPort1->PortName = this->pselect->Text;
				this->serialPort1->BaudRate = 9600;
				this->serialPort1->Open();
				this->progressBar1->Value = 100;
				//TEST
				System::IO::File::WriteAllText("config.txt", this->serialPort1->PortName);
			
				MessageBox::Show("Configuration Finished");
				
			}
			else
			{
				MessageBox::Show("Serial port already opened");
			}
		}
		catch (UnauthorizedAccessException^)
		{
			MessageBox::Show("Exception: Unauthorized Access Exception");
		}
	}
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Hide();
}
		
private: System::Void baudrates_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label4_Click(System::Object^  sender, System::EventArgs^  e) {
}
};

}