#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>

typedef struct function_brain
{
	char symbol;
	void (*function)();
}function;

int printc(char c, int *ptr);

void print_numbers(int n, int *count);
void print_char(va_list *ptr, int *count);
void print_integer(va_list *ptr, int *count);
void print_string(va_list *ptr, int *count);


int _printf(const char *format, ...);


#endif /*MAIN_H*/
