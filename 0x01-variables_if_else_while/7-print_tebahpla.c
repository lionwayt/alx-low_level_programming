#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - entry
 *
 * Return: always o
 */
int main(void)
{
	char word;

	for (word = 'z'; word >= 'a'; word--)

		putchar(word);
	putchar('\n');

	return (0);
}
