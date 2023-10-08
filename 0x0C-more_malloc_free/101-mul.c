#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _puts - prints a string, followed by a newline,
 * @str - pointer to the string to print
 * Return - void
 */

void _puts(char *str)
{
	int i = 0;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
}

/**
 * _atoi - convert a string to an intager.
 * @s - char type string
 * Return - intager conveted
 */
int _atoi(const char *s)
{
	int sign = 1;
	unsigned long int resp = 0, i = 0;

	if (s[i] == '-')
	{
		sign = -1;
		i++;
	}
	for (; s[i] != '\0'; i++)
	{
		resp = resp*10 + s[i] - '0';
	}
	return (resp * sign);
}
/**
 * print_int - prints an intager.
 * @n : int
 * Return - 0
 */
void print_int(unsigned long int n)
{
	unsigned long int divisor = 1, i, resp;

	for (i = 0; n/divisor > 9; i++, divisor *= 10)
		;
	for (; divisor >= 1; n%=divisor, divisor /=10)
	{
		resp = n / divisor;
		_putchar('0' + resp);
	}
}
/**
 * Main - print the result of the multiplication, followed by a newline
 * @arc - int
 * @argv - list
 * Return - 0
 */
int main(int argc, char const *argv[])
{
	(void)argc;

	if (argc != 3)
	{
		_puts("Error ");
		exit(98);
	}
	print_int(_atoi(argv[1]) * _atoi(argv[2]));
	_putchar('\n');

	return (0);
}
