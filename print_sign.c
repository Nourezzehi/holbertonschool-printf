/**
 * print_sign - print the number
 * depending on its sign
 * @num: the given number to print
 *
*/

#include "main.h"

int print_sign(int num)
{
	char *array;
	unsigned int i = 0;

	array = (char *) malloc(sizeof(char) * 100);
	while (num / 10)
	{
		*(array + i) = '0' + ((num % 10));
		i++; 
		num /= 10;
	}
	if (num % 10)
	{
		*(array + i) = '0' + ((num % 10));
	}
	while (i)
	{
		_putchar(*(array + i));
		_putchar(*(array + i - 1));
		i--;
	}
	return(strlen(array));
}
