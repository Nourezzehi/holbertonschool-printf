#include "main.h"

/**
 * print_binary - print a binary 
*/
int print_binary(va_list args)
{
    unsigned int num = va_arg(args, unsigned int);
	char *str = convert(num, 2, 0);
    
	return (_puts(str));
}