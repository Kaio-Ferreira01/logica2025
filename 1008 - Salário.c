#include <stdio.h>

int main(){
  int N, H;
  double S, SALARY;

  scanf("%d %d %lf", &N, &H, &S);
  SALARY = H * S;
  
  printf("NUMBER = %d\n", N);
  printf("SALARY = U$ %.2lf\n", SALARY);
  
  return 0;
}