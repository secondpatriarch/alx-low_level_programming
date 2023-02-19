#include <stdio.h>
/**
 * main - Prints sum of all natural numbers below 1024
 *
 * Return: Always 0.
 */
int main(void)
{
	int i, j;

	for (i = 1; i < 1024; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
		{
			j += i;
		}
	}
	printf("%d\n", j);
	return (0);
}
