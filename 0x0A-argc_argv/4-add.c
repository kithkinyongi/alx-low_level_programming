#include <stdio.h>
#include <stdlib.h>
/**
 * main - adds that adds positive numbers
 * @argc: counts argument
 * @argv: 1D vector arrays of arguments
 *
 * Return: 0 (success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int i;
	int add = 0;
	int valueReturn;
	int a;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			a = atoi(argv[i]);
			if (!(a >= 'a' && a <='z') || !(a >= 'A' && a <= 'Z'))
			{
				add += a;
				valueReturn = 0;
			}
			else
			{
				printf("Error");
				valueReturn = 1;
				break;
			}
		}
		printf("%d\n", add);
	}
	else
		printf("0\n");
	return (valueReturn);
}
