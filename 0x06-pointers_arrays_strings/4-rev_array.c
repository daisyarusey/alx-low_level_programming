#include "main.h"
/**
 * reverse_array - reverses an array
 * @a: input array
 * @n: length of array.
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i = 0, temp;

	while (i < n--)
	{
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;

		i++;
		n++;
	}
}
