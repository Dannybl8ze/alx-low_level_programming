#include "main.h"

/**
 * _memset - fill a block of memory with a specific value
 * @s: the starting address of memory to be filled
 * @b: is  the desired value
 * @n: is the number of bytes to be changed
 *
 * Return: changed array with new value for n bytes
 */

char *_memset(char *s, char b, unsigned int n)
{
	int j = 0;

	for (; n > 0; j++)
	{
		s[j] = b;
		n--;
	}
	return (s);
}
