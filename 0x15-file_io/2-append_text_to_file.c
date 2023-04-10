#include <fcntl.h>
#include <stdio.h>
#include "main.h"
#include <unistd.h>

/**
 *append_text_to_file - appends text at the end of a file 
 *@filename: name of the file to append to
 *@text_content: NULL terminated string to add at the end of the file
 *
 *Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
int my_fd;
ssize_t bytes_written;
size_t text_len = 0;

if (filename == NULL)
return (-1);

if (text_content != NULL)
{
while (text_content[text_len] != '\0')
text_len++;
}

my_fd = open(filename, O_WRONLY | O_APPEND);

if (my_fd == -1)
return (-1);

if (text_content != NULL)
{
bytes_written = write(my_fd, text_content, text_len);

if (bytes_written == -1)
{
close(my_fd);
return (-1);
}
}

close (my_fd);
return (-1);
}
