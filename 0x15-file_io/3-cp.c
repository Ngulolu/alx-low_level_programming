#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


/**
 *cp - function that copies a file
 *@file_from: the path to the source file.
 *@file_to: the path to destination file
 *
 *Return: 0
 */

int cp(const char *file_from, const char *file_to)
{
int fd_from, fd_to;
size_t bytes_read;
char buffer[1024];

/* Open the source file */

fd_from = open(file_from, O_RDONLY);
if (fd_from < 0)
{
fprintf(stderr, "Error: Can't read to file %s\n", file_from);
return (1);
}

/* Create the destination file if it doesn't already exist. */

fd_to = open(file_to, O_CREAT | O_TRUNC | O_WRONLY, 0664);
if (fd_to < 0)

{
fprintf(stderr, "Error : Can't write to file %s\n", file_to);

close(fd_from);
return (2);
}


while ((bytes_read = read(fd_from, buffer, sizeof(buffer))) > 0)
{
write(fd_to, buffer, bytes_read);
}

close(fd_from);
close(fd_to);

return (0);
}

int main(int argc, char *argv[])
{
int status;
if (argc != 2)
{
fprintf(stderr, "Usage: cp file_from file_to\n");
return (1);
}

status = cp(argv[1], argv[2]);
{
if (status != 0)
return (1);
}

 return (status);
}
