/* Q138: Enum Names and Values Using Loop */

#include <stdio.h>

enum traffic {
    RED,
    YELLOW,
    GREEN
};

int main() {
    char *names[] = {"RED", "YELLOW", "GREEN"};

    for (int i = 0; i < 3; i++) {
        printf("%s=%d\n", names[i], i);
    }

    return 0;
}

/* Output:
   RED=0
   YELLOW=1
   GREEN=2
*/