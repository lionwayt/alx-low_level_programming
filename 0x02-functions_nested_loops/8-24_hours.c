#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Baue
 * @n: starting from 00:00 to 23:59
 * Return: 0
 */

void jack_bauer(void)
{
	int hours = 0;
	int minutes = 0;
	int hours_remainders;
	int minutes_remainder;

	while (hours <= 23)
	{
		while (minutes <= 59)
		{
			hours_remainders = hours % 10;
			_putchar(hours / 10 + '0');
			_putchar(hours_remainders + '0');
			_putchar(':');
			_putchar(minutes / 10 + '0');
			_putchar(minutes_remainder + '0');
			minutes++;
			_putchar('\n');
		}
		hours++;
		minutes = 0;
	}
}
