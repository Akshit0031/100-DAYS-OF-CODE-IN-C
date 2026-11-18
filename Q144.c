/* Q144: Structure as Function Parameter */

#include <stdio.h>

struct Student {
    char name[20];
    int roll, marks;
};

void display(struct Student s) {
    printf("Name: %s | Roll: %d | Marks: %d",
           s.name, s.roll, s.marks);
}

int main() {
    struct Student s = {"Neha", 104, 92};

    display(s);

    return 0;
}

/* Output:
   Name: Neha | Roll: 104 | Marks: 92
*/