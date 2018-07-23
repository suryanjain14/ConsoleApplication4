// ConsoleApplication4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include<iostream>
#include<conio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

using namespace std;

class dconversion
{
public:
	void binary()
	{
		cout << "Enter the binary value" << endl;
		int bnr, tempo, i, c;
		cin >> bnr;

		int no;
		no = 0;
		for (i = 0; bnr > 0; i++)
		{
			tempo = bnr % 10;
			c = pow(2, i);
			no = tempo * c + no;
			bnr = bnr / 10;
		}
		cout << "The  no is " << no;
		_getch();
	}
	void octal()
	{
		cout << "Enter the octal value" << endl;
		int oct, tempo, i, multi;
		cin >> oct;

		int no;
		no = 0;
		for (i = 0; oct> 0; i++)
		{
			tempo = oct% 10;
			multi = pow(8, i);
			no = tempo * multi + no;
			oct= oct / 10;
		}
		cout << "The  no is " << no;
		_getch();
	}
	void hexa()
	{
		cout << "Enter the hex value of value less than 8" << endl;
		char hexval[8];
		cin >> hexval;
		int base = 1,hex;
		int len = strlen(hexval);
		int i;
		for (i=0;i<len;i++)
			if (hexval[i] >= '0'&& hexval[i] <= '9') 
			{
				hex = (hexval[i] - 48)*base;
				base = base * 16;
			}
		else if(hexval[i] >= 'A'&& hexval[i] <= 'F')
		{
			hex = (hexval[i] - 55)*base;
			base = base * 16;
		}

	

		cout << "The  no is " << hex;
		_getch();
	}

};


int main()
{

	dconversion obj;
	int trash = 0;
	do
	{
		system("cls");
		cout << "******WELCOME TO NUMBERSYSTEM CONVERTER(	Decimal only)******"<<endl;
		cout << "Press 1 for binary conversion \nPress 2 for octal conversion\nPress 3 for hex conversion\nPress 4 to exit"<<endl;
		int temp;
		cin >> temp;
		switch (temp)
		{
		case 1:
			obj.binary();
			break;
		case 2:
			obj.octal();
			break;
		case 3:
			obj.hexa();
			break;
		case 4:
				trash = 3;
		}
	} while (trash !=3);
	_getch();
    return 0;
}

