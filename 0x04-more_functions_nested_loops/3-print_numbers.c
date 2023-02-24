#include "main.h"
#include <stdio.h>

/**
 *print_numbers - Function print numbers from 0 to 9
 *
 *Return: empty
 */

void print_numbers(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		putchar(a);
	}
	putchar('\n');

}
