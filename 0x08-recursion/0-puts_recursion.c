#include "main.h"
/**
 * main - entry point
 * _puts_recursion - prints out a string and then a new line
 * s: sring to be printed
 * Return: void
 */
void _puts_ecursion(char *s)
{
	if (*s =='\0')
	{
		_putchar('\n');
		return;
	}
	else
	{
		_putchar(*s);
		_puts_recursion(++s);
	}
}
