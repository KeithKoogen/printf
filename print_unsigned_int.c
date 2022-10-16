#include "main.h"

/**
 * print_unsigned_int - prints unsigned integer
 * @count:  a pointer to an int that keeps count
 * @format: pointer
 */

void print_unsigned_int(va_list *ptr, unsigned int *count)
{
	unsigned int i;

	i = va_arg(*ptr, unsigned int);
	
	printc(i, count);
}
