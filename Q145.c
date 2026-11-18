/* Q145: Return Structure from Function */

#include <stdio.h>

struct Student {
    char name[20];
    int roll, marks;
};

struct Student topper() {
    struct Student s[3] = {
        {"Riya", 101, 89},
        {"Karan", 102, 96},
        {"Meena", 103, 92}
    };

    int i, max = 0;

    for (i = 1; i < 3; i++) {
        if (s[i].marks > s[max].marks) {
            max = i;
        }
    }

    return s[max];
}

int main() {
    struct Student s;

    s = topper();

    printf("Top Student: %s | Roll: %d | Marks: %d",
           s.name, s.roll, s.marks);

    return 0;
}

/* Output:
   Top Student: Karan | Roll: 102 | Marks: 96
*/