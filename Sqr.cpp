#include <iostream>
#include <math.h>

using namespace std;

double Disk(double a, double b, double c)
{
	return b * b - 4 * a * c;
}

int main()
{
	setlocale(LC_ALL, "Rus");
	double a, b, c, D;
	cout << "Введите коээфициент а: ";
	cin >> a;
	cout << "Введите коээфициент b: ";
	cin >> b;
	cout << "Введите коээфициент c: ";
	cin >> c;
	D = Disk(a, b, c);
	if (D < 0) {
		cout << "Дискриминант отрицательный";
		return -1;
	}
	else if (D == 0)
	{
		cout << "Уравнение имеет один корень x= " << -b / (2 * a);

	}
	else 
	{
		cout << " Уравнение имеет два корня x1= " << (-b + sqrt(D)) / (2 * a);
		cout << " x2= " << (-b - sqrt(D)) / (2 * a);
	}
	return 0;
}