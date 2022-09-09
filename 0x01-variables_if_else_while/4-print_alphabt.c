#include <stdio.h>
/**
 * main- main function
 *
 * Return: always 1
 */

int main(void)
{
	char word, e, q;

	e = 'e';
	q = 'q';

	for (word = 'a'; word <= 'z'; word++)
	{
		if (word != e && word != q)
			putchar(word);
	}
		printf("\n");
	
	return (0);
}
