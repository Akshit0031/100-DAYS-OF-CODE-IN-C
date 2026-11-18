/* Q146: Nested Structure */

#include <stdio.h>

struct Date {
    int day, month, year;
};

struct Employee {
    char name[20];
    int id;
    struct Date joining;
};

int main() {
    struct Employee e = {
        "Raj", 11, {12, 5, 2020}
    };

    printf("Name: %s | ID: %d | Joining Date: %02d/%02d/%d",
           e.name, e.id,
           e.joining.day,
           e.joining.month,
           e.joining.year);

    return 0;
}

/* Output:
   Name: Raj | ID: 11 | Joining Date: 12/05/2020
*/