#include "main.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>



/**
 * print_char - prints a char
 * @ptr: pointer
 * @count: a pointer to an int that keeps count
 * Return: nothing
 */

void print_char(va_list *ptr, unsigned int *count)
{
	int i;

	i = va_arg(*ptr, int);

	printc(i, count);
}

/**
 * print_integer - prints an integer
 * @ptr: pointer
 * @count: a pointer to an int that keeps count
 * Return: nothing
 */

void print_integer(va_list *ptr, unsigned int *count)
{
	int i;

	i = va_arg(*ptr, int);

	if (i > -1)
	{
		print_numbers(i, count);
	}
	else
	{
		printc('-', count);
		print_numbers(-i, count);
	}
}

/**
* print_everything - prints everything
* @format: a pointer
* @count: pointer to a counter variable
* @ptr: pointer to list of args
*/

void print_everything(const char *format, unsigned int *count, va_list *ptr)
{
	unsigned int i, k;
	function functions[] = {{'c', print_char}, {'s', print_string},
	{'i', print_integer}, {'d', print_integer}, {'b', print_binary},
	{'u', print_unsigned_int}, {'p', print_pointer},
	{'R', print_rot13}, {NULL, NULL}};

	while (*format != '\0')
	{
		if (*format != '%')
		{
			printc(*format, count);
		}
		else
		{
			i = 0, k = 0;
			while (function[i].function != NULL)
			{
				if (functions[i].symbol == *(format + 1))
				{
					functions[i].function(ptr, count);
					++k;
				}
			++i;
			}
			if (*(format + 1) == '%')
			{
				printc(*format, count);
				++k;
			}
			if (k == 1)
				++format;
			if (k == 0)
				printc(*format, count);
		}
		++format;
	}
}
/**
 * _printf - a function that prints
 * @format: type of data to be printed on standard output
 * Return: int
 */

int _printf(const char *format, ...)
{
	unsigned int *count, finalcount;
	va_list args, *ptr;

	count = malloc(sizeof(int));
	if (count == NULL || format == NULL)
		return (-1);
	ptr = &args, *count = 0;
	va_start(args, format);
	print_everything(format, count, ptr);

	va_end(args);
	finalcount = *count;
	free(count);
return (finalcount);
}
