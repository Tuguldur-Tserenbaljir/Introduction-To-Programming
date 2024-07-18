#include <stdio.h>
#include<math.h>
#include<stdlib.h>
int main(){
   int year;
   scanf("%d", &year);
   if (year % 400 == 0) {
      printf("leap year.\n");
   }
   else if (year % 100 == 0) {
      printf("non-leap year.\n");
   }
   else if (year % 4 == 0) {
      printf("leap year.\n");
   }
   else {
      printf("non-leap year.\n");
   }

   return 0;
}
