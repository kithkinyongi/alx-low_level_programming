#include <stdio.h>
/**
 * main - prints the fizz buzz - test with numbers from 1 to 100
 *
 * Returns: 0 (success)
 */
int main(void)
{
	int i;

	for (i = 1 ; i <= 100 ; i++)
	{
		if ((i % 3) == 0)
		{
			putchar(' ');
			printf("Fizz");
			putchar(' ');
		}
		else if ((i % 5) == 0)
		{
			putchar(' ');
			printf("Buzz");
			putchar(' ');
		}
		else if (((i % 3) == 0) && ((i % 5) == 0))
		{
			putchar(' ');
			printf("FizzBuzz");
			putchar(' ');
		}
		else
		{
			printf("%d", i);
			putchar(' ');
		}
	}
	return (0);
}
