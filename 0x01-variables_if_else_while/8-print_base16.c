#include <stdio.h>

/**
 * main - Hexadecimal.
 *
 * Return: Always 0.
 */
int main(void)
{
	int num;
	char alpha;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
	}
	for(alpha = 'a'; alpha <= 'f'; alpha++)
	{
		putchar(alpha);
	}
	putchar('\n');
	return (0);
}
