#include <stdio.h>
/**
 * main - print alphabet in lowercase
 * can only use putchar
 *
 * Return: 0
 */
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
	return (0);
}
