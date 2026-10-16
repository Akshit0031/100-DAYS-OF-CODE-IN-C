/* Q115: Check Anagram */

#include <stdio.h>
#include <string.h>

int main() {
    char s[] = "anagram";
    char t[] = "nagaram";
    int count[26] = {0};
    int i, flag = 1;

    if (strlen(s) != strlen(t)) {
        flag = 0;
    } else {
        for (i = 0; s[i] != '\0'; i++) {
            count[s[i] - 'a']++;
            count[t[i] - 'a']--;
        }

        for (i = 0; i < 26; i++) {
            if (count[i] != 0) {
                flag = 0;
                break;
            }
        }
    }

    if (flag)
        printf("Anagram");
    else
        printf("Not Anagram");

    return 0;
}

/* Sample Test Cases:
   s = "anagram", t = "nagaram"
   Output: Anagram

   s = "rat", t = "car"
   Output: Not Anagram
*/