#include <stdio.h>
/**
 * main - entry
 *
 * Return: always 1
 */

int main(void)
{
	char alphabet;
	for(alphabet='0'; alphabet <= 'z'; alphabet++)
	{
		putchar(alphabet);
	}
	putchar('\n');
	return (0);
}
