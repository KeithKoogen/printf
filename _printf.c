#include "main.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_number - prints numbers
 * @n: amount of numbers
 * Return: nothing
 */

void print_numbers(int n, unsigned int *count)
{
	if (n < 10)
	{
		printc(n + 48, count);
		
		return;
	}
	print_numbers(n/10, count);
	printc((n % 10) + 48, count);

    
}

/**
 * print_char - prints a char
 * @ptr: pointer
 * @va_list: type for iterating arguments
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
 * @va_list: type for iterating arguments
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
 * print_string - prints a string
 * @ptr: pointer
 * @va_list: type for iterating arguments
 * Return: nothing
 */

void print_string(va_list *ptr, unsigned int *count)
{
  char *str;
  int i;
	
  i = 0;
  str = va_arg(*ptr, char *);
	
  while (str[i] != '\0')
  {
  	printc(str[i], count);
		
	  ++i;
  }
}
/**
 * _printf - a function that prints
 * @char: character
 * @format: type of data to be printed on standard output
 * Return: int
 */

int _printf(const char *format, ...)
{
  function functions[] = {
    {'c', print_char},
    {'s', print_string},
    {'i', print_integer},
	{'d', print_integer}
  };
	unsigned int i, k, *count, finalcount;
  va_list args, *ptr;
	
	if (format == NULL)
		return (-1);

	count = malloc(sizeof(int));
	
	if (count == NULL)
		return (-1);
	
	ptr = &args;
	if (ptr == NULL)
		return (-1);
	*count = 0;
	

	va_start(args, format);
	while (*format != '\0')
	{
		if (*format != '%')
		{
			printc(*format, count);
			
			
		}
		else
		{
		i = 0;
			k = 0;
		while (i < 4)
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
			{
				++format;
			}
			else
			{
				printc(*format, count);
				
			
			}
		}
		++format;
	}
		
	va_end(args);
	
	finalcount = *count;
	free(count);
  
return (finalcount);
}
