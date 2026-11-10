/* Q139: Enum Stores Integer Values */

#include <stdio.h>

enum status {
    SUCCESS,
    FAILURE,
    TIMEOUT
};

int main() {
    printf("SUCCESS=%d, ", SUCCESS);
    printf("FAILURE=%d, ", FAILURE);
    printf("TIMEOUT=%d", TIMEOUT);

    return 0;
}

/* Output:
   SUCCESS=0, FAILURE=1, TIMEOUT=2
*/