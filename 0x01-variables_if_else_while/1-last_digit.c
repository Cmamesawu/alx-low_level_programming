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
	if (n>5)
	{printf("Last digit of n is %i and is greater than 5", n);}
	if (n==0)
	{printf("Last digit of n is %i and is 0", n);}
	if (6>n && n!=0)
	{printf("Last digit of n is %i and is less than 6 and not 0", n);}
	return 0;
}
