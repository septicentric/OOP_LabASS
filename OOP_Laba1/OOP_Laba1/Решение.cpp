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

int main()
{
	setlocale(LC_CTYPE, "RUS");
	using namespace std;
	//Task2
	/*float a, b;
	cin >> a >> b;
	cout << a << " " << b;
	cout << fixed << setprecision(4) << '\n' << "результат f(a,b) равен " << func_resh(a, b);*/

	//Task3

	/*double x;
	cin >> x;
	cout << func_resh2(x);

	Task 3.1
	 
	int n, j;
	cin >> n;
	cout << "¬веденное значение > " << n << endl;
	j = 1;
	while (j < n)
	{
		if ((n % j == 0) && (j != n))
		{
			cout << j << " ";
		}
			j++;
	}
	 
	T3.2
	 
	float a, min, max, res;
	int i = 2;
	cin >> a;
	cout << "1 = " << a << endl;
	min = a;
	max = a;
	while (i<=10)
	{
		cin >> a;
		cout << i << " = " << a << endl;
		if (a < min) min = a;
		if (a > max) max = a; 
		i++;
	}
	res = max - min;
	cout << res << "\n";
	
	T3.3
	
	int n, y = 1;
	cin >> n;
	if (n % 2 != 0)
	{
		for (int i = 1; i < n / 2 + 1 ; i ++)
			y *= (2*i+1);
	}
	else
	{
		for (int i = 1; i <= n / 2 ; i ++)
		{
			y *= 2*i;
		}
	}
	cout << y << endl;

	T3.4
	int k, m, n, x;
	float rez = 0;
	cin >> n;
	cin >> x;
	for (int k = 1; k < n; k++)
	{
		for (int m = k; m < n; m++) 
		{
			rez += (x + k)/m;
		}
	}
	cout << rez << endl;

	T3.5

	int I, n;
	float rez = 0;
	cin >> n;
	cin >> I;
	for (int i = 1; i < n; i++)
	{
		for (int j = 1; j < I; j++)
		{
			rez += 1. / (i + 2 * j);
		}
	}
	cout << rez << endl;
	*/
}