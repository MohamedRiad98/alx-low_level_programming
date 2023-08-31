// c program to demonstrate
// example of strlen() function.
#include <stdio.h>
#include <string.h>
 
int main()
{
    // defining string
    char str[] = "One Day i will be a great programmer";
 
    // getting length of str using strlen()
    int length = strlen(str);
    printf("Length of string [%s] : %d",str , length);
 
    return 0;
}
