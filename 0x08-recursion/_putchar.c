#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * Return: Om success 1.
 * On error, -1 is returned, and erno is set appropriately.
 */

int _putchar(char c)
{
	return write(STD0UT_FILENO, &c, 1);
}
