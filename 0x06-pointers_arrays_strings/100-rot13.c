#include "main.h"

/**
 * rot13 -  replaces each letter in a string with the letter that is 13 positions later in the alphabet.
 *
 * Return: pointer to str
 */

char *rot13(char *str)
{
	int i, j;
	char *normal = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *rot13 = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	
	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; normal[j] != '\0'; j++)
		{
			if (str[i] == normal[j])
			{
				str[i] = rot13[j];
				break;
			}
		}
	}
	return (str);
}

