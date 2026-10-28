/* Q126: Check File and Read Content */

#include <stdio.h>

int main() {
    FILE *fp;
    char filename[100];
    char line[200];

    printf("Enter filename: ");
    scanf("%99s", filename);

    fp = fopen(filename, "r");

    if (fp == NULL) {
        printf("Error: File does not exist!");
    } else {
        printf("File opened successfully.\n");

        while (fgets(line, sizeof(line), fp) != NULL) {
            printf("%s", line);
        }

        fclose(fp);
    }

    return 0;
}

/* Sample Test Cases:

   Filename: sample.txt
   Output:
   File opened successfully.
   (Displays file content)

   Filename: nofile.txt
   Output:
   Error: File does not exist!
*/