#include <stdio.h>

int main() {
    char s[100];
    int i, spaces = 0, digits = 0, special = 0;

    fgets(s, sizeof(s), stdin);

    for(i = 0; s[i] != '\0'; i++) {
        if(s[i] == ' ')
            spaces++;
        else if(s[i] >= '0' && s[i] <= '9')
            digits++;
        else if(!((s[i] >= 'a' && s[i] <= 'z') ||
                  (s[i] >= 'A' && s[i] <= 'Z') ||
                  s[i] == '\n'))
            special++;
    }

    printf("Spaces=%d, Digits=%d, Special=%d", spaces, digits, special);

    return 0;
}