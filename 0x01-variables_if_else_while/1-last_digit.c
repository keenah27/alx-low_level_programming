#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/*
 * main = Main Entry Point
 * Return : every time 0 (Success)
 */
int main(void);
{
	int n, t;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	t = n % 10;
printf("Last digit is %d is %d and is ", n, t);
if (t > 5)
printf("greater than 5\n");
else if (t == 0)
printf("0\n");
else
printf("and is less than 6 and not 0\n");
return (0);
}
