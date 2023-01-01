#include "main.h"

/**
 * print_times_table - prints the n times table
 *
 * @n: int value to be compared
 *
 */

void print_times_table(int n)
{
	if (n <= 15 && n >= 0)
	{
		int i;
		int j;

		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				int res = i * j;

				if (j == 0)
				{
					_putchar('0');
				}
				else if (res <= 9)
				{
					_putchar('0' + res);
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
				}
				else if (res > 99)
				{
					_putchar('0' + (res / 100));
					_putchar('0' + ((res / 10) % 10));
					_putchar('0' + (res % 10));
					_putchar(',');
					_putchar(' ');
				}
				else
				{
					_putchar('0' + (res / 10));
					_putchar('0' + (res % 10));
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
