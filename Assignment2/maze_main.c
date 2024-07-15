#include <stdio.h>
#include <stdlib.h>

void find_path(const char * const, int, int, char * const);
/* This is what you need to do. Your work is to implement this function */

int main(void){
  int m, n;

  scanf("%d %d", &m, &n); // Input maze size

  char *maze = (char*)malloc(sizeof(char)*m*n);
  char *result_maze = (char*)malloc(sizeof(char)*m*n);

  /*------- Initialize the two arrays ------*/
  for(int i=0; i<m; i++)
    for(int j=0; j<n; j++){
      *(maze+i*n+j) = '0';
      *(result_maze+i*n+j) = '0';
    }
  /*---------------------------------------*/


  /*--------- Input the maze array --------*/
  for(int i=0; i<m; i++)
    for(int j=0; j<n; j++)
      scanf("\n%c", (maze+i*n+j));
  /* --------------------------------------*/


  /*-------- Find out the maze path -------*/
  find_path(maze, m, n, result_maze);
  /*---------------------------------------*/


  /*----------- output result -------------*/
  if('X'==*result_maze)
    printf("No way\n");
  else{
    for(int i=0; i<m; i++){
      for(int j=0; j<n; j++)
          printf("%c",*(result_maze+i*n+j));
      printf("\n");
    }
  }
  /*---------------------------------------*/

  return 0;
}