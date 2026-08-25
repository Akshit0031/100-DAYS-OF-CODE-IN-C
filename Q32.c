#include <stdio.h>

int main() {
    int n = 121;
    int original = n, rev = 0;

    while(n > 0) {
        rev = rev * 10 + n % 10;
        n = n / 10;
    }

    if(original == rev)
        printf("Palindrome");
    else
        printf("Not palindrome");

    return 0;
}