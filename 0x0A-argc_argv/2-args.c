#include <stdio.h>
#include "main.h"

/**
 *main - print all argument it recieves
 *@argc: number of argument
 *@argv: array of argument
 *Return: Always 0 (SUCCESS)
 */

int main(int argc, char *argv[])
{

int count = 0;

if (count > 0)
{
while (count < argc)

{
printf("%s\n", argv[count]);
count++;
}
}

return (0);
}
