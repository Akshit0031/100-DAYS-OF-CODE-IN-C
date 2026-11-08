/* Q137: User Roles Using Enum */

#include <stdio.h>

enum role {
    ADMIN,
    USER,
    GUEST
};

int main() {
    enum role r = GUEST;

    switch (r) {
        case ADMIN:
            printf("Welcome Admin!");
            break;

        case USER:
            printf("Welcome User!");
            break;

        case GUEST:
            printf("Welcome Guest!");
            break;
    }

    return 0;
}

/* Sample:
   Input: GUEST

   Output:
   Welcome Guest!
*/