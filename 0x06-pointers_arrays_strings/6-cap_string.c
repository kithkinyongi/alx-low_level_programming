#include "main.h"
/**
 * cap_string - converts each word to uppercase
 * @str: string to be converted
 *
 * Return: pointer to str
 */
char *cap_string(char *str)
{
	int i;
	int storeno;

	for (i = 0; str[i] != '\0' ; i++)
	{
		if (str[i] == ' ' || str[i] == '.' || str[i] == '\t' || str[i] == '\n')
			for (storeno = i + 1 ; storeno < i + 2 ; storeno++)
			{
				if (str[storeno] >= 'a' && str[storeno] <= 'z')
				{
					str[storeno] = str[storeno] - 32;
				}
			}
	}
	return (str);
}

