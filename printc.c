#include <unistd.h>

/**
 * printc - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int printc(char c)
{
	return (write(1, &c, 1));
}
