#include "main.h"
#include <ctype.h>

/**
 * _isdigit - checks if an input is a digit
 *@c: input to be recieved
 *Return: 1 (success), 0 (failure)
 */

int _isdigit(int c)
{
	if (isdigit(c))
		return (1);
	else
		return (0);
}
