#include "main.h"

/**
 *_memcpy - Function that copy memory area
 *@dest: First Memory area
 *@src: Second Memory Area
 *@n: number of bytes
 *Return: copied memory with n byte
 */

char *_memcpy(char *dest, char *src, unsigned int n)

{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
	dest[i] = src[1];
	}
	return (dest);
}
