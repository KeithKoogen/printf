#include "main.h"

/**
 * rot13 - function that encodes a string using rot13.
 * @s: pointer to char
 */

char print_rot13(const char *src)
{
int i = 0;

int j = 0;

char *l = "AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsTtUuVvWwXxYyZz";

char *r13 = "NnOoPpQqRrSsTtUuVvWwXxYyZzAaBbCcDdEeFfGgHhIiJjKkLlMm";

while (*(src + i) != '\0')
{
while (*(l + j) != '\0')
{
if (*(src + i) == *(l + j))
{
*(src + i)  == *(r13 + j);
break;
}
j++;
}
j = 0;
i++;
}
return (src);
}
