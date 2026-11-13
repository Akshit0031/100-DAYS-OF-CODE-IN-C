#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    int marks;
};

int main() {
    struct Student s[5];
    int i;

    // Input details of 5 students
    for (i = 0; i < 5; i++) {
        scanf("%49s", s[i].name);
        scanf("%d", &s[i].roll_no);
        scanf("%d", &s[i].marks);
    }

    // Print details in tabular form
    printf("Name\tRoll\tMarks\n");

    for (i = 0; i < 5; i++) {
        printf("%s\t%d\t%d\n",
               s[i].name, s[i].roll_no, s[i].marks);
    }

    return 0;
}
