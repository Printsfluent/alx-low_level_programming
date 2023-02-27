#include "main.h"

/**
 * swap_int -  function that swaps the values of two integers.
 * @a: pointer a
 * @b: pointer b
 *
 */

void swap_int(int *a, int *b)


{
	int c;

		c = *a;
		*a = *b;
		*b = c;
}
