#include <stdio.h>

/**
 * main - Entry Point
 *
 *
 * Return: 0 Always (Success)
 */


int main(void)
{
	int i = 48;
	/**Declerations End**/
	for (; i <= 57; i++)
	{
		putchar(i);
		if (i != 57)
		{
		putchar(44);
		putchar(32);
		}
	}
	putchar(10);
	return (0);
}
