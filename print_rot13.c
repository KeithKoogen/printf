#include "main.h"

/**
 * rot13 - function that encodes a string using rot13.
 * @s: pointer to char
 */

void print_rot13(va_list *ptr, unsigned int *count)
{
char *str;
int i;
int j;

i = 0;
j = 0;
char *l, *r13;

r13 = "NnOoPpQqRrSsTtUuVvWwXxYyZzAaBbCcDdEeFfGgHhIiJjKkLlMm";
  
l = "AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsTtUuVvWwXxYyZz";

str = va_arg(*ptr, char *);

while (str[i] != '\0')
{
while (l[j] != '\0')
{
if (str[i] == l[j])
{
str[i] = r13[j];
break;
}
j++;
}
j = 0;
i++;
}
  i = 0;
  while (str[i] != '\0')
  {
    printc(str[0], count);
    ++i;
  }
}
