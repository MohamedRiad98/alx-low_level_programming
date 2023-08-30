#include <stdio.h>
/*
 *
 * Main - A program to take a number from a user and check for the square root of this number
 *
 * Return 0 success
 *
 * Checker - Return n * n ( n + 1)
 */
int square(int a);
int checker(int n, int b);

int main()
{
	int input, res;
	printf("\nPlease enter a number to get the square root of it : ");
	scanf("%d", &input);
	printf("square root of %d is %d\n", input, square(input));
	return 0;
}
int square(int a)
{
        return (checker(a, 1));
}

int checker(int n, int b)
{
        if (b * b == n)
        {
                return(b);
        }
		else if (b * b > n)
		return (-1);
        else
        {
        return (checker(n, b + 1));
        }
}
