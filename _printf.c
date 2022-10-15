#include "main.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_number - prints numbers
 * @n: amount of numbers
 * Return: nothing
 */

void print_numbers(int n)
{
	if (n < 10)
	{
		printc(n + 48);
		return;
	}
	print_numbers(n/10);
	printc((n % 10) + 48);
    
}

/**
 * print_char - prints a char
 * @ptr: pointer
 * @va_list: type for iterating arguments
 * Return: nothing
 */

void print_char(va_list *ptr)
{
  int i;
  i = va_arg(*ptr, int);
 printc(i);
}

/**
 * print_integer - prints an integer
 * @ptr: pointer
 * @va_list: type for iterating arguments
 * Return: nothing
 */

void print_integer(va_list *ptr)
{
  int i;
  i = va_arg(*ptr, int);
	if (i > -1)
	{
		print_numbers(i);
	}
	else 
	{
		
		printc('-');
		print_numbers(-i);
	}
 
}

/**
 * print_string - prints a string
 * @ptr: pointer
 * @va_list: type for iterating arguments
 * Return: nothing
 */

void print_string(va_list *ptr)
{
  char *str;
  int i;
	
  i = 0;
  str = va_arg(*ptr, char *);
	
  while (str[i] != '\0')
  	printc(str[i]);
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
	int i;
  
  va_list args, *ptr;
	
	ptr = &args;
  
	va_start(args, format);
	while (*format != '\0')
	{
		if (*format != '%')
		{
			_putchar(*format);
		}
		else
		{
		i = 0;
		while (i < 4)
		{
			
				if (functions[i].symbol == *(format + 1))
				{
					functions[i].function(ptr);
					++format;
				}
					
					
			++i;
		}
		}
		++format;
	}
		
	va_end(args);
  
return (0);
}
