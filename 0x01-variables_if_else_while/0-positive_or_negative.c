#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* more headers goes there */
/**
 * main - Entry Point
 *
 * Return: 0 Always (Success)
 */


int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n>0)
	{
		printf("%d is a positive", n);
	} else if (n==0)
	{
		printf("%d is a zero", n);
	} else if (n<0)
	{
	printf("%d is a negative", n);
	}

	return (0);
}
