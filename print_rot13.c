#include "main.h"

/**
 * rot13 - function that encodes a string using rot13.
 * @s: pointer to char
 * Return: char
 */

void print_rot13(va_list *ptr, unsigned int *count)
{
int i = 0;
int j = 0;
char *l;
char *r13 = "NnOoPpQqRrSsTtUuVvWwXxYyZzAaBbCcDdEeFfGgHhIiJjKkLlMm";
 
l = va_arg(*ptr, char *);

while (*(s + i) != '\0')
{
while (*(l + j) != '\0')
{
if (*(s + i) == *(l + j))
{
printc(*(r13 + j), count);
break;
}
j++;
}
j = 0;
i++;
}

