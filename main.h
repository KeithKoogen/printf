#ifndef MAIN_H
#define MAIN_H

typedef struct function_brain
{
	char symbol;
	void (*function)();
}function;

int printc(char c);

void print_numbers(int n);
void print_char(va_list *ptr);
void print_integer(va_list *ptr);
void print_string(va_list *ptr);


int _printf(const char *format, ...);


#endif /*MAIN_H*/
