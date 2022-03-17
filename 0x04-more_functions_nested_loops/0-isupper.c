#include "main.h"
#include <stdio.h>

/**
 * _isupper - checks for uppercase character
 * @c: Variable text
 * Return: 1 for uppercase . ) for rest
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
