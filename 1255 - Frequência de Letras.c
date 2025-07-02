#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    int N;
    scanf("%d", &N);
    getchar(); 

    while (N--) {
        char line[201];
        fgets(line, sizeof(line), stdin);

        int frequencies[26] = {0}; 
        int maxFrequency = 0;

        for (int i = 0; line[i] != '\0'; i++) {
            char ch = tolower(line[i]); 
            if (ch >= 'a' && ch <= 'z') {
                frequencies[ch - 'a']++;
                if (frequencies[ch - 'a'] > maxFrequency) {
                    maxFrequency = frequencies[ch - 'a'];
                }
            }
        }

        for (int i = 0; i < 26; i++) {
            if (frequencies[i] == maxFrequency) {
                printf("%c", (char)('a' + i));
            }
        }
        printf("\n");
    }

    return 0;
}