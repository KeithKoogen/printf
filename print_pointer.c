#include "main.h"
#include <stdint.h>

/**
 * print_pointer - prints a pointer
 * @ptr: pointer
 * @count: pointer to an int that keeps count  a pointer
 */
 
 
void print_pointer(va_list *ptr, unsigned int *count)
{
	void *address;
	char *str;
	
	address = va_arg(*ptr, void *);
	 str = &address;
	
	
	printf("%s\n", str);
	*count = *count + 1;


}
