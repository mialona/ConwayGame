#ifndef _MAIN_
#define _MAIN_

#include <windows.h>


#define TAM 60
#define ID_NEW 3000
#define ID_EXIT 3003
#define ID_PLAY 3004
#define ID_PAUSE 3005
#define ID_HELP 3006
#define ID_ABOUT 3007

LRESULT CALLBACK WndProc(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam);
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow);


#endif