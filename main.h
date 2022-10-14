#ifndef MAIN_H
#define MAIN_H

typedef struct function_brain
{
	char symbol;
	void (*function)();
}function;

int _printf(const char *format, ...);
int _putchar(char c);

#endif
