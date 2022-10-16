#include "main.h"
#include <stdarg.h>

/**
 * print_binary - prints binary
 * @ptr: pointer
 * @count: a pointer to an int that keeps count
 */
 
void print_binary(va_list *ptr, unsigned int *count)
{
	unsigned int n, i, rem, binary_number;

	binary_number = 0;
	i = 1;
	rem = 1;

	n = va_arg(*ptr, int);

	while (n != 0)
	{
		rem = n % 2;
		n = n / 2;
		binary_number = binary_number + (rem * i);
		i = i * 10;
	}

	print_numbers(binary_number, count);
}
