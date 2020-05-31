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
			running = true;
		
			


			
				


		
		}
		else
		{
		MessageBox::Show("Please configure port and try again");
		}
	}
}
