#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <string.h>
#include <iostream>
#include <conio.h>
#include <iomanip>
#define E 0.001

//Task 1
float func_resh(float b, float a)
{
	float y = pow(cos(a+b*b),3)*sqrt((exp(a*a-13.4*b))/pow(a+b,3));
	return y;
}

//Task 2
double func_resh2(double x)
{
	int n = 1;
	double y = 0, last;
	double c = x * x/(2 * n) / (2 * n - 1);
	do
	{
		last = y;
		y += c;
		c *= -1 * ((x * x) / (2 * n)) / (2 * n - 1);
		n++;
		std::cout << n << ") c = " << c << ", y = " << y << ", abs =" << abs(y-last) << ".\n";
	} while (abs(y-last) >= E);

	return y;
}

void main()
{
	setlocale(LC_CTYPE, "RUS");
	using namespace std;
	int menu;
		do {
		cout << "\nВыберите номер задания:\n" << "1. Найти значение выражения\n" << "2. Вычислить функцию\n" << "3. Проверить исправленые программы\n" << "4. Проверка числа на принадлежность диапазона\n" << "5. Завершить программу" << endl;
		cin >> menu;

		switch (menu) {

		case 1: {
			float a, b;
			cout << "\nВведите числа a и b через пробел:" << endl;
			cin >> a >> b;
			cout << fixed << setprecision(4) << "Результат f(a,b) равен " << func_resh(a, b) << endl;
			break;
		}
		case 2: {
			double x;
			cout << "\nВведите значение x: \n";
			cin >> x;
			cout << "Результат F(x) равен " << func_resh2(x) << endl;
			break;
		}

		case 3: {
			int p_menu;
			do {
				cout << "\nВыберите подпункт задания 3 для дальнейшей работы: \n" << "1. Определить все натуральные делители числа n\n" << "2. Вычислить разность между минимальным и максимальным из 100 натуральных чисел\n" << "3. Вычислить величину у, равную (n!!)\n" << "4. Вычислить сумму элементов вида (x+k)/m\n" << "5. Вычислить сумму элементов вида 1/(i+2j)\n" << "6. Вычислить сумму элементов вида sin(kn)/k!\n" << "7. Получить сумму чисел особого вида, являющихся утроенными нечётными\n" << "8. Выйти из подпрограммы" << endl;
			cin >> p_menu;
				switch (p_menu) {
				case 1:
				{
					//T3.1
					int n, j;
					cout << "\nВведите натуральное число n" << endl;
					cin >> n;
					cout << "Натуральные делители" << n << ": ";
					j = 1;
					while (j <= n)
					{
						if ((n % j == 0) /* && (j != n)*/)
						{
							cout << j << " ";
						}
						j++;
					}
					break;
				}

				case 2:
				{
					//T3.2 ВВОД ТОЛЬКО ДЛЯ ДЕСЯТИ ЧИСЕЛ

					float a, min, max, res;
					int i = 2;
					cout << "\nВведите числа, разделяя их Enter: " << endl;
					cout << "1) ";
					cin >> a;
					min = a;
					max = a;
					while (i <= 10)
					{
						cout << i << ") ";
						cin >> a;
						if (a < min) min = a;
						if (a > max) max = a;
						i++;
					}
					res = max - min;
					cout << "Разность между минимальным (min = " << min << ") и максимальным (max = " << max << ") числом равна " << res << endl;
					break;
				}

				case 3:
				{
					//T3.3
					int n, y = 1;
					cout << "\nВведите натуральное число n: ";
					cin >> n;
					if (n % 2 != 0)
					{
						for (int i = 1; i < n / 2 + 1; i++)
							y *= (2 * i + 1);
					}
					else
					{
						for (int i = 1; i <= n / 2; i++)
						{
							y *= 2 * i;
						}
					}
					cout << "Двойной факториал числа n равен " << y << endl;
					break;
				}

				case 4:
				{
					//T3.4
					int k, m, n, x;
					float rez = 0;
					cout << "\nВведите число n: ";
					cin >> n;
					cout << "Введите число x: ";
					cin >> x;
					for (int k = 1; k < n; k++)
					{
						for (int m = k; m < n; m++)
						{
							rez += (x + k) / m;
						}
					}
					cout << "Результат равен " << rez << endl;
					break;
				}

				case 5:
				{
					//T3.5
					int n;
					float rez = 0;
					cout << "\nВведите число n: ";
					cin >> n;
					for (int i = 1; i < n; i++)
					{
						for (int j = 1; j < i; j++)
						{
							rez += 1. / (i + 2 * j);
						}
					}
					cout << "Результат равен " << rez << endl;
					break;
				}
				case 6: {
					//МЕСТО ДЛЯ РЕШЕНИЯ
					break;
				}

				case 7:
				{
					//T3.7
					int I, n, k, l = 0;
					long int S;
					cout << "\nВведите число n: ";
					cin >> n;
					for (int i = 1; i < n; i++)
					{
						S = pow(i, 3) - 3 * i * n * n + n;
						if (S % 3 == 0 && S % 2 == 1)
							l += S;
					}
					cout << "Результат равен " << l << endl;
					break;
				}

				case 8: {
					break;
				}
				default: {
					cout << "Ошибка ввода!\n" << "Введите корректное число!" << endl;
				}

				}
			} while (p_menu!=8);
		}
		case 4: {
			// МЕСТО ДЛЯ РЕШЕНИЯ ОПЯТЬ
			break;
		}
		case 5: {
			cout << "\nНажмите любую клавишу для выхода";
			break;
		}
		default: {
			cout << "Ошибка ввода!\n" << "Введите корректное число!" << endl;
		}

		}

	}  while (menu != 5);
}
