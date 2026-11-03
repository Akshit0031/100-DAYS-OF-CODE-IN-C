/* Q132: Traffic Lights Using Enum */

#include <stdio.h>

enum traffic {
    RED,
    YELLOW,
    GREEN
};

int main() {
    enum traffic light = GREEN;

    switch (light) {
        case RED:
            printf("Stop");
            break;

        case YELLOW:
            printf("Wait");
            break;

        case GREEN:
            printf("Go");
            break;
    }

    return 0;
}

/* Sample Test Case:
   Input: GREEN
   Output: Go
*/