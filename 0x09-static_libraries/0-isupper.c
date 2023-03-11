#include "main.h"
/**
 * _isupper - Checks if character is Uppercase or lowercase
 *@c: character to be checked...
 *Return: 1 Success, 0 Failure
 */

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	else
		return (0);
}
