/*
 * File: 102-print_comb5.c
 * Auth: Mohamed Riad
 */
#include <stdio.h>

/*
*
*
* Main - Printing all combination of three numbers with space and coma between.
*
* Return 0 - Always success
*/

int main() {
    int i,j,k;
    
    for(i=0; i <= 98; i++)
    {
        for (j = 0; j <=99; j++)
        {
            putchar((i / 10) + '0');
            putchar((i % 10) + '0');
            putchar(' ');
            putchar((j / 10) + '0');
            putchar((j % 10) + '0');
            
            if (i == 98 && j == 99)
			continue;
			
			putchar(',');
			putchar(' ');
        }
}
    return 0;
}