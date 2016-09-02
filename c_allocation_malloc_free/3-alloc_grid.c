#include <stdio.h>
#include <stdlib.h>
/* Allocate Width X Height X size of integer */

int **alloc_grid(int, int);

int **alloc_grid(int width, int height){
  int i = 0;
  int **alloc_grid = malloc(height * sizeof(int *));
	for(i = 0; i < height; i++){
    alloc_grid[i] = malloc(width * sizeof(int));
    *alloc_grid[i] = 0;
  }
  if (alloc_grid == NULL){
    return NULL;
  }
  /* free and return value */
  return(alloc_grid);
  free(alloc_grid);
}
