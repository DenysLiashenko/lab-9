#include <iostream> //бібліотека для роботи операторів введення / виведення
#include <math.h> //бібліотека для використання математичних функцій
using namespace std;

int main()
{
	setlocale(LC_CTYPE, "ukr"); //дозволити використання української мови
	const int n = 3, m = 3;
	int i, k, a[n][m], min=0, max=0, rmax = 0, rmin = 0,x;

	for (i = 0; i < n; i++)
	{
		for (k = 0; k < m; k++)
		{
			cin >> a[i][k];
		}
	}

	for (i = 0; i < n; i++)
	{
		for (k = 0; k < m; k++)
		{
			if (max < a[i][k])
			{
				rmax = i;
			}
		}
	}

	for (i = 0; i < n; i++)
	{
		for (k = 0; k < m; k++)
		{
			if (min > a[i][k])
			{
				rmin = i;
			}
		}
	}

	for (k = 0; k < n; k++)
	{
		x = a[rmax][k];
		a[rmax][k] = a[rmin][k];
		a[rmin][k] = x;
	}

	cout << endl;

	for (i = 0; i < n; i++)
	{
		for (k = 0; k < m; k++)
		{
			cout << a[i][k] << " ";
		}
		cout << endl;
	}
}