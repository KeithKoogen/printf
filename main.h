#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>

typedef struct function_brain
{
	char symbol;
	void (*function)();
} function;

int printc(char c, unsigned int *count);

void print_numbers(int n, unsigned int *count);

void print_char(va_list *ptr, unsigned int *count);

void print_integer(va_list *ptr, unsigned int *count);

void print_string(va_list *ptr, unsigned int *count);


int _printf(const char *format, ...);


#endif /*MAIN_H*/
