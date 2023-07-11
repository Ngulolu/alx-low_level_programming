#include "main.h"
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

/**
 *read_textfile - a function that reads a text and prints it to POSIX stdout
 *@filename:pointer to the buffer
 *@letters: size of char to be printed
 *
 *Return: 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
char *buffer = NULL;
ssize_t l_read;
ssize_t l_written;
int fd;

if (!(filename && letters))
return (0);

fd = open(filename, O_RDONLY);
if (fd == -1)
return (0);

buffer = malloc(sizeof(char) * letters);
if (!buffer)
return (0);

l_read = read(fd, buffer, letters);
close(fd);

if (l_read < 0)
{
free(buffer);
return (0);
}

if (!l_read)
l_read = letters;

l_written = write(STDOUT_FILENO, buffer, l_read);
free(buffer);

if (l_written < 0)
return (0);

return (l_written);
}
