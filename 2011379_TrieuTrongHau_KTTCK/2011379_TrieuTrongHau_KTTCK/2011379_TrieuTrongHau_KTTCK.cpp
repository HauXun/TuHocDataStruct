#include <iostream>
#include <conio.h>
#include <fstream>
#include <iomanip>

using namespace std;

#include "2011379_Header.h"
#include "2011379_Thuvien.h"
#include "2011379_Menu.h"

void ChayChuongTrinh();

int main()
{
	ChayChuongTrinh();
	return 0;
}

void ChayChuongTrinh()
{
	int n = 0, menu, soMenu = 5;
	TREE root;

	do
	{
		menu = ChonMenu(soMenu);
		XuLyMenu(menu, root);
	} while (menu > 0);

	cout << "\nCam on da su dung chuong trinh";
	_getch();
}