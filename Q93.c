#include <stdio.h>

int main() {
    char a[100], b[100];
    int count[26] = {0}, i;

    scanf("%s %s", a, b);

    for(i = 0; a[i] != '\0'; i++)
        count[a[i] - 'a']++;

    for(i = 0; b[i] != '\0'; i++)
        count[b[i] - 'a']--;

    for(i = 0; i < 26; i++) {
        if(count[i] != 0) {
            printf("Not anagrams");
            return 0;
        }
    }

    printf("Anagrams");
    return 0;
}