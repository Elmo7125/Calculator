
#include <iostream>
#include <cstdint>
using namespace std;

int main()
{
	setlocale(0, "");
	int a, b, c, k, x, x1, x2, D;
	met1: cout << "Выберите действие : " << endl;
	cout << "1) Сложение " << endl;
	cout << "2) Вычитание " << endl;
	cout << "3) Умножение " << endl;
	cout << "4) Деление " << endl;
	cout << "5) Нахождение дискриминанта и его корней " << endl;
	cout << "6) Выход из программы " << endl;
	cout << "" << endl;
	cout << "" << endl;
	cout << "Калькулятор создан Elmo59ru" << endl;
	cin >> k;

	switch (k)
	{
	case 1:
		cout << "Первое число : ";
		cin >> a;
		cout << "Второе число : ";
		cin >> b;
		c = a + b;
		cout << "Ответ : " << c << endl;
		system("pause");
		goto met1;
		
	case 2 :
		cout << "Первое число : ";
		cin >> a;
		cout << "Второе число : ";
		cin >> b;
		c = a - b;
		cout << "Ответ : " << c << endl;
		system("pause");
		goto met1;
	case 3:
		cout << "Первое число : ";
		cin >> a;
		cout << "Второе число :";
		cin >> b;
		c = a * b;
		cout << "Ответ : " << c << endl;
		system("pause");
		goto met1;
	case 4:
		cout << "Первое число : ";
		cin >> a;
		cout << "Второе число : ";
		cin >> b;
		c = a / b;
		cout << "Ответ : " << c << endl;
		system("pause");
		goto met1;
	case 5:
		cout << "Введите число а = ";
		cin >> a;
		cout << "Введите число b = ";
		cin >> b;
		cout << "Введите число с = ";
		cin >> c;
		D = (b * b) - (4 * a * c);
		if (D > 0)
		{


			x1 = (-b - sqrt(D)) / 2 * a;
			x2 = (-b + sqrt(D)) / 2 * a;

			D = sqrt(D);

			cout << "Дискриминант = " << D << endl;
			cout << "x1 = " << x1 << endl;
			cout << "x2 = " << x2 << endl;
		}
		if (D < 0)
		{

			cout << "Корней нет, т.к дискриминант < 0" << endl;
		}
		if (D == 0)
		{
			x = -b / 2 * a;

			cout << "Кратный корень = " << x << endl;
		}
		system("pause");
		goto met1;
	case 6:
		return 0;
	}
}