#include "main.h"

/**
 * print_numbers_unsigned_int - prints numbers
 * @n: amount of numbers
 * @count: a pointer to an int that keeps count
 * Return: nothing
 */

void print_numbers_unsigned_int(unsigned int n, unsigned int *count)
{
	if (n < 10)
	{
		printc(n + 48, count);
		return;
	}
	print_numbers(n / 10, count);
	printc((n % 10) + 48, count);
}

/**
 * print_unsigned_int - prints unsigned integer
 * @count:  a pointer to an int that keeps count
 * @ptr: pointer
 */

void print_unsigned_int(va_list *ptr, unsigned int *count)
{
	unsigned int i;

	i = va_arg(*ptr, unsigned int);

	print_numbers_unsigned_int(i, count);
}
