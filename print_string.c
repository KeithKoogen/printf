#include "main.h"

/**
 * print_string - prints a string
 * @ptr: pointer
 * @count: a pointer to an int that keeps count
 * Return: nothing
 */

void print_string_hex(va_list *ptr, unsigned int *count)
{
	char *str;
	int i;

  if (0 > i < 32 || 32 >= 127)
  {
    printc("\x", 41, 5a);
  }
   
	i = 0;
	str = va_arg(*ptr, char *);

	while (str[i] != '\0')
	{
		printc(str[i], count);
		++i;
	}
}
