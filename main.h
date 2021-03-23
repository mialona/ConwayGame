#ifndef _MAIN_
#define _MAIN_

#include <windows.h>


#define TAM 60
#define ID_PLAY 3001
#define ID_PAUSE 3002
#define ID_HELP 3003

LRESULT CALLBACK WndProc(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam);
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow);


#endif