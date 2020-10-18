// Lab_03_3.cpp
// Горбачов Богдан
// Лабораторна робота № 3.3
// Розгалуження, задане графіком функції.
// Варіант 3

#include <iostream>
#include <cmath>


using namespace std;

int main()
{
	double x; // вхідний аргумент
	double R; // вхідний параметр
	double y; // результат обчислення виразу

	cout << "R = "; cin >> R;
	cout << "x = "; cin >> x;

	// розгалуження в повній формі

	if (x <= -7 - R)
		y = R;
	else
		if (-7 - R < x && x <= -7 + R)
			y = R - sqrt(pow(R, 2) - pow(x, 2) - 14 * x - 49);
		else
			if (-7 + R < x && x <= -4)
				y = R;
			else
				if (-4 < x && x <= 0)
					y = -(R * x) / 4;
				else
					if (0 < x && x <= acos(-1))
						y = sin(x);
					else
						y = x - acos(-1);
	cout << endl;
	cout << "y = " << y << endl;

	system("pause");
}
