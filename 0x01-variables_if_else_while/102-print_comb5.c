#include <stdio.h>
/**
 * main - write all combinations of 2 digit numbers
 * 00 01 and 01 00 are considered as
 * the same combination of the numbers 0 and 1
 *
 * Return: 0
 */
int main(void)
{
	int i, j;

	for (i = 0; i <= 99; i++)
	{
		for (j = 0; j <= 99; j++)
		{
			if(i < j)
			{
				 putchar((i / 10) + '0');
				 putchar((i % 10) + '0');
				 putchar(' ');
				 putchar((j / 10) + '0');
				 putchar((j % 10) + '0');
				 if (i != 98 || j != 99)
				 {
					 putchar(',');
					 putchar(' ');
				 }
			}
		}
	}
	putchar('\n');
	return (0);
}
