/* Q143: Student with Highest Marks */

#include <stdio.h>

struct Student {
    char name[20];
    int roll;
    int marks;
};

int main() {
    struct Student s[3] = {
        {"Ravi", 101, 95},
        {"Sita", 102, 85},
        {"Aman", 103, 88}
    };

    int i, max = 0;

    for (i = 1; i < 3; i++) {
        if (s[i].marks > s[max].marks) {
            max = i;
        }
    }

    printf("Topper: %s (Marks: %d)",
           s[max].name, s[max].marks);

    return 0;
}

/* Output:
   Topper: Ravi (Marks: 95)
*/