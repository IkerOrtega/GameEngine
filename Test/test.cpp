#include <windows.h>

void foo(void)
{
	OutputDebugStringA("Printing\n");
}

INT WINAPI WinMain(
	HINSTANCE hInstance, 
	HINSTANCE hPrevInstance,
	PSTR lpCmdLine, 
	INT nCmdShow)
{
	foo();
}



