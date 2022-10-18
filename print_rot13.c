#include "main.h"

/**
 * rot13 - function that encodes a string using rot13.
 * @s: pointer to char
 */

void print_rot13(va_list *ptr, unsigned int *count)
{
int i;
int j;
char * str;

char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char cypher[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
str = va_arg(*ptr, char *);
  printf("ORIGINAL %s\n", str);
i = 0;
while (str[i] != '\0')
{
for (j = 0; alphabet[j] != '\0'; j++)
{
if (alphabet[j] == str[i])
{
str[i] = cypher[j];
break;
}
}
i++;
}
  i = 0;
  while (str[i] != '\0')
  {
    printc(str[i], count);
    ++i;
  }
}
