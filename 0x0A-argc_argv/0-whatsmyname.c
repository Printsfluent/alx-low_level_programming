#include <stdio.h>
#include "main.h"

/**
 *main - Entry Point
 *@argc: argument counter
 *@argv: argument vector
 *Return: (0) SUCCESS
 */

int main(int argc, char *argv[])
{
(void) *argv; /*ignore *argv*/
printf("%s\n", *argv);

return (0);
}
