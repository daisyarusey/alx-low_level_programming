#include "main.h"
/**
 * _strncat - concats two strings using at most n bytes from src
 * @dest: string input
 * @src: string input
 * @n: int input
 * Return: concatinated string (dest).
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
		i++;
	while (j < n && src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
