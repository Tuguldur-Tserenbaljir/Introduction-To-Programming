#include <stdio.h>
#include<math.h>
#include<stdlib.h>
#define size 10
int main(){
    double Celsius;
    double Fah;
    scanf("%lf", &Celsius);
    Fah = 1.8*Celsius+32;
    printf("%lf\n", Fah);
    return 0;

}


