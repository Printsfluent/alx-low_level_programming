#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies the arguments received on the command line
 * @argc: total number of arguments
 * @argv: array of arguments
 * Return: 1 error, 0 success
 */
int main(int argc, char *argv[])
{
	if ((argc - 1) != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		int result;
		int num1 = atoi(argv[1]); 
		int num2 = atoi(argv[2]);
		result =num1  * num2;;
		printf("%d\n", result);
	}
	return (0);
}
