#include "main.h"

/**
 * print_rot13 - function that encodes a string using rot13.
 * @ptr: pointer
 * @count: pointer to counter variable
 * Return: char
 */

void print_rot13(va_list *ptr, unsigned int *count)
{
int i;
int j;
char *str;
char *l = "AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsTtUuVvWwXxYyZz";
char *r13 = "NnOoPpQqRrSsTtUuVvWwXxYyZzAaBbCcDdEeFfGgHhIiJjKkLlMm";

j = 0;
i = 0;
str = va_arg(*ptr, char *);
while (*(str + i) != '\0')
{
while (*(l + j) != '\0')
{
if (*(str + i) == *(l + j))
{
printc(*(r13 + j), count);
break;
}
j++;
}
j = 0;
i++;
}
}
