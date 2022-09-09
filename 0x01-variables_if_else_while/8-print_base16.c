#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - entry
 *
 * Return: always 0
 */
int main(void)
{
	int x;
	char word;

	for (x = '0'; x <= '9'; x++)
		putchar(x);
	for (word = 'a'; word <= 'f'; word++)
		putchar(word);
	putchar('\n');

	return (0);
}
