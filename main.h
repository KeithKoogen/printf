#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>

/**
 * struct function_brain - type of struct
 * @symbol: symbol
 * @function: pointer
 */

typedef struct function_brain
{
	char symbol;
	void (*function)();
} function;

void printc(char str, unsigned int *count);


void print_numbers(int n, unsigned int *count);

void print_char(va_list *ptr, unsigned int *count);

void print_integer(va_list *ptr, unsigned int *count);

void print_string(va_list *ptr, unsigned int *count);

void print_binary(va_list *ptr, unsigned int *count);

void print_unsigned_int(va_list *ptr, unsigned int *count);

void print_rot13(va_list *ptr, unsigned int *count);

void print_pointer(va_list *ptr, unsigned int *count);

void print_reverse(va_list *ptr, unsigned int *count);


int _printf(const char *format, ...);


#endif /*MAIN_H*/
