
#include <iostream>
#include <cstdint>
using namespace std;

int main()
{
	setlocale(0, "");
	int a, b, c, k, x, x1, x2, D;
	met1: cout << "�������� �������� : " << endl;
	cout << "1) �������� " << endl;
	cout << "2) ��������� " << endl;
	cout << "3) ��������� " << endl;
	cout << "4) ������� " << endl;
	cout << "5) ���������� ������������� � ��� ������ " << endl;
	cout << "6) ����� �� ��������� " << endl;
	cout << "" << endl;
	cout << "" << endl;
	cout << "����������� ������ Elmo59ru" << endl;
	cin >> k;

	switch (k)
	{
	case 1:
		cout << "������ ����� : ";
		cin >> a;
		cout << "������ ����� : ";
		cin >> b;
		c = a + b;
		cout << "����� : " << c << endl;
		system("pause");
		goto met1;
		
	case 2 :
		cout << "������ ����� : ";
		cin >> a;
		cout << "������ ����� : ";
		cin >> b;
		c = a - b;
		cout << "����� : " << c << endl;
		system("pause");
		goto met1;
	case 3:
		cout << "������ ����� : ";
		cin >> a;
		cout << "������ ����� :";
		cin >> b;
		c = a * b;
		cout << "����� : " << c << endl;
		system("pause");
		goto met1;
	case 4:
		cout << "������ ����� : ";
		cin >> a;
		cout << "������ ����� : ";
		cin >> b;
		c = a / b;
		cout << "����� : " << c << endl;
		system("pause");
		goto met1;
	case 5:
		cout << "������� ����� � = ";
		cin >> a;
		cout << "������� ����� b = ";
		cin >> b;
		cout << "������� ����� � = ";
		cin >> c;
		D = (b * b) - (4 * a * c);
		if (D > 0)
		{


			x1 = (-b - sqrt(D)) / 2 * a;
			x2 = (-b + sqrt(D)) / 2 * a;

			D = sqrt(D);

			cout << "������������ = " << D << endl;
			cout << "x1 = " << x1 << endl;
			cout << "x2 = " << x2 << endl;
		}
		if (D < 0)
		{

			cout << "������ ���, �.� ������������ < 0" << endl;
		}
		if (D == 0)
		{
			x = -b / 2 * a;

			cout << "������� ������ = " << x << endl;
		}
		system("pause");
		goto met1;
	case 6:
		return 0;
	}
}