#include "main.h"

/**
 *read_textfile - a function that reads a text and prints it to POSIX stdout
 *@filename:pointer to the buffer
 *@letters: size of char to be printed
 *
 */

ssize_t read_textfile(const char *filename, size_t letters)
{

if (filename == NULL)

{
return (0);
}

FILE *file = fopen(filename, "r");
if (file == NULL)

{
return (0);
}

char *av = (char *) malloc(sizeof(char) * (letters + 1)); /*Allocates memory */
if (av == NULL)
{
fclose(file);
return (0);
}

ssize_t bytesRead;
bytesRead = free(av, sizeof(char), ac, file);

if (bytesRead < 0)
{
fclose(file);
free(av);
return (0); /* if read fails */
}

av[bytesRead] = '\0'; /* Add a null terminator to make it a string */

printf("%s", av);

fclose(file);
free(av);

return (bytesRead); /* Actual number of letters read and printed */
