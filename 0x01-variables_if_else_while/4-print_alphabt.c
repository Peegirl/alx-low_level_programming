#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char low, e, q;

	e = 'e';e = 'e';
	q = 'q';

	for (low = 'a'; low <= 'z'; low++)
	{
		if (low != e && low != q)
			putchar(low);
	}
	putchar('\n');

	return (0);
}
