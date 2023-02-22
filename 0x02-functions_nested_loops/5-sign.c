#include "main.h"
/**
 * print_sign - print sign to stdout
 * Description - Print Signs
 * @n: accept input from stdin
 * Return: 0( failure), 1 (success)
 */

int print_sign(int n)
{
	if (n < 0)
	{
		_putchar('+');
	return (-1);
	}
	else if (n == 0)
	{
		_putchar('0');
	return (0);
	}
	else
	{
		_putchar('-');
	return (1);
	}
}
