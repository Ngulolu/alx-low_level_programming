#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
*_strdup - entry point
*@s:string we need to duplicate
*Return: a pointer to the duplicated string or NULL
*/

char *_strdup(char *s)
{
char *strnew = NULL; /*declaration of pointer string of type char*/
unsigned int i; /*declaration of unsigned integer i*/
int n; /*declaration of an integer n*/

if (s == NULL)
return (NULL);

for (n = 0; s[n] != '\0'; n++)
;
strnew = (char *)malloc(n + 1 * sizeof(char));

if (strnew != NULL)

{
for (i = 0; s[i] != '\0'; i++)
strnew[i] = s[i];
}
else
{
return (NULL);
}
strnew[i] = '\0';
return (strnew);
}
