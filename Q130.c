/* Q130: Store and Read Student Records */

#include <stdio.h>

int main() {
    FILE *fp;
    char name[30];
    int roll, marks, i;

    fp = fopen("student.txt", "w");

    if (fp == NULL) {
        printf("File cannot be created");
        return 1;
    }

    fprintf(fp, "Asha 101 85\n");
    fprintf(fp, "Ravi 102 92\n");

    fclose(fp);

    fp = fopen("student.txt", "r");

    if (fp == NULL) {
        printf("File not found");
        return 1;
    }

    while (fscanf(fp, "%s %d %d", name, &roll, &marks) == 3) {
        printf("Name: %s | Roll: %d | Marks: %d\n",
               name, roll, marks);
    }

    fclose(fp);

    return 0;
}

/* Sample:
   Student 1: Asha, 101, 85
   Student 2: Ravi, 102, 92

   Output:
   Name: Asha | Roll: 101 | Marks: 85
   Name: Ravi | Roll: 102 | Marks: 92
*/