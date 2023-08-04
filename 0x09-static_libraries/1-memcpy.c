#include "main.h"

/**
 * _memcpy - a function that copies memory area
 *
 * @dest: the memory where it is stored
 * @src: the memory where it is copied
 * *@n: the number of bytes
 *
 * Return: copied memory with n bytes changed
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int m = 0;
	int j = n;

	for (; m < j; m++)
	{
		dest[m] = src[m];
		n--;
	}
	return (dest);
}
