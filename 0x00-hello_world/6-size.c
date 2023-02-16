#include <stdio.h>
/**
 *main - Entry point
 *Return: Always 0 (SUCCESS)
 */

int main(void)
{
	printf("Size of an int: %zu byte(s)\n", sizeof(int));
	printf("Size of a char: %zu byte(s)\n", sizeof(char));
	printf("Size of a float: %zu bytes(s)\n", sizeof(float));
	printf("Size of a long int: %zu bytes(s)\n", sizeof(long int));
		return (0);
}
