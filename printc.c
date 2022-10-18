#include <unistd.h>

/**
 * printc - writes the character c to stdout
 * @c: The character to print
 * @count: keeps count of charcaters printed
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void printc(char *str, unsigned int *count)
{
	char buffer[1024];
	int i;
	
	i = 0;
	
	while (str[i] != '\0')
	{
		buffer[i] = str[i];
		++i
	}

	*count = *count + i;
	write(1, buffer, i);
}
