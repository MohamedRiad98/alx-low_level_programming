#include <stdio.h>

/**
 * main - Prints numbers from 0 : 9 with , and space after each number.
 *
 * Return: Always 0.
 */
int main(void)
{
	int num = '0';

	while (num <='9')
	{
		putchar(num);
		if (num != '9')
		{
			putchar(',');
			putchar(' ');
		}
		num++;
	}
	putchar('\n');
	return (0);
}
