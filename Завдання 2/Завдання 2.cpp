#include <iostream> //бібліотека для роботи операторів введення / виведення
#include <math.h> //бібліотека для використання математичних функцій
using namespace std;

int main()
{
	setlocale(LC_CTYPE, "ukr"); //дозволити використання української мови
	const int n = 3, m = 3;
	const int x = n * m;
	int i, k, a[n][m], b[x], j, y = 0, c = 0;

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
			for (j = 2; j < a[i][k]; j++)
			{
				if (a[i][k] % j == 0)
				{
					y++;
				}
			}

			if (y == 0)
			{
				b[c] = a[i][k];
				c++;
			}
			y = 0;
		}
	}

	for (c = 0; c < x; c++)
	{
		cout << b[c] << " ";
	}

}