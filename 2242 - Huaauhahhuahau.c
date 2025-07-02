#include <stdio.h>
#include <string.h>

int main() {
    char risada[51];
    char vogais[51];
    int i, j = 0;

    scanf("%s", risada);


    for (i = 0; risada[i] != '\0'; i++) {
        if (risada[i] == 'a' || risada[i] == 'e' || risada[i] == 'i' ||
            risada[i] == 'o' || risada[i] == 'u') {
            vogais[j++] = risada[i];
        }
    }


    int palindromo = 1;
    for (i = 0; i < j / 2; i++) {
        if (vogais[i] != vogais[j - 1 - i]) {
            palindromo = 0;
            break;
        }
    }


    if (palindromo)
        printf("S\n");
    else
        printf("N\n");

    return 0;
}