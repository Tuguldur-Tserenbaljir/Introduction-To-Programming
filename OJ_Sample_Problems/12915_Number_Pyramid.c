#include <stdio.h>
#include<math.h>
#include<stdlib.h>
#define size 10
int main(){
    int n,i,k;
    scanf("%d",&n);
    for(i =1 ; i<=n;i++){
        for(k=1;k<=i;k++){
            printf("%d",i);
        }
       printf("\n");
    }

}


