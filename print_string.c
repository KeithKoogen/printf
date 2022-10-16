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
	  
	if (0 > i < 32 || 32 >= 127)
 	 {
  	  printc("\x", 16, 0);
 	 }
}
