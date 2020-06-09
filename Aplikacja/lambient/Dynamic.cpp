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
		
			int sidecap = (int)edgerange->Value;
			int upcap = (int)uprange->Value;
			
			DynamicThread^o1 = gcnew DynamicThread(mode, sidecap, upcap, this->set1);
			oThread1 = gcnew Thread(gcnew ThreadStart(o1, &DynamicThread::ThreadProc));
			oThread1->Start();
			
			//public: DynamicThread(Settings^ set1, Kolor^ &clr, Kolor^ &clr2, Kolor^ &clr3)
			//public: DynamicThread(int mode, int side, int up, Settings^ set1, Kolor^ &clr)
			running = true;
			/*
			DynamicThread^o1 = gcnew DynamicThread(this->set1, &k1 ,  &k2,  &k3);
			DynamicThread^o2 = gcnew DynamicThread(mode, sidecap, upcap, this->set1, &k1);
		
			
			oThread1 = gcnew Thread(gcnew ThreadStart(o1, &DynamicThread::ThreadSend));
			oThread2 = gcnew Thread(gcnew ThreadStart(o2, &DynamicThread::ThreadLeft));
			DynamicThread^o3 = gcnew DynamicThread(mode, sidecap, upcap, this->set1, &k2);
			oThread3 = gcnew Thread(gcnew ThreadStart(o3, &DynamicThread::ThreadRight));
			if (mode == 1)
			{
				DynamicThread^o4 = gcnew DynamicThread(mode, sidecap, upcap, this->set1, &k3);
				oThread4 = gcnew Thread(gcnew ThreadStart(o4, &DynamicThread::ThreadTop));
				oThread4->Start();
			}
		
			oThread3->Start();
			oThread1->Start();
			oThread2->Start();
			
			
			*/


		
		}
		else
		{
		MessageBox::Show("Please configure port and try again");
		}
	}
}
