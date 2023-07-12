#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

#define ELF_HEADER_SIZE 64

int main(int argc, char *argv[])
{

char *filename = argv[1];
unsigned char header[64];
int fd;

(void)argc;
fd = open(filename, O_RDONLY);
if (fd < 0)

{
fprintf(stderr, "Usage: elf_header elf_filename\n");
return (1);
}

if (fd == -1) 
{
return (1);
}

if(read(fd, header, sizeof(header)) != sizeof(header))
{
fprintf(stderr, "Failed to read ELF header\n");
return (1);
}

if (memcmp(header, "\x7f\x45\x4c\x46", 4) != 0)
{
fprintf(stderr, "Not an ELF file\n");
return (1);
}

printf("Magic: %.4d\n", *(int *)header);
printf("Class: %d\n", header [4]);
printf("Data: %d\n", header[5]);
printf("Version: %.2x%.2x\n", header[6], header[7]);
printf("OS/ABI: %.2x%.2x\n", header[8], header[9]);
printf("ABI Version: %.2x%.2x\n", header[10], header[11]);
printf("Type: %.4s\n", header + 12);
printf("Entry point address: %.8x\n", *(unsigned int *)(header + 56));

close(fd);
return 0;
}
