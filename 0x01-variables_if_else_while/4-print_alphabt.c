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
	char letter;

	for (letter = 'a', letter <= 'z', letter++)
	{
		if (letter != 'q' && != 'e')
		{
			putchar(letter);
		}
		putchar('\n');
		return (0);
	}
}
