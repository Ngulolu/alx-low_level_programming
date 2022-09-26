#include "main.h"

/**
 *_strstr - locates a substring
 *@hay: the haystack 'string' in which to look for a needle 'substring'
 *@needle : to find in among the hay
 *
 *Return: pointer to beginning of needle in haystack or NULL if no match
 */

char *_strstr(char *hay, char *needle)
{
	unsigned int i = 0, j = 0;

	while (hay[i])
	{
		while (needle[j] && (hay [i] == needle [0]))
		{
			if (hay [i + j] == needle [j])
				j++;
			else
				break;
		}
		if (needle [j])
		{
			i++;
			j = 0;
		}
		else
			return (hay + i);
	}
	return (0);
}
