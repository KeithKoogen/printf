#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>

typedef struct function_brain
{
	char symbol;
	void (*function)();
}function;

int printc(char c);

void print_numbers(int n, int *ptrint);
void print_char(va_list *ptr, int *ptrint);
void print_integer(va_list *ptr, int *ptrint);
void print_string(va_list *ptr, int *ptrint);


int _printf(const char *format, ...);


#endif /*MAIN_H*/
