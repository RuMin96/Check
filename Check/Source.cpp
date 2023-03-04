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
	cout << "Введите число"; cin >> number;
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
		cout << "Палиндром" << endl;
	}
	else
	{
		cout << "Не палиндром" << endl;
	}
#endif


#ifdef HAPPY_TICKET
	int order;
	int first_part;
	int second_part;
	cout << "Введите ваш счастливый билет"; cin >> order;
	first_part = order / 1000;
	second_part = order % 1000;
	cout << first_part << endl;
	cout << second_part << endl;
	if (second_part = first_part)
	{
		cout << "У вас счастливый билет" << endl;
	}
	else
	{
		cout << "У вас не счасливый билет" << endl;
	}
#endif

#ifdef DZZZZZZZ

	char key;
	do
	{
		key = _getch();

		if (key == 'w'||key=='W'||key==UP_ARROW)
		{
			cout << "Вперед" << endl;
		}
		else if (key == 's'||key=='S'||key==DOWN_ARROW)
		{
			cout << "Назад" << endl;

		}
		else if (key == 'a'||key=='A'||key==LEFT_ARROW)
		{
			cout << "Влево" << endl;
		}
		else if (key == 'd'||key=='D'||key==RIGHT_ARROW)
		{
			cout << "Вправо" << endl;
		}
		else if (key == 32)
		{
			cout << "Прыжок" << endl;
		}
		else if (key == 13)
		{
			cout << "Огонь" << endl;
		}
		else
		{
			if(key !=-32)
				cout << "ОШИБКА" << endl;
		}
	} while ((int)key != 27);
#endif
#ifdef SWITCH
	char key;
	key = _getch();
	switch (key)
	{
	case 'w':cout << "Вперед" << endl; break;
	case 'W':cout << "Вперед" << endl; break;
	case 's':cout << "Назад" << endl; break;
	case 'S':cout << "Назад" << endl; break;
	case 'a':cout << "Влево" << endl; break;
	case 'A':cout << "Влево" << endl; break;
	case 'd':cout << "Вправо" << endl; break;
	case 'D':cout << "Вправо" << endl; break;
	case ENTER:cout << "Огонь" << endl; break;
	case ' ':cout << "Прыжок" << endl; break;
	default:cout << "Error" << endl;
	}
#endif
}