#include "main.h"

/**
 * rot13 - function that encodes a string using rot13.
 * @s: pointer to char
 */

void print_rot13(va_list *ptr, unsigned int *count)
{
int i = 0;

int j = 0;

char *l = "AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsTtUuVvWwXxYyZz";

char *r13 = "NnOoPpQqRrSsTtUuVvWwXxYyZzAaBbCcDdEeFfGgHhIiJjKkLlMm";

while (*(ptr + i) != '\0')
{
while (*(l + j) != '\0')
{
if (*(ptr + i) == *(l + j))
{
*(ptr + i)  == *(r13 + j);
break;
}
j++;
}
j = 0;
i++;
}
printc(ptr, count);
}
