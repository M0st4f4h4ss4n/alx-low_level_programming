#include <stdio.h>

/**
 * main - Entry Point
 *
 *
 * Return: 0 Always (Success)
 */


int main(void)
{
	int i = 0;
	int j = 0;
	/**Declerations End**/
	for (; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (i != j && i < j)
			{
				putchar(i + 48);
				putchar(j + 48);
				if (i != 8)
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	putchar(10);
	return (0);
}
