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
	int k = 0;
	/**Declerations End**/
	for (; i <= 9; i++)
	{
		for (; j <= 9; j++)
		{
			for (; k <= 9; k++)
			{
			if (i == j)
			{
				continue;
			} else if (i == k)
			{
				continue;
			} else if (j == k)
			{
				continue;
			} else if (k < j)
			{
				continue;
			} else if (j < i)
			{
				continue;
			} else
			{
				putchar(i + 48);
				putchar(j + 48);
				putchar(k + 48);
				if (i != 7)
				{
					putchar(44);
					putchar(32);
				}
			}
			}
		}
	}
	putchar(10);
	return (0);
}
