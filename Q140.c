#include <stdio.h>

enum Gender {
    MALE,
    FEMALE,
    OTHER
};

struct Person {
    char name[50];
    int age;
    enum Gender gender;
};

int main() {
    struct Person p;

    printf("Enter name: ");
    scanf("%49s", p.name);

    printf("Enter age: ");
    scanf("%d", &p.age);

    printf("Enter Gender (0 = Male, 1 = Female, 2 = Other): ");
    scanf("%d", (int *)&p.gender);

    printf("\nName: %s\n", p.name);
    printf("Age: %d\n", p.age);

    printf("Gender: ");

    if (p.gender == MALE)
        printf("Male\n");
    else if (p.gender == FEMALE)
        printf("Female\n");
    else if (p.gender == OTHER)
        printf("Other\n");
    else
        printf("Invalid Gender\n");

    return 0;
}
