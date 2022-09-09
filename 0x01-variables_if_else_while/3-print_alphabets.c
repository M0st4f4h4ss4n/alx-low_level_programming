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
	int j = 65;
	/**Declerations End**/
	for (; i <= 122; i++)
	{
		putchar(i);
	}
	for (; j <= 90; j++)
	{
		putchar(j);
	}
	putchar(10);
	return (0);
}
