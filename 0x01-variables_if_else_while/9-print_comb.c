#include <stdio.h>

/**
 * main - print hexadecimal numbers
 *
 * Return: zero
 */
int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
		if (i != ('9' + '1'))
		{
			putchar(',');
		 	putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
