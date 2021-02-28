#include "tictac.h"
#include<iostream>
#include<Windows.h>
using namespace std;

int rolo, colo;
tictac::tictac()
{
	n = 3;
		ptr = new char*[4];
		for (int gt = 0; gt < 3; ++gt)
		{
			ptr[gt] = new char[3];
		}
		ptr[3] = new char[1];            // Intialiazing Pointer and then 2d array 4th row of array is declare to Store Winner Data
}
void tictac::map()
{
	char c = ' ';
	for (int a = 0; a < n; ++a)
	{
		for (int b = 0; b < n; ++b)
		{
			ptr[a][b] = c;

		}
	}
	ptr[3][0] = c;
}
void tictac::draw()
{

	for (int a = 0; a < n; ++a)
	{
		for (int et = 0; et < n; ++et)
		{
			cout << "     |";
		}
		cout << endl;
		for (int b = 0; b < n; ++b)
		{
			cout << " " << ptr[a][b] << "    ";
		}
		cout << endl;
		for (int rt = 0; rt < n; ++rt)
		{
			cout << "_____|";
		}
		cout << endl;

	}
}
void tictac::draw1()
{
	for (int et = 0; et < n; ++et)
	{
		cout << "|     ";
	}
	cout << "   ";
		
}
void tictac::draw2()
{
	
	for (int b = 0; b < n; ++b)
	{
		cout << " " << ptr[0][b] << "    ";
	}
	cout << "   ";
}
void tictac::draw3()
{
	for (int rt = 0; rt < n; ++rt)
	{
		cout << "|_____";
	}
	cout << "   ";
}
void tictac::draw4()
{

	for (int b = 0; b < n; ++b)
	{
		cout << " " << ptr[1][b] << "    ";
	}
	cout << "   ";
}
void tictac::draw5()
{

	for (int b = 0; b < n; ++b)
	{
		cout << " " << ptr[2][b] << "    ";
	}
	cout << "   ";
}
bool tictac::winner()
{


	char dd = ' ';
	int wt = 0;
	for (int po = 0; po < n; po++)
	{
		int win = 0;
		for (int adt = 0; adt < n - 1; ++adt)
		{
			int drd = adt + 1;
			if (ptr[po][adt] != dd && ptr[po][drd] != dd)
			{
				if (ptr[po][adt] == ptr[po][drd])
				{
					++win;
				}

				                                                                    // Checking winning Condition Row Wise 
			}
			else
			{
				adt = 100;
			}
		}
		if (win == n - 1)
		{
			return true;
		
		}

	}
	for (int po = 0; po < n; po++)
	{
		int win = 0;
		for (int adt = 0; adt < n - 1; ++adt)                                    // Checking winning Condition Colomn Wise 
		{
			int drd = adt + 1;
			if (ptr[adt][po] != dd && ptr[drd][po] != dd)
			{
				if (ptr[adt][po] == ptr[drd][po])
				{
					++win;
				}


			}
			else
			{
				adt = 100;
			}
		}
		if (win == n - 1)
		{
			return true;
		}

	}
	int wint = 0;
	for (int al = 0; al < n - 1; ++al)
	{
		char dp = ' ';
		int bm = al + 1;

		if (ptr[al][al] != dp && ptr[bm][bm] != dp)
		{
			if (ptr[al][al] == ptr[bm][bm])                              // Checking winning Condition Diagnolly From Left  
			{
				++wint;
			}
		}
		if (wint == n - 1)
		{
			return true;
		}
	}
	int ko = 0;
	for (int fg = 0, pl = n - 1; fg < n - 1 && pl >= 1; ++fg, --pl)
	{
		char kh = ' ';
		int xy = fg + 1;
		int cv = pl - 1;
		if (ptr[fg][pl] != kh && ptr[xy][cv] != kh)
		{
			if (ptr[fg][pl] == ptr[xy][cv])                                 // Checking winning Condition Diagnolly From Right
			{
				++ko;
			}

		}
		if (ko == n - 1)
		{
			
			return true;
		}


	}
}

void tictac::input1()
{	
	
	int ro, cl;	
	char ty = ' ';
			int poi = 1;
			int chek = 0;
			while (poi < 2)
			{
				
				cout << "Enter the row: " << endl;
				cin >> ro;
				cout << "Enter the colomn: " << endl;
				cin >> cl;

				if ((ro < n && cl < n) && ptr[3][0] == ty)
				{

					if (ptr[ro][cl] == ty)
					{
						ptr[ro][cl] = 'X';
						rolo = ro;
						colo = cl;
					}

					else
					{
						int bcd = 1;
						while (bcd < 2)
						{
							cout << "Invalid Move" << endl;
							cout << "Enter the row: " << endl;
							cin >> ro;
							cout << "Enter the colomn: " << endl;
							cin >> cl;
							if (ptr[ro][cl] == ty)
							{
								ptr[ro][cl] = 'X';
								rolo = ro;
								colo = cl;
							    +bcd;

							}
						}
					}
					++poi;
				}
				else
				{
					cout << "Invalid Move" << endl;
				}
			}
			winner();
			if (winner() == true)
			{
				ptr[3][0] = 'X';

			}			
}
void tictac::input2()
{

	int pt = 0;	
	int ro, cl;
	char ty = ' ';
	int poi = 1;
	
	while (poi < 2)
	{
		
		cout << "Enter the row: " << endl;
		cin >> ro;
		cout << "Enter the colomn: " << endl;
		cin >> cl;
		if ((ro < n && cl < n) && ptr[3][0] == ty)
		{

			if (ptr[ro][cl] == ty)
			{
				ptr[ro][cl] = 'O';
				rolo = ro;
				colo = cl;
			}

			else
			{
				int bcd = 1;
				while (bcd < 2)
				{
					cout << "Invalid Move" << endl;
					cout << "Enter the row: " << endl;
					cin >> ro;
					cout << "Enter the colomn: " << endl;
					cin >> cl;
					if (ptr[ro][cl] == ty)
					{
						ptr[ro][cl] = 'O';
						rolo = ro;
						colo = cl;
					  ++bcd;
					}
				}
			}
			++poi;
		}
		else
		{
			cout << "Invalid Move" << endl;
		}
	}

	winner();
	if (winner() == true)
	{
		ptr[3][0] = 'O';

	}
	
}
int tictac::select()
{
	int a = 0;
	for (int aa = 0; aa < 3; ++aa)
	{
		for (int bb = 0; bb < 3; ++bb)
		{
			++a;
			if (rolo == aa && colo == bb)
			{
				return a;
				bb = 4;
				aa = 4;
			}
		}
    }
}
int tictac::check()
{
	char dt = ' ';
	if (ptr[3][0] != dt)
	{
		return false;
	}
	else
	{
		return true;
	}
}
int tictac::wins()
{
	char xz = 'X';
	char yz = 'O';
	if (ptr[3][0] == xz)
	{
		return 1;
    }
	if (ptr[3][0] == yz)
	{
		return 2;
	}

}
tictac :: ~tictac()
{
	for (int ad = 0; ad < 4; ++ad)
	{
		delete[]ptr[ad];
	}
	delete []ptr;
	cout << "Destructor Called" << endl;


}