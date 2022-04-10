#include <stdio.h>
#include <time.h>
/*main - Entry point
 *n: random number
 * write if statements
 * Return: O
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX/2;
	if (n>0)
	{printf("%d\n", "is positive");}
	if (n==0)
	{printf("%d\n", "is zero");}
	if (n<0)
	{printf("%d\n", "is negative");}
	return (0);
}
