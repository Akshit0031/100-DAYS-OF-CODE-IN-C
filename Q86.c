#include <stdio.h>

int main() {
    char s[100];
    int i, n = 0, flag = 1;

    scanf("%s", s);

    while(s[n] != '\0')
        n++;

    for(i = 0; i < n / 2; i++) {
        if(s[i] != s[n - i - 1]) {
            flag = 0;
            break;
        }
    }

    if(flag)
        printf("Palindrome");
    else
        printf("Not palindrome");

    return 0;
}