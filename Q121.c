/* Q121: Create a File and Write Data */

#include <stdio.h>

int main() {
    FILE *fp;
    char name[50] = "Rahul";
    int age = 23;

    fp = fopen("info.txt", "w");

    if (fp == NULL) {
        printf("File cannot be created");
        return 1;
    }

    fprintf(fp, "Name: %s\nAge: %d", name, age);

    fclose(fp);

    printf("File created successfully! Data written to info.txt");

    return 0;
}

/* Sample:
   Name: Rahul, Age: 23

   Output:
   File created successfully! Data written to info.txt
*/