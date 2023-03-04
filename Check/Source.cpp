#include<iostream>
#include<conio.h>
using namespace std;
//#define PALINDROM
//#define HAPPY_TICKET
//#define DZZZZZZZ
//#define SWITCH
//#define UP_ARROW    72
//#define DOWN_ARROW  80
//#define LEFT_ARROW  75
//#define RIGHT_ARROW 77
//#define ENTER       13
enum Key
{
	UP_ARROW = 72,
	DOWN_ARROW = 80,
	LEFT_ARROW = 75,
	RIGHT_ARROW = 77,
	ENTER = 13
};

void main()
{
	setlocale(LC_ALL, "");
#ifdef PALINDROM
	int number;
	int reverse = 0;
	cout << "������� �����"; cin >> number;
	int buffer = number;
	while (buffer)
	{
		reverse *= 10;
		reverse += buffer % 10;
		buffer /= 10;
	}
	cout << number << endl;
	cout << reverse << endl;
	if (reverse == number)
	{
		cout << "���������" << endl;
	}
	else
	{
		cout << "�� ���������" << endl;
	}
#endif


#ifdef HAPPY_TICKET
	int order;
	int first_part;
	int second_part;
	cout << "������� ��� ���������� �����"; cin >> order;
	first_part = order / 1000;
	second_part = order % 1000;
	cout << first_part << endl;
	cout << second_part << endl;
	if (second_part = first_part)
	{
		cout << "� ��� ���������� �����" << endl;
	}
	else
	{
		cout << "� ��� �� ��������� �����" << endl;
	}
#endif

#ifdef DZZZZZZZ

	char key;
	do
	{
		key = _getch();

		if (key == 'w'||key=='W'||key==UP_ARROW)
		{
			cout << "������" << endl;
		}
		else if (key == 's'||key=='S'||key==DOWN_ARROW)
		{
			cout << "�����" << endl;

		}
		else if (key == 'a'||key=='A'||key==LEFT_ARROW)
		{
			cout << "�����" << endl;
		}
		else if (key == 'd'||key=='D'||key==RIGHT_ARROW)
		{
			cout << "������" << endl;
		}
		else if (key == 32)
		{
			cout << "������" << endl;
		}
		else if (key == 13)
		{
			cout << "�����" << endl;
		}
		else
		{
			if(key !=-32)
				cout << "������" << endl;
		}
	} while ((int)key != 27);
#endif
#ifdef SWITCH
	char key;
	key = _getch();
	switch (key)
	{
	case 'w':cout << "������" << endl; break;
	case 'W':cout << "������" << endl; break;
	case 's':cout << "�����" << endl; break;
	case 'S':cout << "�����" << endl; break;
	case 'a':cout << "�����" << endl; break;
	case 'A':cout << "�����" << endl; break;
	case 'd':cout << "������" << endl; break;
	case 'D':cout << "������" << endl; break;
	case ENTER:cout << "�����" << endl; break;
	case ' ':cout << "������" << endl; break;
	default:cout << "Error" << endl;
	}
#endif
}