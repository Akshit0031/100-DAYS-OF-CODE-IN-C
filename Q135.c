/* Q135: Explicit Values in Enum */

#include <stdio.h>

enum numbers {
    A = 10,
    B,
    C
};

int main() {
    printf("A=%d\n", A);
    printf("B=%d\n", B);
    printf("C=%d\n", C);

    return 0;
}

/* Output:
   A=10
   B=11
   C=12
*/