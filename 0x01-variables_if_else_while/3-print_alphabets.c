#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char low = 'a';
	while (low <= 'z')
	{
		putchar(low);
		low++;
	}

	low = 'A';
	while (low <= 'Z')
	{
		putchar(low);
		low++;
	}

	putchar('\n');
return (0);
}
