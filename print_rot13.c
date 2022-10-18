#include "main.h"

/**
 * rot13 - function that encodes a string using rot13.
 * @s: pointer to char
 */

void print_rot13(va_list *ptr, unsigned int *count)
{
char *str;
int i = 0;

int j = 0;

char *l = "AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsTtUuVvWwXxYyZz";

char *r13 = "NnOoPpQqRrSsTtUuVvWwXxYyZzAaBbCcDdEeFfGgHhIiJjKkLlMm";

str = va_arg(*ptr, char *);
  
while (str[i] != '\0')
{
while (l[j] != '\0')
{
if (str[i] == l[j])
{
str[i]  = r13[j];
break;
}
j++;
}
j = 0;
i++;
}
printc(str[0], count);
}
