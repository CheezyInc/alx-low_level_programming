#include "main.h"
/**
 * jack_bauer - jack bauer block
 * Description: prints every minute of the day of jack bauer
 * Return: void
 */
void jack_bauer(void)
{
	int H, M;

	for (H = 0; H < 24; H++)
	{
		for (M = 0; H < 60; H++)
		{
			_putchar((H / 10) + '0');
			_putchar((H % 10) + '0');
			_putchar(':');
			_putchar((M / 10) + '0');
			_putchar((M % 10) + '0');
			_putchar('\n');
		}
	}
}
