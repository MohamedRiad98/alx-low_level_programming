#include <stdio.h>
/**
 * checker - checks the input number from n to the base
 * @n: number is squared and compared against base
 * @a: base number to check
 * Return: natural square root of number base
 */
int checker(int n, int a)
{
	if (n * n == a)
		return (n);
	if (n * n > a)
		return (-1);
	return (checker(n + 1, a));
}
/**
 * _sqrt_recursion - return the natural square root of a number n.
 * @n: number to check for square roots.
 * Return: the natural square root of number n
 */
int _sqrt_recursion(int n)
{
	return (checker(1, n));
}
