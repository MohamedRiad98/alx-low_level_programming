#include <stdlib.h>
#include <time.h>
#include <stidin.h>

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0){
		printf("%d is a postive number", n);	
	}
	else if (n < 0){
		printf("%d is a negative number", n);
	}
	else {
		printf("%d is zero");
	}
	return (0);
}
