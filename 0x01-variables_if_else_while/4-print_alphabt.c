#include <stdio.h>

/**
 * main - prints the alphabeths in lower case
 * followed by a new line except q and e
 * Return: Always 0
 */

int main(void)
{
	char lc;

	for (lc = 'a'; lc <= 'z'; lc++)
	{
		if (lc != 'q' && lc != 'e')
			putchar(lc);
	}

	putchar('\n');

	return (0);
}
