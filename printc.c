#include <unistd.h>

/**
 * printc - writes the character c to stdout
 * @c: The character to print
 * @count: keeps count of charcaters printed
 */

void printc(char c, unsigned int *count)
{

	*count = *count + 1;
	write(1, &c, 1);
}
