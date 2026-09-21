#include <stdio.h>

int main() {
    char s[100];
    int i, n = 0;

    scanf("%s", s);

    while(s[n] != '\0')
        n++;

    for(i = n - 1; i >= 0; i--)
        printf("%c", s[i]);

    return 0;
}