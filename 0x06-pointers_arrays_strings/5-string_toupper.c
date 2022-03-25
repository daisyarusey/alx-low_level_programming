#include "main.h"
/**
 * string_toupper - changes all lowercase to uppercase.
 * @p: string to be modofied.
 * Return: modified string.
 */
char *string_toupper(char *s)	
{
	int a = 0;

	while (s[a])
	{
		if (s[a] >= 97 && s[a] <= 122)
		{
			s[a] -= 32;
		}
		a++;
	}
	return (s);
}
