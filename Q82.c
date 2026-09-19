#include <stdio.h>

int main() {
    char s[100];
    int i=0;

    scanf("%[^\n]",s);

    while(s[i]!='\0') {
        printf("%c\n",s[i]);
        i++;
    }

    return 0;
}