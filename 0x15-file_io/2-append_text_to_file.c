#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>

/**
 *append_text_to_file - a function that appends text to end of a file
 *@filename: the name to be appended text to
 *@text_content: the text content to appended to a file
 *@strlen: a function that extracts the len of a str
 *
 *Return: 0
 */


int append_text_to_file(const char *filename, char *text_content)
{
int fd;
ssize_t bytes_written;

if (filename == NULL)
return (-1);

fd = open(filename, O_WRONLY | O_APPEND);
if (fd == -1)
return (-1);

if (text_content != NULL)
{
bytes_written = write(fd, text_content, strlen(text_content));
if (bytes_written == -1)
{
close(fd);
return (-1);
}
}
close(fd);
return (-1);
}
