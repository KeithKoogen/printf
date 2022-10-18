#include "main.h"

/**
 * print_pointer - prints a pointer
 * @ptr: pointer
 * @count: pointer to an int that keeps count  a pointer
 */
 
 
void print_pointer(va_list *ptr, unsigned int *count)
{
	void *address;
	
	address = va_arg(*ptr, void *);
	printf("%p\n", address);
	*count = *count + 1;


}
