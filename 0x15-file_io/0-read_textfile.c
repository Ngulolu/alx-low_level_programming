#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"


/**
 *read_textfile - reads a txt file and writes contents to STDOUT
 *@filename: name of file to read
 *@letters: maximum number of letters toread and print
 *
 *@return: number of letters read and printed or 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
int my_fd;
char *my_buffer;
ssize_t bytes_read, bytes_written;

/*checks for invalid inputs*/

if (filename == NULL)
{
return (0);
}

/*opens the file for reading */
my_fd = open(filename, O_RDONLY);
if (my_fd == -1)
{
return (0);
}

/*Allocate a buffer to hold the file contents*/
my_buffer = malloc(sizeof(char) * letters);
if (my_buffer == NULL)
{
close(my_fd);
free(my_buffer);
return (0);
}

/*Read up to "letters" bytes from file into the buffer*/
bytes_read = read(my_fd, my_buffer, letters);
if (bytes_read == -1)
{
close(my_fd);
free(my_buffer);
return (0);
}

/*Write the file contents to the standard output */
bytes_written = write(STDOUT_FILENO, my_buffer, bytes_read);
if (bytes_written == -1 || bytes_written != bytes_read)
{
close(my_fd);
free(my_buffer);
return (0);
}

/*cleans up and returns the number of letters read and printed*/
close(my_fd);
free(my_buffer);
return (bytes_read);
}
