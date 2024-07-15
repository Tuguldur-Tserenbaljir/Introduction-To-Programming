#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int array[n][n];
    int bingo[n][n];
    int sequence=0;//input from user
    int win_or_lose=0;
    int diagonal_1;//counter
    int diagonal_2;//counter
    for (int c=0; c<n; c++){
        for(int r=0; r<n; r++){
            bingo[c][r]=0; //setting all the values of the new array to 0 to avoid error
        }
    }
    for (int c=0; c<n; c++){
        for(int r=0; r<n; r++){
            scanf("%d",&array[c][r]); //getting all the values from the user for the bingo matrix
        }
    }
    while(scanf("%d",&sequence)&&sequence!=-1){
        diagonal_1=0;//counter
        diagonal_2=0;//counter
        for (int c=0; c<n; c++){
            int row=0;//counter
            int column=0;//counter
            for(int r=0; r<n; r++){
                if(sequence==array[c][r]){
                    bingo[c][r]=1; //if the user inputs the right number in array passing it as 1
                }
                row+=bingo[c][r];
                column+=bingo[r][c];
                if(c==r){diagonal_1+=bingo[c][r];}//algorithm for the diagonals
                if(c==n-1-r){diagonal_2+=bingo[c][r];}
            }
            if(row==n){
                for(int r=0; r<n; r++){
                    bingo[c][r]=2; //assigning  for bingo in rows
                }
                win_or_lose=1;//passing on 1 if there is a bingo
            }
            if(column==n){
                for(int r=0; r<n; r++){
                    bingo[r][c]=2;
                }
                win_or_lose=1;//passing on 1 if there is a bingo
            }
        }
        if(diagonal_1==n){
            win_or_lose=1;//passing on 1 if there is a bingo
        }
        if(diagonal_2==n){
            win_or_lose=1;//passing on 1 if there is a bingo
        }
        if (win_or_lose==1){
            break;
        }

    }
    //printing out win or lose
    if (win_or_lose==1){
        printf("won\n");
    }else{
        printf("lost\n");
    }

    for (int i=0;i<n;i++){
        for(int r=0;r<n;r++){
            if(diagonal_2==n){if(i==n-1-r){bingo[i][r]=2;}} //checking if the diagonals are bingo
            if(diagonal_1==n){if(i==r){bingo[i][r]=2;}} //checking if the diagonals are bingo
            int asterisk_checker=0; //checking if to print or not to print asterisk
            if (bingo[i][r]==2){
                asterisk_checker=1;
                if (array[i][r]<10){
                    printf("**");//printing two ** in front of numbers that are single digit
                }else{
                    printf("*");//printf 1 * in front of numbers that are double digit
                }
            }
            if (asterisk_checker==0){
                if (array[i][r]<10){
                    printf(" ");//double space for the single digit
                }
                printf(" ");//single space for the double digit
            }
            printf("%d",array[i][r]); //printing new line to print out the next row of numbers
            if (r<n-1){
                printf(" ");//printing new line to print out the next row of numbers
            }
        }
        printf("\n"); //new line for the next test
    }
    return 0;
}