#include "main.h"

/**
 * print_string - prints a string
 * @ptr: pointer
 * @count: a pointer to an int that keeps count
 * Return: nothing
 */

void print_string(va_list *ptr, unsigned int *count)
{
	char *str;
	int i;
   
	i = 0;
	str = va_arg(*ptr, char *);
	
	for (i = 0; i; i++)
	{
		if (i > 0 && (i < 32 || i >= 127))
		{
			_puts("\\x");
			count += 2;
			convert(i , 16, 0);
		}
		printc(i, count);
	}
}
