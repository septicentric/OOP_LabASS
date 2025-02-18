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
		cout << "\n�������� ����� �������:\n" << "1. ����� �������� ���������\n" << "2. ��������� �������\n" << "3. ��������� ����������� ���������\n" << "4. �������� ����� �� �������������� ���������\n" << "5. ��������� ���������" << endl;
		cin >> menu;

		switch (menu) {

		case 1: {
			float a, b;
			cout << "\n������� ����� a � b ����� ������:" << endl;
			cin >> a >> b;
			cout << fixed << setprecision(4) << "��������� f(a,b) ����� " << func_resh(a, b) << endl;
			break;
		}
		case 2: {
			double x;
			cout << "\n������� �������� x: \n";
			cin >> x;
			cout << "��������� F(x) ����� " << func_resh2(x) << endl;
			break;
		}

		case 3: {
			int p_menu;
			do {
				cout << "\n�������� �������� ������� 3 ��� ���������� ������: \n" << "1. ���������� ��� ����������� �������� ����� n\n" << "2. ��������� �������� ����� ����������� � ������������ �� 100 ����������� �����\n" << "3. ��������� �������� �, ������ (n!!)\n" << "4. ��������� ����� ��������� ���� (x+k)/m\n" << "5. ��������� ����� ��������� ���� 1/(i+2j)\n" << "6. ��������� ����� ��������� ���� sin(kn)/k!\n" << "7. �������� ����� ����� ������� ����, ���������� ���������� ���������\n" << "8. ����� �� ������������" << endl;
			cin >> p_menu;
				switch (p_menu) {
				case 1:
				{
					//T3.1
					int n, j;
					cout << "\n������� ����������� ����� n" << endl;
					cin >> n;
					cout << "����������� ��������" << n << ": ";
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
					//T3.2 ���� ������ ��� ������ �����

					float a, min, max, res;
					int i = 2;
					cout << "\n������� �����, �������� �� Enter: " << endl;
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
					cout << "�������� ����� ����������� (min = " << min << ") � ������������ (max = " << max << ") ������ ����� " << res << endl;
					break;
				}

				case 3:
				{
					//T3.3
					int n, y = 1;
					cout << "\n������� ����������� ����� n: ";
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
					cout << "������� ��������� ����� n ����� " << y << endl;
					break;
				}

				case 4:
				{
					//T3.4
					int k, m, n, x;
					float rez = 0;
					cout << "\n������� ����� n: ";
					cin >> n;
					cout << "������� ����� x: ";
					cin >> x;
					for (int k = 1; k < n; k++)
					{
						for (int m = k; m < n; m++)
						{
							rez += (x + k) / m;
						}
					}
					cout << "��������� ����� " << rez << endl;
					break;
				}

				case 5:
				{
					//T3.5
					int n;
					float rez = 0;
					cout << "\n������� ����� n: ";
					cin >> n;
					for (int i = 1; i < n; i++)
					{
						for (int j = 1; j < i; j++)
						{
							rez += 1. / (i + 2 * j);
						}
					}
					cout << "��������� ����� " << rez << endl;
					break;
				}
				case 6: {
					//����� ��� �������
					break;
				}

				case 7:
				{
					//T3.7
					int I, n, k, l = 0;
					long int S;
					cout << "\n������� ����� n: ";
					cin >> n;
					for (int i = 1; i < n; i++)
					{
						S = pow(i, 3) - 3 * i * n * n + n;
						if (S % 3 == 0 && S % 2 == 1)
							l += S;
					}
					cout << "��������� ����� " << l << endl;
					break;
				}

				case 8: {
					break;
				}
				default: {
					cout << "������ �����!\n" << "������� ���������� �����!" << endl;
				}

				}
			} while (p_menu!=8);
		}
		case 4: {
			// ����� ��� ������� �����
			break;
		}
		case 5: {
			cout << "\n������� ����� ������� ��� ������";
			break;
		}
		default: {
			cout << "������ �����!\n" << "������� ���������� �����!" << endl;
		}

		}

	}  while (menu != 5);
}