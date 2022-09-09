#include <stdio.h>
#include <time.h>
/**
 * main - Entry Point
 *
 * Return: 0 Always (Success)
 */

int main (void) {
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n>0)
	{
		printf("%d is positive");
	} else if (n==0)
	{
		printf("%d is zero");
	} else if (n<0)
	{
		printf("%d is negative");
	}
	return (0);
}
