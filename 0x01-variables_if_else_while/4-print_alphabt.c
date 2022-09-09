#include <stdio.h>

/**
 * main - Entry Point
 *
 *
 * Return: 0 Always (Success)
 */


int main(void)
{
	int i = 97;
	/**Declerations End**/
	for (; i <= 122; i++)
	{
		if (i != 113 && i != 101)
		putchar(i);
	}
	putchar(10);
	return (0);
}
