#include "main.h"
/**
 * string_toupper - changes all lowercase to uppercase.
 * @p: string to be modofied.
 * Return: modified string.
 */
char *string_toupper(char *)
{
	int a = 0;

	while (p[a])
	{
		if (p[a] >= 97 && p[a] <= 122)
		{
			p[a] -= 32;
		}
		a++;
	}
	return (p);
}
