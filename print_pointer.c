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
	uintptr_t str;
	
	address = va_arg(*ptr, void *);
	 str = (uintptr_t)&address;
	
	
	printf("%x\n", str);
	*count = *count + 1;


}
