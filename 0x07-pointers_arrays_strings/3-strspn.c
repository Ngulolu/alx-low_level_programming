# include "main.h"

/**
 *_strspn - gets the length of a prefix substring
 *@s : string to check
 *@fate: string to check against
 *
 *Return: number of bytes of s in fate
 */

unsigned int _strspn(char *s, char *fate)
{
	unsigned int i, j;

	for (i = 0; fate[j]; j++)
	{
		for (j = 0; fate[j]; j++)
		{
			if (s[i] == fate[j])
				break;
		}
		if (!fate[j])
			break;
	}
	return (i);
}
