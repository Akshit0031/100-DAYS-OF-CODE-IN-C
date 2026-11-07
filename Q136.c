/* Q136: Calculator Using Enum */

#include <stdio.h>

enum operation {
    ADD = 1,
    SUBTRACT,
    MULTIPLY
};

int main() {
    enum operation choice;
    int a, b;

    scanf("%d", &choice);
    scanf("%d %d", &a, &b);

    switch (choice) {
        case ADD:
            printf("%d", a + b);
            break;

        case SUBTRACT:
            printf("%d", a - b);
            break;

        case MULTIPLY:
            printf("%d", a * b);
            break;

        default:
            printf("Invalid choice");
    }

    return 0;
}

/* Sample:
   1
   10 20

   Output:
   30
*/