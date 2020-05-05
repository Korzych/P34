#include "Dynamic.h"
#include <Windows.h>
namespace lambient{
Dynamic::Dynamic(void)
{
	InitializeComponent();
	//
	//this->hwnd = FindWindowA(NULL, "tr");
	//this->hdc = GetDC(hwnd);
	
	//TODO: Add the constructor code here
	//
}
System::Void Dynamic::button5_Click(System::Object^  sender, System::EventArgs^  e)
{
	running = true;
	//Zmieniæ na zmienn¹ rozdzielczosc 
	HWND hwnd;
	HDC hdc;
	//LoadBitmapA(NULL, NULL);
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
	Kolor c1, c2;
	while (running)
	{//Zbiera wartoœci rgb i wysy³a
		for (int i = 0; i < sidecap; i=i+5)
		{
			
			for (int j = 0; j < 1080; j=j+10)
			{
				col1 = GetPixel(hdc, i, j);
				col2 = GetPixel(hdc, 1920 - i, 1080 - j);
			
				c1.r = c1.r + GetRValue(col1);
				c1.g = c1.g + GetGValue(col1);
				c1.b = c1.b + GetBValue(col1);
			
				c2.r = c2.r + GetRValue(col2);
				c2.g = c2.g + GetGValue(col2);
				c2.b = c2.b + GetBValue(col2);
			}
		}
		c1.r = c1.r / (1080 * sidecap);
		c1.b = c1.b / (1080 * sidecap);
		c1.g = c1.g / (1080 * sidecap);

		c2.r = c2.r / (1080 * sidecap);
		c2.b = c2.b / (1080 * sidecap);
		c2.g = c2.g / (1080 * sidecap);
		MessageBox::Show( " R:" + c1.r + " G:" + c1.g + " B:" + c1.b);
		MessageBox::Show(" R:" + c2.r + " G:" + c2.g + " B:" + c2.b);
		this->pictureBox1->BackColor = Color::FromArgb(c1.r, c1.g, c1.b);
		this->pictureBox2->BackColor = Color::FromArgb(c2.r, c2.g, c2.b);
	}

}
}
