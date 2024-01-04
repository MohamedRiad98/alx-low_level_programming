#include "main.h"

/**
 * print_times_table - Prints the multiplication table of a given size.
 * @n: The size of the multiplication table (0 <= n <= 15).
 */
void print_times_table(int n)
{
	if (n >= 0 && n <= 15)
	{
		int i, j, product;

		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				product = i * j;

				if (j == 0)
					_putchar('0');
				else if (product <= 9)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(product + '0');
				}
				else if (product <= 99)
				{
					_putchar(' ');
					_putchar((product / 10) + '0');
					_putchar((product % 10) + '0');
				}
				else
				{
					_putchar((product / 100) + '0');
					_putchar(((product / 10) % 10) + '0');
					_putchar((product % 10) + '0');
				}

				if (j != n)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
