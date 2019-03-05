
#include <iostream>
#include <cstdint>
using namespace std;

int main()
{
	setlocale(0, "");
	int a, b, c, k, x, x1, x2, D;
	met1: cout << "Chose mode : " << endl;
	cout << "1) Addition " << endl;
	cout << "2) Subtraction " << endl;
	cout << "3) Multiplication " << endl;
	cout << "4) Division " << endl;
	cout << "5) Finding the discriminant and its roots " << endl;
	cout << "6) Exit " << endl;
	cout << "" << endl;
	cout << "" << endl;
	cout << "Created by Elmo59ru" << endl;
	cin >> k;

	switch (k)
	{
	case 1:
		cout << "First Number : ";
		cin >> a;
		cout << "Second Number : ";
		cin >> b;
		c = a + b;
		cout << "Answer : " << c << endl;
		system("pause");
		goto met1;
		
	case 2 :
		cout << "Fires Number : ";
		cin >> a;
		cout << "Second Number : ";
		cin >> b;
		c = a - b;
		cout << "Answer : " << c << endl;
		system("pause");
		goto met1;
	case 3:
		cout << "First Number : ";
		cin >> a;
		cout << "Second Number :";
		cin >> b;
		c = a * b;
		cout << "Ответ : " << c << endl;
		system("pause");
		goto met1;
	case 4:
		cout << "First Number : ";
		cin >> a;
		cout << "Second Number : ";
		cin >> b;
		c = a / b;
		cout << "Answer : " << c << endl;
		system("pause");
		goto met1;
	case 5:
		cout << "Enter number а = ";
		cin >> a;
		cout << "Enter number b = ";
		cin >> b;
		cout << "Enter number с = ";
		cin >> c;
		D = (b * b) - (4 * a * c);
		if (D > 0)
		{


			x1 = (-b - sqrt(D)) / 2 * a;
			x2 = (-b + sqrt(D)) / 2 * a;

			D = sqrt(D);

			cout << "Discriminant = " << D << endl;
			cout << "x1 = " << x1 << endl;
			cout << "x2 = " << x2 << endl;
		}
		if (D < 0)
		{

			cout << "No roots, because discriminant < 0" << endl;
		}
		if (D == 0)
		{
			x = -b / 2 * a;

			cout << "Multiple root = " << x << endl;
		}
		system("pause");
		goto met1;
	case 6:
		return 0;
	}
}
