#include "Dynamic.h"
#include <Windows.h>
#include <process.h>
#include <iostream>
#include <vector>

namespace lambient {

	

	Dynamic::Dynamic(void)
	{
		InitializeComponent();

	}
	System::Void Dynamic::button5_Click(System::Object^  sender, System::EventArgs^  e)
	{
		if (!System::IO::File::Exists("config.txt"))//Czy plik istnieje
		{
			MessageBox::Show("Please configure port and try again", "Configuration error");
			//System::Windows::Forms::DialogResult dialogResult = MessageBox::Show("Configuration file not found! Do you want to configure settings now?", "Configuration Error", MessageBoxButtons::YesNo, MessageBoxIcon::Question);

			//if((MessageBox::Show(this,"Configuration file found! Do you want to load it?",MessageBoxButtons::YesNo,MessageBoxIcon::Question)==DialogResult::No));
		}
		else
		{	
			this->groupBox3->Enabled = false;
			this->groupBox4->Enabled = false;
			if (this->set1->serialPort1->IsOpen)
			{
				this->set1->serialPort1->Close();
			}
			this->startbutton->Enabled = false;
			if (this->dbutton->Checked)
			{

				this->set1->serialPort1->PortName = System::IO::File::ReadAllText("config.txt");
				this->set1->serialPort1->Open();
				if (running != true)
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
					//Wy³¹czanie reszty pól
					groupBox1->Enabled = false;
					groupBox2->Enabled = false;
					button1->Enabled = false;
					button2->Enabled = false;
					button4->Enabled = false;

					int sidecap = (int)edgerange->Value;
					int upcap = (int)uprange->Value;

					DynamicThread^o1 = gcnew DynamicThread(mode, sidecap, upcap, this->set1);
					oThread1 = gcnew Thread(gcnew ThreadStart(o1, &DynamicThread::ThreadProc));
					oThread1->Start();

					running = true;
				
				}
			}
			if (cbutton->Checked)
			{
				this->set1->serialPort1->PortName = System::IO::File::ReadAllText("config.txt");
				this->set1->serialPort1->Open();
				if (running != true)
				{	
					//Tryb combo
					running = true;
					ComboThread^o2 = gcnew ComboThread(this->textBox2->Text,this->set1);
					oThread1 = gcnew Thread(gcnew ThreadStart(o2, &ComboThread::readProc));
					oThread1->Start();
					groupBox1->Enabled = false;
					groupBox2->Enabled = false;
					button1->Enabled = false;
					button2->Enabled = false;
					button4->Enabled = false;
				}
			}
		}
	
		
	}
}
