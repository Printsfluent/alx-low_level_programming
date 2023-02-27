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
	char *str;
	int len;

	str = "My first strlen!";
	len = _strlen(str);
	printf("%d\n", len);
	return (*s);
}
