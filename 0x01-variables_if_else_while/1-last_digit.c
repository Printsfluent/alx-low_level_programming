#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - main block
 *Description: Get a random number and check its last digit and compare with 5
 *Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last = n % 10;
	if (last > 5)
	{
		printf("Last digit of %i is %i and is greatrwe than 5\n", n, last);
	}
	else if (last == 0)
	{
		printf("Last digit of %i is %i and is 0\n", n, last);
	}
	else if (last < 6)
	{
		printf(" Last digit of %i is %i and is less than 6 and not 0\n", n, last);
	}
	return (0);
}
