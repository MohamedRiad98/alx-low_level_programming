#include <stdio.h>

void print_times_table(int n)
{
    int i, j, product;
    
    if (n > 15 || n < 0)
    {
    	for (i = 0; i <= n; i++)
    	{
        	for (j = 0; j <= n; j++)
		{
            		product = i * j;
            		printf("%-4d", product);
        	}
        printf("\n");
    	}
    }
    else
	    return (0);
}
