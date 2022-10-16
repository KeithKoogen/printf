#include "main.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers_bin - prints numbers
 * @n: amount of numbers
 * @count: a pointer to an int that keeps count
 * Return: nothing
 */

void print_numbers_bin(unsigned long int n, unsigned int *count)
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
 * print_binary - prints binary
 * @ptr: pointer
 * @count: a pointer to an int that keeps count
 */
 
void print_binary(va_list *ptr, unsigned int *count)
{
	unsigned int n, rem;
	unsigned long int binary_number, i;

	i = 1;
	binary_number = 0;
	n = va_arg(*ptr, int);

	while (n != 0)
	{
		rem = n % 2;
		n = n / 2;
		binary_number = binary_number + (rem * i);
		i = i * 10;
	}
	printf("%d\n",binary_number);

	print_numbers_bin(binary_number, count);
	
}
