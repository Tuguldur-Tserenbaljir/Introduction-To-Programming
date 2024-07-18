#include <stdio.h>
#include<math.h>
#include<stdlib.h>

int main(void) {
  char s;
  double a, b, result = 0;
  scanf("%lf%c%lf", &a, &s, &b);
  if (s == '+' && b !=0){
    result = a + b;
    printf("%0.3f\n", result);
  }
  else if (s == '-' && b !=0){
    result = a - b;
    printf("%0.3f\n", result);
  }
  else if (s == '/' && b !=0){
    result = a / b ;
    printf("%0.3f\n", result);
  }
  else if (s == '*' && b !=0){
    result = a * b;
    printf("%0.3f\n", result);
  }
  else if (s != '+'||s != '*'||s != '/'||s != '-'||b == 0){
    printf("Error\n");
  }
  return 0;
}