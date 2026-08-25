#include <stdio.h>

int main() {
    int n = 10;
    int binary = 0, place = 1;

    while(n > 0) {
        binary = binary + (n % 2) * place;
        n = n / 2;
        place = place * 10;
    }

    printf("%d", binary);

    return 0;
}