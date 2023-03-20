#include "main.h"
#include  <stdlib.h>
#include  <stdio.h>

/**
 *free_grid - entry point
 *@grid - rows of the matrix
 *@height - columns of the matrix
 *Return: Nothing
 */

void free_grid(int **grid, int height)
{
int i;
int *p;
 
for (i = 0; i < height; i++)
{
p = grid[i];
free (p);   
}
free(grid);
}
