#include <stdio.h>
/**
 * main - Entry point
 * Description: Display aphabet excep q & e
 * Return: zero
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if  (ch == 'e' || ch == 'q')
		{continue ; }
	putchar(ch) ; }
	putchar('\n');
	return (0);
}
