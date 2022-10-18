#include "main.h"

void string_printer(char *str, unsigned int *count)
{
	if (*str == '\0')
		return;
	
	string_printer(*(str - 1), count);
	printc(*str, count);
}
/**
 * print_string - prints a string
 * @ptr: pointer
 * @count: a pointer to an int that keeps count
 * Return: nothing
 */

void print_reverse(va_list *ptr, unsigned int *count)
{
	
	char *str;
	
	str = va_arg(*ptr, char *);
	
	string_printer(str, count);


}
