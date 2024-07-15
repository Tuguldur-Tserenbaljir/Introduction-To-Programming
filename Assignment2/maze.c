#include <stdlib.h>
#include <stdio.h>


int solvemaze(int r, int c,int x,int y,char* result_maze,const char* maze) {
    //if destination is reached, maze is solved
    //destination is the last cell(maze[SIZE-1][SIZE-1])
    if((r==x-1) && (c==0)) {
        result_maze[r*y+c] = '2';
        return 1;
    }
    //checking if we can visit in this cell or not
    //the indices of the cell must be in (0,SIZE-1)
    //and solution[r][c] == 0 is making sure that the cell is not already visited
    //maze[r][c] == 0 is making sure that the cell is not blocked
    if(r>=0 && c>=0 && r<x && c<y && result_maze[r*y+c] == '0' && maze[r*y+c] == '0'){
        //if safe to visit then visit the cell
        result_maze[r*y+c] = '2';
        //going down
        if(solvemaze(r+1, c,x,y,result_maze,maze))
            return 1;
        //going left
        if(solvemaze(r, c-1,x,y,result_maze,maze))
            return 1;

        //going right
        if(solvemaze(r, c+1,x,y,result_maze,maze))
            return 1;
        //going up
        if(solvemaze(r-1, c,x,y,result_maze,maze))
            return 1;
        //backtracking
        result_maze[r*y+c] = '0';
        return 0;
    }
    return 0;
}
void find_path(const char *maze, const int m, const int n, char *result_maze){

    if (maze[n-1]!='0' || maze[(m-1)*n]!='0'){
        printf("No way\n");
        exit(0);
    }
    int i,j;
    for(i=0; i<m; i++) {
        for(j=0; j<n; j++) {
            result_maze[i*n+j] = '0';
        }
    }
    if (solvemaze(0,n-1,m,n,result_maze,maze)==0)
        *result_maze='X';
}
