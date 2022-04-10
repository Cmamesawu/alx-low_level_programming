#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * n: random number
 * display last digit
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = n % 10
	if (n > 5)
	{printf("Last digit of n is %i and  %i is greater than 5\n", n, last_digit) ;}
	else if (n == 0)
	{printf("Last digit of n is %i and %i is 0\n", n, last_digit) ;}
	if (6 > n && n != 0)
	{printf("Last digit of n is %i and %i is less than 6 and not 0", n, last_digit) ;}
	return (0);
}
