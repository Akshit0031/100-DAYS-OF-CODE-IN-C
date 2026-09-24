#include <stdio.h>

int main() {
    char s[100];
    int count[26] = {0};
    int i;

    fgets(s, sizeof(s), stdin);

    for(i = 0; s[i] != '\0'; i++) {
        if(s[i] >= 'a' && s[i] <= 'z') {
            count[s[i] - 'a']++;

            if(count[s[i] - 'a'] == 2) {
                printf("%c", s[i]);
                break;
            }
        }
    }

    return 0;
}