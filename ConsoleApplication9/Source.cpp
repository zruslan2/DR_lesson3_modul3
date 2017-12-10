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
	cout << "Введите номер задания \n";
	cin >> nz;

	switch (nz)
	{
	case 1:
	{
		/*1.	Пользователь вводит два числа.Определить, равны ли эти числа, и если нет, 
			вывести их на экран в порядке возрастания.*/
		int ch1, ch2;
		cout << "Введите первое число \n";
		cin >> ch1;
		cout << "Введите второе число \n";
		cin >> ch2;

		if (ch1 != ch2)
		{
			if (ch1 > ch2) cout << ch2 << " " << ch1 << endl;
			if (ch1 < ch2) cout << ch1 << " " << ch2 << endl;
			goto start;
		}
		else
		{
			cout << "Числа равны" << endl;
			goto start;
		}
	}
	break;
	case 2:
	case 3:
	{
		/*2.	Пользователь с клавиатуры вводит 5 оценок студента.Определить, допущен ли 
			студент к экзамену.Студент получает допуск, если его средний балл 4 балла и выше*/
		unsigned short int o1, o2, o3, o4,o5,sr;
		cout << "Введите пять оценок (от 2 до 5) \n";
		cin >> o1>>o2>>o3>>o4>>o5;
		sr = (o1 + o2 + o3 + o4 + o5) / 5;
		if (sr >= 4)
		{
			cout << "Студент допущен к экзамену \n";
		}
		else
		{
			cout << "Студент не допущен к экзамену \n";
		}		
	}
	break;
	case 4:
	{
		/*4.	Написать программу - калькулятор.Пользователь вводит два числа и выбирает 
			арифметическое действие.Вывести на экран результат*/
		int d;
		double ch1, ch2, rez;
		cout << "Введите первое число \n";
		cin >> ch1;
		cout << "Введите второе число \n";
		cin >> ch2;
		cout << "Выберите действие с числами: 1 - прибавить, 2 - отнять, 3 - умножить, 4 - разделить \n";
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
		/*5.	Написать программу, которая по выбору пользователя меняет цвет консольного 
			приложения.Пользователь может выбрать цвет шрифта и цвет фона*/
		
		int i;

		char str[9] = "color ";
		char fon[2], text[2];
		colors();
		cout << "Выберите цвет фона: "; cin >> fon;
		cout << "Выберите цвет текста: "; cin >> text;
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
		/*6.	Написать программу, которая по выбору пользователя возводит введенное 
			им число в степень от нулевой до седьмой включительно*/
		int ch1, step;
		cout << "Введите число \n";
		cin >> ch1;
		cout << "Введите степень возведения (от 0 до 7) \n";
		cin >> step;

		cout << pow(ch1, step) << endl;
		goto start;		
	}
	break;
	case 7:
	{
		/*7.	В час пик на остановку одновременно подъехали три маршрутных такси, 
			следующие по одному маршруту, в которые тут же набились пассажиры.
			Водители обнаружили, что количество людей в разных маршрутках разное, 
			и решили пересадить часть пассажиров так, чтобы в каждой маршрутке было 
			поровну пассажиров.Требуется по количествам людей в трех маршрутках определить, 
			какое наименьшее количество пассажиров придаться при этом пересадить(если это 
			вообще возможно)*/
		int m1, m2, m3,sr,kol=0;
		cout << "Введите колличество людей в первой маршрутке \n";
		cin >> m1;
		cout << "Введите колличество людей во второй маршрутке \n";
		cin >> m2;
		cout << "Введите колличество людей в третьй маршрутке \n";
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
		cout << "Надо пересадить " << kol << " человек" << endl;
		goto start;
	}
	break;
	default:
	{
		cout << "Такого задания не существует \n";
		goto start;
	}
	break;
	}
}
void colors()
{
	cout << "0 - черный" << endl;
	cout << "1 - синий" << endl;
	cout << "2 - зеленый" << endl;
	cout << "3 - голубой" << endl;
	cout << "4 - красный" << endl;
	cout << "5 - лиловый" << endl;
	cout << "6 - жёлтый" << endl;
	cout << "7 - белый" << endl;
}