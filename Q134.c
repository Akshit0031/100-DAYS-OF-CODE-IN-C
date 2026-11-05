/* Q134: Status Messages Using Enum */

#include <stdio.h>

enum status {
    SUCCESS,
    FAILURE,
    TIMEOUT
};

int main() {
    enum status result = FAILURE;

    switch (result) {
        case SUCCESS:
            printf("Operation successful");
            break;

        case FAILURE:
            printf("Operation failed");
            break;

        case TIMEOUT:
            printf("Operation timed out");
            break;
    }

    return 0;
}

/* Sample:
   Input: FAILURE
   Output: Operation failed
*/