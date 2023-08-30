#include <stdio.h>

int square(int a);
int checker(int n, int b);

int main()
{
    int input, res;
    printf("\nPlease enter a number to get the square root of it : ");
    scanf("%d", &input);
    res = square(input);
    if (res == -1)
    {
        printf("Square root of %d does not exist\n", input);
    }
    else
    {
        printf("Square root of %d is %d\n", input, res);
    }
    return 0;
}

int square(int a)
{
    return checker(a, 1);
}

int checker(int n, int b)
{
    if (b * b == n)
    {
        return b;
    }
    else if (b * b > n)
    {
        return -1;
    }
    else
    {
        return checker(n, b + 1);
    }
}
