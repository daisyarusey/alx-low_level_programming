#include "main.h"
/**
 * _strcmp - compare string values
 * @s1: string input.
 * @s2: string input.
 * Return: the difference
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}
