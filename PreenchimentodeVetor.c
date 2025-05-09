#include <stdio.h>

int main() {

int N[10];
int V;
int i;

  scanf("%d", &V);

N[0] = V;

       for(int i = 1; i < 10; i++) {//isso aq para preencher o vetor
          N[i] = N[i-1] * 2; 

       }

       for(int i = 0; i < 10; i++) { //isso é para valores do vetor
          printf("N[%d] = %d\n", i, N[i]);
       }

       return 0

          }