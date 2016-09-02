#include <stdlib.h>
#include <stdio.h>

int **alloc_grid(int, int);
/* void print_grid(int **, int, int);

print_grid(** grid, int width, int height){
  int *grid[5][5];
  int i,j
  for (i = 0; i < height; i++) {
    for (j = 0; j < width; j++) {
    printf("%d", grid[i][j]);
    }
  printf("\n");
  }
}
*/

int main(){
  int **grid;

  grid = alloc_grid(5, 5);
  /* print_grid(grid, 5, 5); */
  grid[2][3] = 98;
  grid[4][4] = 402;
  printf("I'm printing grid[2][3] %d\n", grid[2][3]);
  printf("I'm printing grid[4][4] %d\n", grid[4][4]);
  printf("I'm printing grid[0][0] %d\n", grid[0][0]);
  printf("I'm printing grid[0][4] %d\n", grid[0][4]);
  printf("I'm printing grid[4][0] %d\n", grid[4][0]);
  /* print_grid(grid, 5, 5); */
  return (0);
}
