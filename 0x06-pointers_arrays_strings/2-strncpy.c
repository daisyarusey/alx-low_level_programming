#include "main.h"
/**
 * _strncpy - copies a string.
 * @dest: string input
 * @src: string input
 * @n: integer input
 * Return: returns dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
