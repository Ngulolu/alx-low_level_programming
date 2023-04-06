#include <stdio.h>
#include "main.h"

/**
 *binary_to_uint - a function that converts binary to unsigned int
 *@b: binary string 
 *
 *Return: decimal (unsigned int)
 */

unsigned int binary_to_uint(const char *b)
{
  unsigned int n = 0;
  unsigned int i = 0;
  
  if (b == NULL)
    {
      return (0);
    }

  for (; b[i] != '\0'; i++)
    {
      if (b[i] == '0')
	{
	  n = n << 1; /* akin to multiplying by 2 */
	    }
      else if (b[i] == '1')
	{
	  n = (n << 1) | 1; /* akin to multiplying by 2 and adding 1 */
	}
      else
	{
	  return (0); /* error; invalid character in string possibly */
	}
    }
  return (n);
}

	  

