#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - entry
 *
 * Return: always 1
 */
int main(void)
{
	char word;

	for (word = 'a'; word <= 'z'; word++)
		putchar(word);
	        putchar("\n");

	return (0);
}
