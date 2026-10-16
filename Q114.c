/* Q114: Longest Substring Without Repeating Characters */

#include <stdio.h>
#include <string.h>

int main() {
    char s[] = "abcabcbb";
    int i, j, k, len, max = 0;

    len = strlen(s);

    for (i = 0; i < len; i++) {
        int count[256] = {0};
        for (j = i; j < len; j++) {
            if (count[(unsigned char)s[j]] == 1)
                break;

            count[(unsigned char)s[j]] = 1;
            k = j - i + 1;

            if (k > max)
                max = k;
        }
    }

    printf("%d", max);

    return 0;
}

/* Sample Test Cases:
   s = "abcabcbb"  Output: 3
   s = "bbbbb"     Output: 1
   s = "pwwkew"    Output: 3
*/