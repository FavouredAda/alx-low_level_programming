#include <stdio.h>
/**
 * main - print alphabet in lowercase
 * skip q and e
 * only use putchar
 *
 * Return:0
 */
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		if (letter == 'e')
		{
			letter++;
		}
		else if (letter == 'q')
		{
			letter++;
		}
		else
		{
			putchar(letter);
			letter++;
		}
	}
	putchar('\n');
	return (0);
}
