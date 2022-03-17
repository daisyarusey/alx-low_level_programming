#include <stdio.h>
/**
 * main - print alphabet in lower and uppercase
 *
 * Return: Aways 0 (success)
 */
int main(void)
{
	int c;

	for(c = 'a' ; c <= 'z'; c++)
		putchar(c);

	for(c = 'A' ; c <= 'Z' ; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
