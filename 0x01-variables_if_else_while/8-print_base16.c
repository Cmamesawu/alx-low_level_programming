#include <stdio.h>
/**
 * main - Entry point
 * Description: Prints out numbers in bas 16
 * Return: zero
 */
int main(void)
{
	int i;
	int ch;

	for (i = '0'; i <= '9'; i++)
	{putchar(i) ; }
	for (ch = 'a'; ch <= 'f'; ch++)
	{putchar(ch) ; }
	putchar('\n');
	return (0);
}
