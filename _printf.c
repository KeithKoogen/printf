#include "main.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_number - prints numbers
 * @n: amount of numbers
 * Return: nothing
 */

void print_numbers(int n, int *ptrint)
{
	if (n < 10)
	{
		printc(n + 48);
		*ptrint = *ptrint + 1;
		return;
	}
	print_numbers(n/10);
	printc((n % 10) + 48);
	*ptrint = *ptrint + 1;
    
}

/**
 * print_char - prints a char
 * @ptr: pointer
 * @va_list: type for iterating arguments
 * Return: nothing
 */

void print_char(va_list *ptr, int *ptrint)
{
  int i;
  i = va_arg(*ptr, int);
 printc(i);
	*ptrint = *ptrint + 1;
}

/**
 * print_integer - prints an integer
 * @ptr: pointer
 * @va_list: type for iterating arguments
 * Return: nothing
 */

void print_integer(va_list *ptr, int *ptrint)
{
  int i;
  i = va_arg(*ptr, int);
	if (i > -1)
	{
		print_numbers(i);
		*ptrint = *ptrint + 1;
	}
	else 
	{
		
		printc('-');
		print_numbers(-i);
		*ptrint = *ptrint + 1;
	}
 
}

/**
 * print_string - prints a string
 * @ptr: pointer
 * @va_list: type for iterating arguments
 * Return: nothing
 */

void print_string(va_list *ptr, int *ptrint)
{
  char *str;
  int i;
	
  i = 0;
  str = va_arg(*ptr, char *);
	
  while (str[i] != '\0')
  {
  	printc(str[i]);
		*ptrint = *ptrint + 1;
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
	int i, k, *j, count;
  va_list args, *ptr;

	j = malloc(sizeof(int));
	ptr = &args;
	*j = 0;
	

	va_start(args, format);
	while (*format != '\0')
	{
		if (*format != '%')
		{
			printc(*format);
			*j = *j + 1;
			
		}
		else
		{
		i = 0;
			k = 0;
		while (i < 4)
		{
			
				if (functions[i].symbol == *(format + 1))
				{
					functions[i].function(ptr, j);
					
					
					++k;
	
				}
					
					
			++i;
		}
			if (k == 1)
			{
				++format;
			}
			else
			{
				printc(*format);
				*j = *j + 1;
			
			}
		}
		++format;
	}
		
	va_end(args);
	
	count = *j;
	free(j);
  
return (count);
}
