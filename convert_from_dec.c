/**
 * convert - convert a given number in a given
 * base to decimal
 *
 * @num: numbert to convert
 *
 * @base: the given base
 *
 * @lower_case: true or false
 * Return: the converted string in
 * the required base
*/
#include "main.h"

char *convert(unsigned long int num, int base, int lower_case)
{
	char *rep;
	char buffer[50];
	char *ptr;

	if (lower_case)
		rep = "0123456789abcdef";
	else
		rep = "0123456789ABCDEF";
	ptr = &buffer[49];
	*ptr = '\0';
	do {
		*--ptr = rep[num % base];
		num /= base;
	} while (num != 0);
	return (ptr);
}
