#include <stdio.h>
/**
 * main- main function
 *
 * Return: always 1
 */

int main(void)
{
	char alphabet;
	for(alphabet ='a'; alphabet<= 'z'; aphabet++)
	{
		if(alphabet =='q')
			continue;
		else if(alphabet == 'e')
			continue;
		putchar(alphabet);
	}
	putchar('\n');
	return (0);
}
