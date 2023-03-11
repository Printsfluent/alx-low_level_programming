#include <string.h>
#include "main.h"
#include <stdio.h>
/**
 *_strlen - Function that prints the length of a string
 *@s : pointer
 *Return: the value of s
 */

int _strlen(char *s)

{
	int i = 0;

	for (; *s != '\0'; s++)
{
		i++;
}
	return (i);
}
