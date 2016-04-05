#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int main(int argc, char **argv){
    int i = 0;
    int j = 0;
    for (i = 0; i < argc; i++){
    j = 0;
    // while(argv[i][j] != '\0'){
       printf("Argument %d letter %d : %c\n", i+1,j+1,argv[i+1][j+1]);
    // }
    return 0;
  }
}
