#include <stdio.h>
/**
 * main - Entry point
 * print size of variables
 * Return : Always 0 (Success)
 */
int main(void)
{
printf("Size of char: %lu byte(s)\n", sizeof(char));
printf("Size of an int: %lu byte(s)\n", sizeof(int));
printf("Size f a long int: %lu byte(s)\n", sizeof(long));
printf("Size of a  long long int: %lu byte(s)\n", sizeof(long long));
printf("Size of a float: %lu byte(s)\n", sizeof(float));
return (0);
}
