#include <stdio.h>
/**
 * main - main block
 * Return: 0
 */
int main(void)
{
	char char;
	int int;
	long int long int;
        long long int long long int;
	float float;
 printf("The Size of char : %i Byte(s)\n", sizeof(char));
 printf("The Size of int : %i Byte(s)\n", sizeof(int));
 printf("The Size of long int : %i Byte(s)\n", sizeof(long int));
 printf("The size of long long int : %i Byet(s)\n",sizeof(long long int));
 printf("The size of Float : %i Byte(s)\n",sizeof(float));
 return (0);
} 
