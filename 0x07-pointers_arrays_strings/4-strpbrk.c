# include "main.h"

/**
 *_strpbrk - searches a string for any set of bytes
 *@s: string to check
 *@fate: string to check against
 *
 *Return: pointer to byte in s that matches or NULL if no match
 */

char *_strpbrk(char *s, char *fate)
{
	unsigned int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; fate[j]; j++)
		{
			if (s[i] == fate[j])
				break;
		}
		if (fate[j])
			return (s+i);
	}
	return (0);
}
