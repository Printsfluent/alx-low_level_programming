#include "main.h"

/**
 *_strchr - Function that locates a character in a string
 *@s: input
 *@c: Second Input
 *Return: Always )
 */

char *_strchr(char *s, char c)
{

	int i;

	for (;; s++)
	{
	if (*s == c)
		return (s);
	if (!*s)
		return ('\0');
	}

	return ('\0');

	}
