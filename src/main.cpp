#include "keyboard.h"
#include <Windows.h>

int main()
{
	keyboard::set_hook();

	MSG msg;
	while (GetMessage(&msg, NULL, 0, 0));
}