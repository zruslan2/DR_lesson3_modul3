#include <stdio.h>
#include <iostream>
#include <locale.h>
#include <math.h>
#include <windows.h>

using namespace std;
unsigned short int nz;

void colors();

void main()
{
	setlocale(LC_ALL, "Rus");

start:
	cout << "������� ����� ������� \n";
	cin >> nz;

	switch (nz)
	{
	case 1:
	{
		/*1.	������������ ������ ��� �����.����������, ����� �� ��� �����, � ���� ���, 
			������� �� �� ����� � ������� �����������.*/
		int ch1, ch2;
		cout << "������� ������ ����� \n";
		cin >> ch1;
		cout << "������� ������ ����� \n";
		cin >> ch2;

		if (ch1 != ch2)
		{
			if (ch1 > ch2) cout << ch2 << " " << ch1 << endl;
			if (ch1 < ch2) cout << ch1 << " " << ch2 << endl;
			goto start;
		}
		else
		{
			cout << "����� �����" << endl;
			goto start;
		}
	}
	break;
	case 2:
	case 3:
	{
		/*2.	������������ � ���������� ������ 5 ������ ��������.����������, ������� �� 
			������� � ��������.������� �������� ������, ���� ��� ������� ���� 4 ����� � ����*/
		unsigned short int o1, o2, o3, o4,o5,sr;
		cout << "������� ���� ������ (�� 2 �� 5) \n";
		cin >> o1>>o2>>o3>>o4>>o5;
		sr = (o1 + o2 + o3 + o4 + o5) / 5;
		if (sr >= 4)
		{
			cout << "������� ������� � �������� \n";
		}
		else
		{
			cout << "������� �� ������� � �������� \n";
		}		
	}
	break;
	case 4:
	{
		/*4.	�������� ��������� - �����������.������������ ������ ��� ����� � �������� 
			�������������� ��������.������� �� ����� ���������*/
		int d;
		double ch1, ch2, rez;
		cout << "������� ������ ����� \n";
		cin >> ch1;
		cout << "������� ������ ����� \n";
		cin >> ch2;
		cout << "�������� �������� � �������: 1 - ���������, 2 - ������, 3 - ��������, 4 - ��������� \n";
		cin >> d;
		switch (d)
		{
		case 1:
		{
			rez = ch1 + ch2;
			cout << rez << endl;
			goto start;
		}
		break;
		case 2:
		{
			rez = ch1 - ch2;
			cout << rez << endl;
			goto start;
		}
		break;
		case 3:
		{
			rez = ch1 * ch2;
			cout << rez << endl;
			goto start;
		}
		break;
		case 4:
		{
			rez = ch1 / ch2;
			cout << rez << endl;
			goto start;
		}
		break;
		}

	}
	break;
	case 5:
	{
		/*5.	�������� ���������, ������� �� ������ ������������ ������ ���� ����������� 
			����������.������������ ����� ������� ���� ������ � ���� ����*/
		
		int i;

		char str[9] = "color ";
		char fon[2], text[2];
		colors();
		cout << "�������� ���� ����: "; cin >> fon;
		cout << "�������� ���� ������: "; cin >> text;
		strcat(str, fon);
		strcat(str, text);
		/*for (i = 0; i < 9; ++i)
		{
			cout << str[i] << endl;
		}*/
		system(str);
		goto start;		
	}
	break;
	case 6:
	{
		/*6.	�������� ���������, ������� �� ������ ������������ �������� ��������� 
			�� ����� � ������� �� ������� �� ������� ������������*/
		int ch1, step;
		cout << "������� ����� \n";
		cin >> ch1;
		cout << "������� ������� ���������� (�� 0 �� 7) \n";
		cin >> step;

		cout << pow(ch1, step) << endl;
		goto start;		
	}
	break;
	case 7:
	{
		/*7.	� ��� ��� �� ��������� ������������ ��������� ��� ���������� �����, 
			��������� �� ������ ��������, � ������� ��� �� �������� ���������.
			�������� ����������, ��� ���������� ����� � ������ ���������� ������, 
			� ������ ���������� ����� ���������� ���, ����� � ������ ��������� ���� 
			������� ����������.��������� �� ����������� ����� � ���� ���������� ����������, 
			����� ���������� ���������� ���������� ��������� ��� ���� ����������(���� ��� 
			������ ��������)*/
		int m1, m2, m3,sr,kol=0;
		cout << "������� ����������� ����� � ������ ��������� \n";
		cin >> m1;
		cout << "������� ����������� ����� �� ������ ��������� \n";
		cin >> m2;
		cout << "������� ����������� ����� � ������ ��������� \n";
		cin >> m3;
		sr = (m1 + m2 + m3) / 3;
		if (m1 > sr)
		{
			kol = kol + (m1 - sr);			
		}
		if (m2 > sr)
		{
			kol = kol + (m2 - sr);			
		}
		if (m3 > sr)
		{
			kol = kol + (m3 - sr);
		}
		cout << "���� ���������� " << kol << " �������" << endl;
		goto start;
	}
	break;
	default:
	{
		cout << "������ ������� �� ���������� \n";
		goto start;
	}
	break;
	}
}
void colors()
{
	cout << "0 - ������" << endl;
	cout << "1 - �����" << endl;
	cout << "2 - �������" << endl;
	cout << "3 - �������" << endl;
	cout << "4 - �������" << endl;
	cout << "5 - �������" << endl;
	cout << "6 - �����" << endl;
	cout << "7 - �����" << endl;
}