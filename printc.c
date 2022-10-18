#include <unistd.h>

/**
 * printc - writes the character c to stdout
 * @c: The character to print
 * @count: keeps count of charcaters printed
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void printc(char str, unsigned int *count)
{


	*count = *count + 1;
	write(1, str, 1);
}
