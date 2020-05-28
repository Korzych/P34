#include "Dynamic.h"
#include <Windows.h>
#include <process.h>
#include <iostream>
#include <vector>

namespace lambient {

	/*Kolor^ operator+ (Kolor ^c1, Kolor ^c2)
	{
		Kolor ^c3;
		c3.r = c1.r + c2.r;
		c3.g = c1.g + c2.g;
		c3.b = c1.b + c2.b;

		return c3;
	}*/

	Dynamic::Dynamic(void)
	{
		InitializeComponent();

	}
	System::Void Dynamic::button5_Click(System::Object^  sender, System::EventArgs^  e)
	{
		
		
		if (this->set1->serialPort1->IsOpen&&running!=true)
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
			// DynamicThread(int mode,int side,int up,Settings^ set1, System::Windows::Forms::PictureBox^  &leftBox, System::Windows::Forms::PictureBox^  &rightBox, System::Windows::Forms::PictureBox^  &topBox)
			
			int sidecap = (int)edgerange->Value;
			int upcap = (int)uprange->Value;
		//	DynamicThread^o1 = gcnew DynamicThread(mode,sidecap,upcap,this->set1,&leftBox, &rightBox, &topBox);
			DynamicThread^o1 = gcnew DynamicThread(mode, sidecap, upcap, this->set1);
			oThread1 = gcnew Thread(gcnew ThreadStart(o1, &DynamicThread::ThreadProc));
			oThread1->Start();
			running = true;
			//
			


			/*
			//Zmieniæ na zmienn¹ rozdzielczosc 
			
			running = true;
			HWND hwnd;
			HDC hdc;

			FindWindowA(NULL, "tr");
			SetForegroundWindow(hwnd);
			hdc = GetDC(hwnd);
			groupBox1->Enabled = false;
			groupBox2->Enabled = false;
			int sidecap = (int)edgerange->Value;
			int upcap = (int)uprange->Value;


			sidecap = (int)edgerange->Value;
			upcap = (int)uprange->Value;

			int screenWid, screenH;

			COLORREF col1, col2;

			Kolor c1, c2, c3;

			int sum, suma = 0;
			bool threads = true;
			std::vector<Kolor*> cv1,cv2;
			Generic::List<Thread^>^ tv1 = gcnew Generic::List<Thread^>();
			while (running)
			{
				c1.r = c1.b = c1.g = 0;
				c2.r = c2.b = c2.g = 0;//Suma rgb prawo
				c3.r = c3.b = c3.g = 0;//Suma rgb lewo
				int i = 0;
				int height = 1;
				int width = 0;
				if (threads)
				{
					for (int j = 0; j < 4; j++)//100
					{

						suma++;
						Kolor* ptr1 = new Kolor;
						cv1.push_back(ptr1);
						MyThread^ o1 = gcnew MyThread(sidecap, j * 40, ptr1);
						Thread^ oThread1 = gcnew Thread(gcnew ThreadStart(o1, &MyThread::ThreadProc));

					
						Kolor* ptr2 = new Kolor;
						cv2.push_back(ptr2);
						MyThread^ o2 = gcnew MyThread(-sidecap, j * 40, ptr2);
						Thread^ oThread2 = gcnew Thread(gcnew ThreadStart(o2, &MyThread::ThreadProc));

						oThread1->Start();
						oThread2->Start();
					}
					threads = false;
				}
				for (int j = 0; j < suma; j++)
				{
					c3 = *cv1[j % 1] + c3;
					c2 = *cv2[j % 1] + c2;
				}
				c3.r = c3.r / (suma);
				c3.b = c3.b / (suma);
				c3.g = c3.g / (suma);

				c2.r = c2.r / (suma);
				c2.b = c2.b / (suma);
				c2.g = c2.g / (suma);

				int f1 = c3.r;
				int f2 = c3.g;
				int f3 = c3.b;
				this->leftBox->BackColor = Color::FromArgb(c3.r, c3.g, c3.b);
				this->rightBox->BackColor = Color::FromArgb(c2.r, c2.g, c2.b);
				this->Update();
				//LEWA 
				/*
				std::string temp1 = std::to_string(c3.r);
				String^ rstring1 = gcnew String(temp1.c_str());
				std::string temp2 = std::to_string(c3.g);
				String^ gstring1 = gcnew String(temp2.c_str());
				std::string temp3 = std::to_string(c3.b);
				String^ bstring1= gcnew String(temp3.c_str());
				this->set1->usend(rstring1, gstring1, bstring1);
				//PRAWA
				std::string temp1_2 = std::to_string(c2.r);
				String^ rstring2 = gcnew String(temp1_2.c_str());
				std::string temp2_2 = std::to_string(c2.g);
				String^ gstring2 = gcnew String(temp2_2.c_str());
				std::string temp3_2 = std::to_string(c2.b);
				String^ bstring2 = gcnew String(temp3_2.c_str());
				this->set1->usend(rstring2, gstring2, bstring2);
				//GÓRA
				*/
				


		//	}//*/
		}
		else
		{
		MessageBox::Show("Please configure port and try again");
		}
	}
}
