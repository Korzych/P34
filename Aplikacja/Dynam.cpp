#include "Dynam.h"
#include <Windows.h>

using namespace System;
using namespace System::Windows::Forms;
using namespace lambient;

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
    Application::Run(gcnew Dynam());
	return 0;
}