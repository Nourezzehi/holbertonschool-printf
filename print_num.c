/**
 * print_num - print the number
 * depending on its sign
 * @n: the given number to print
 * Return: count
*/

#include "main.h"

int print_num(int n)
{
	int i, k = 0, j = 1, count = 0, f = n;

	while (f /= 10)
		k++;
	for (i = 0; i < k; i++)
		j *= 10;
	for (i = 0; i < k + 1; i++)
	{
		_putchar((n / j) + '0');
		count++;
		n %= j;
		j /= 10;
	}
	return (count);
}
