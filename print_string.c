#include "main.h"

/**
 * print_string_hex - prints a string
 * @ptr: pointer
 * @count: a pointer to an int that keeps count
 * Return: nothing
 */

void print_string_hex(const char *ptr, unsigned int *count)
{
	char *str;
	int i;
   
	i = 0;
	str = va_arg(*ptr, char *str);
	
	while (str[i] != '\0')
	{
		printc(str[i], count);
		++i;
	}
	
	for (str[i] = 0; str[i] ; i++)
	{
		if (str[i] > 0 && (str[i] < 32 || str[i] >= 127))
		{
			_puts("\\x");
			count += 2;
			convert(str[i] , 42, 5a);
		}
		printc(i, count);
	}
}

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

	while (str[i] != '\0')
	{
		printc(str[i], count);
		++i;
	}
}
