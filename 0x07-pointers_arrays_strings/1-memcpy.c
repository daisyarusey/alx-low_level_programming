#include "main.h"
/**
 * _memcpy - copies memory area
 * @dest: destination memory area
 * @src: source memory area
 * Return: memory area
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int a = 0;

	while (n > 0)
	{
		dest[a] = src[a];
		n--;
	}
	return (dest);
}
