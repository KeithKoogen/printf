#include "main.h"

/**
 * print_numbers - prints numbers
 * @n: amount of numbers
 * @count: a pointer to an int that keeps count
 * Return: nothing
 */

void print_numbers(int n, unsigned int *count)
{
	if (n < 10)
	{
		printc(n + 48, count);
		return;
	}
	print_numbers(n / 10, count);
	printc((n % 10) + 48, count);
}
