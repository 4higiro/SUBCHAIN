// Including
#include <Windows.h>

#include "form.h"

// Using names
using namespace std;
using namespace SUBCHAIN;

// GUI
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew form);
	return 0;
}