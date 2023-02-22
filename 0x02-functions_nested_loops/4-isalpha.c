#include <ctype.h>
#include "main.h"
/**
 *_isalpha - Entry
 *@c: collect input from stdin
 *Return: (0) SUCESS, (1) FAILURE
 */

int _isalpha(int c)
{
if (isalpha(c))
return (1);
else
	return (0);
}
