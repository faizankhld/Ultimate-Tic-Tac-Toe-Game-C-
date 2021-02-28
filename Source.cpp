#include"tictac.h"
#include<iostream>
#include<Windows.h>
#include<conio.h>
using namespace std;

int main()
{
	
	tictac **qtr = new tictac*[3];
	for (int at = 0; at < 3; ++at)
	{
		qtr[at] = new tictac[3];
	}
	for (int yp = 0; yp < 3; ++yp)
	{
		for (int pt = 0; pt < 3; ++pt)
		{
			qtr[yp][pt].map();
		}
	}
	for (int yp = 0; yp < 3; ++yp)
	{
		for (int pt = 0; pt < 3; ++pt)
		{
			qtr[yp][pt].map();
		}
	}
	for (int bp = 0; bp < 3; ++bp)
	{
		qtr[0][0].draw1();
		qtr[0][1].draw1();
		qtr[0][2].draw1();
		cout << endl;
		if (bp == 0)
		{
			qtr[0][0].draw2();
			qtr[0][1].draw2();
			qtr[0][2].draw2();
		}
		if (bp == 1)
		{
			qtr[0][0].draw4();
			qtr[0][1].draw4();
			qtr[0][2].draw4();
		}	if (bp == 2)
		{
			qtr[0][0].draw5();
			qtr[0][1].draw5();
			qtr[0][2].draw5();
		}
		cout << endl;
		qtr[0][0].draw3();
		qtr[0][1].draw3();
		qtr[0][2].draw3();
		cout << endl;
	}
	cout << "______________________________________________________________|" << endl;
	for (int qp = 0; qp < 3; ++qp)
	{
		qtr[1][0].draw1();
		qtr[1][1].draw1();
		qtr[1][2].draw1();
		cout << endl;
		if (qp == 0)
		{
			qtr[1][0].draw2();
			qtr[1][1].draw2();
			qtr[1][2].draw2();
		}
		if (qp == 1)
		{
			qtr[1][0].draw4();
			qtr[1][1].draw4();
			qtr[1][2].draw4();
		}
		if (qp == 2)
		{
			qtr[1][0].draw5();
			qtr[1][1].draw5();
			qtr[1][2].draw5();
		}
		cout << endl;
		qtr[1][0].draw3();
		qtr[1][1].draw3();
		qtr[1][2].draw3();
		cout << endl;
	}
	cout << "______________________________________________________________|" << endl;
	for (int pp = 0; pp < 3; ++pp)
	{
		qtr[2][0].draw1();
		qtr[2][1].draw1();
		qtr[2][2].draw1();
		cout << endl;
		if (pp == 0)
		{
			qtr[2][0].draw2();
			qtr[2][1].draw2();
			qtr[2][2].draw2();
		}
		if (pp == 1)
		{
			qtr[2][0].draw4();
			qtr[2][1].draw4();
			qtr[2][2].draw4();
		}
		if (pp == 2)
		{
			qtr[2][0].draw5();
			qtr[2][1].draw5();
			qtr[2][2].draw5();
		}
		cout << endl;
		qtr[2][0].draw3();
		qtr[2][1].draw3();
		qtr[2][2].draw3();
		cout << endl;
	}
	int flag = 81;
	int tt = 0;
	int no;
	cout << "Enter Table No:";
	cin >> no;
	tictac obj;
	int pu;
	int player = 1;
	char ui = ' ';
	while (tt < flag)
	{
		int yy = 1;
		while (yy < 2)
		{
			if (no == 1)
			{
				cout << "Play On Table No " << no << endl;
				cout << "Player No" << player % 2 << "Turn" << endl;
				if (qtr[0][0].check() == true)
				{

					if (player % 2 == 1)
					{
						qtr[0][0].input1();
						pu = obj.select();

					}
					if (player % 2 == 0)
					{
						qtr[0][0].input2();
						pu = obj.select();
					}
					++yy;
				}
				else
				{
					cout << "Enter Table no";
					cin >> pu;
				}
			}

			if (no == 2)
			{
				cout << "Play On Table No " << no << endl;
				cout << "Player No" << player % 2 << "Turn" << endl;
				if (qtr[0][1].check() == true)
				{
					if (player % 2 == 1)
					{
						qtr[0][1].input1();
						pu = obj.select();
					}
					if (player % 2 == 0)
					{
						qtr[0][1].input2();
						pu = obj.select();
					}
					++yy;
				}
				else
				{
					cout << "Enter Table no";
					cin >> pu;
				}

			}
			if (no == 3)
			{
				cout << "Play On Table No " << no << endl;
				cout << "Player No" << player % 2 << "Turn" << endl;
				if (qtr[0][2].check() == true)
				{
					if (player % 2 == 1)
					{
						qtr[0][2].input1();
						pu = obj.select();
					}
					if (player % 2 == 0)
					{
						qtr[0][2].input2();
						pu = obj.select();
					}
					++yy;
				}
				else
				{
					cout << "Enter Table no";
					cin >> pu;
				}
			}
			if (no == 4)
			{
				cout << "Play On Table No " << no << endl;
				cout << "Player No" << player % 2 << "Turn" << endl;
				if (qtr[1][0].check() == true)
				{
					if (player % 2 == 1)
					{
						qtr[1][0].input1();
						pu = obj.select();
					}
					if (player % 2 == 0)
					{
						qtr[1][0].input2();
						pu = obj.select();
					}
					++yy;
				}
				else
				{
					cout << "Enter Table no";
					cin >> pu;
				}
			}
			if (no == 5)
			{
				cout << "Play On Table No " << no << endl;
				cout << "Player No" << player % 2 << "Turn" << endl;
				if (qtr[1][1].check() == true)
				{
					if (player % 2 == 1)
					{
						qtr[1][1].input1();
						pu = obj.select();
					}
					if (player % 2 == 0)
					{
						qtr[1][1].input2();
						pu = obj.select();
					}
					++yy;
				}
				else
				{
					cout << "Enter Table no";
					cin >> pu;
				}
			}
			if (no == 6)
			{
				cout << "Play On Table No " << no << endl;
				cout << "Player No" << player % 2 << "Turn" << endl;
				if (qtr[1][2].check() == true)
				{
					if (player % 2 == 1)
					{
						qtr[1][2].input1();
						pu = obj.select();
					}
					if (player % 2 == 0)
					{
						qtr[1][2].input2();
						pu = obj.select();
					}
					++yy;
				}
				else
				{
					cout << "Enter Table no";
					cin >> pu;
				}
			}
			if (no == 7)
			{
				cout << "Play On Table No " << no << endl;
				cout << "Player No" << player % 2 << "Turn" << endl;
				if (qtr[2][0].check() == true)
				{
					if (player % 2 == 1)
					{
						qtr[2][0].input1();
						pu = obj.select();
					}
					if (player % 2 == 0)
					{
						qtr[2][0].input2();
						pu = obj.select();
					}
					++yy;
				}
				else
				{
					cout << "Enter Table no";
					cin >> pu;
				}
			}
			if (no == 8)
			{
				cout << "Play On Table No " << no << endl;
				cout << "Player No" << player % 2 << "Turn" << endl;
				if (qtr[2][1].check() == true)
				{
					if (player % 2 == 1)
					{
						qtr[2][1].input1();
						pu = obj.select();
					}
					if (player % 2 == 0)
					{
						qtr[2][1].input2();
						pu = obj.select();
					}
					++yy;
				}
				else
				{
					cout << "Enter Table no";
					cin >> pu;
				}
			}
			if (no == 9)
			{
				cout << "Play On Table No " << no << endl;
				cout << "Player No" << player % 2 << "Turn" << endl;
				if (qtr[2][2].check() == true)
				{
					if (player % 2 == 1)
					{
						qtr[2][2].input1();
						pu = obj.select();
					}
					if (player % 2 == 0)
					{
						qtr[2][2].input2();
						pu = obj.select();
					}
					++yy;
				}
				else
				{
					cout << "Enter Table no";
					cin >> pu;
				}

			}

			no = pu;
			for (int ll = 0; ll < 3; ++ll)
			{
				int qwin = 0;
				for (int kk = 0; kk < 3; ++kk)
				{
					if (qtr[ll][kk].wins() == 1)
					{
						++qwin;
					}
				}
				if (qwin == 3)
				{
					cout << "Winner is Player  1 " << endl;
					ll = 4;
					system("pause");
					tt = 200;
				}
			}
			for (int ll = 0; ll < 3; ++ll)
			{
				int qtwin = 0;
				for (int kk = 0; kk < 3; ++kk)
				{
					if (qtr[kk][ll].wins() == 1)
					{
						++qtwin;
					}
				}
				if (qtwin == 3)
				{
					cout << "Winner is Player 1 " << endl;
					ll = 4;
					system("pause");
					tt = 200;
				}
			}
			for (int ll = 0; ll < 3; ++ll)
			{
				int qwin = 0;
				for (int kk = 0; kk < 3; ++kk)
				{
					if (qtr[ll][kk].wins() == 2)
					{
						++qwin;
					}
				}
				if (qwin == 3)
				{
					cout << "Winner is Player 2" << endl;
					ll = 4;
					system("pause");
					tt = 200;
				}
			}
			for (int ll = 0; ll < 3; ++ll)
			{
				int qtwin = 0;
				for (int kk = 0; kk < 3; ++kk)
				{
					if (qtr[kk][ll].wins() == 2)
					{
						++qtwin;
					}
				}
				if (qtwin == 3)
				{
					cout << "Winner is Player 2" << endl;
					ll = 4;
					system("pause");
					tt = 200;
				}
			}
			int wn = 0;
			for (int ss = 0; ss < 2; ++ss)
			{
				
				int qq = ss + 1;
				if ((qtr[ss][ss].wins() == 1) && (qtr[qq][qq].wins()== 1) )
				{
					++wn;
				}
				if (wn == 2)
				{
					cout << "Winner Is Player 1 " << endl;
					system("pause");
					tt = 200;
				}
			}
			int cc = 0;
			for (int xc = 0,zx=2; xc < 2 && zx > 0; ++xc,zx--)
			{
				
				int m = xc + 1;
				int n = zx - 1;
				if ((qtr[xc][zx].wins() == 1) && (qtr[m][n].wins() == 1))
				{
					++cc;
				}
				if (cc == 2)
				{
					cout << "Winner Is Player 1" << endl;
					system("pause");
					tt = 200;
				}
			}
			int ww = 0;
			for (int ss = 0; ss < 2; ++ss)
			{
				
				int qq = ss + 1;
				if ((qtr[ss][ss].wins() == 2) && (qtr[qq][qq].wins() == 2))
				{
					++ww;
				}
				if (ww == 2)
				{
					cout << "Winner Is Player 2" << endl;
					system("pause");
					tt = 200;
				}
			}
			int cx = 0;
			for (int xc = 0, zx = 2; xc < 2 && zx > 0; ++xc, zx--)
			{
				
				int m = xc + 1;
				int n = zx - 1;
				if ((qtr[xc][zx].wins() == 2) && (qtr[m][n].wins() == 2))
				{
					++cx;
				}
				if (cx == 2)
				{
					cout << "Winner Is Player 2" << endl;
					system("pause");
					tt = 200;
				}
			}
		}
		system("cls");
		for (int bp = 0; bp < 3; ++bp)
		{
			qtr[0][0].draw1();
			qtr[0][1].draw1();
			qtr[0][2].draw1();
			cout << endl;
			if (bp == 0)
			{
				qtr[0][0].draw2();
				qtr[0][1].draw2();
				qtr[0][2].draw2();
			}
			if (bp == 1)
			{
				qtr[0][0].draw4();
				qtr[0][1].draw4();
				qtr[0][2].draw4();
			}	if (bp == 2)
			{
				qtr[0][0].draw5();
				qtr[0][1].draw5();
				qtr[0][2].draw5();
			}
			cout << endl;
			qtr[0][0].draw3();
			qtr[0][1].draw3();
			qtr[0][2].draw3();
			cout << endl;
		}
		cout << "______________________________________________________________|" << endl;
		for (int qp = 0; qp < 3; ++qp)
		{
			qtr[1][0].draw1();
			qtr[1][1].draw1();
			qtr[1][2].draw1();
			cout << endl;
			if (qp == 0)
			{
				qtr[1][0].draw2();
				qtr[1][1].draw2();
				qtr[1][2].draw2();
			}
			if (qp == 1)
			{
				qtr[1][0].draw4();
				qtr[1][1].draw4();
				qtr[1][2].draw4();
			}
			if (qp == 2)
			{
				qtr[1][0].draw5();
				qtr[1][1].draw5();
				qtr[1][2].draw5();
			}
			cout << endl;
			qtr[1][0].draw3();
			qtr[1][1].draw3();
			qtr[1][2].draw3();
			cout << endl;
		}
		cout << "______________________________________________________________|" << endl;
		for (int pp = 0; pp < 3; ++pp)
		{
			qtr[2][0].draw1();
			qtr[2][1].draw1();
			qtr[2][2].draw1();
			cout << endl;
			if (pp == 0)
			{
				qtr[2][0].draw2();
				qtr[2][1].draw2();
				qtr[2][2].draw2();
			}
			if (pp == 1)
			{
				qtr[2][0].draw4();
				qtr[2][1].draw4();
				qtr[2][2].draw4();
			}
			if (pp == 2)
			{
				qtr[2][0].draw5();
				qtr[2][1].draw5();
				qtr[2][2].draw5();
			}
			cout << endl;
			qtr[2][0].draw3();
			qtr[2][1].draw3();
			qtr[2][2].draw3();
			cout << endl;
		}
		++tt;
		++player;
	}
	for (int t = 0; t < 3; ++t)
	{
		delete[]qtr[t];
    }
	delete[]qtr;
}
	 
