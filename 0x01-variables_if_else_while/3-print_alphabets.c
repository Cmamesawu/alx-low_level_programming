#include <stdio.h>
/**
 * main - Entry point
 * Description: Displays alphabets in uppercase and lowercase
 * Return: Zero
 */
int main(void)
{
	char ch;
	char CH;

	for (ch = 'a'; ch <= 'z'; ch++)
	{putchar(ch) ; }
	for (CH = 'A'; CH <= 'Z'; CH++)
	{putchar(CH) ; }
	putchar('\n');
	return (0);
}
