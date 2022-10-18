#include "main.h"

/**
 * print_pointer - prints a pointer
 * @ptr: pointer
 * @count: pointer to an int that keeps count  a pointer
 */
 
 
void print_pointer(va_list *ptr, unsigned int *count)
{
	char *pointer;
	int address;
	
	address = va_arg(*ptr, int);
	pointer = (char *)&address;
	printf("%s\n", pointer);
		
	printc(pointer[1], count);

}
