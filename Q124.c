/* Q124: Copy File Content */

#include <stdio.h>

int main() {
    FILE *source, *destination;
    char ch;

    source = fopen("source.txt", "r");
    destination = fopen("destination.txt", "w");

    if (source == NULL || destination == NULL) {
        printf("File cannot be opened");
        return 1;
    }

    while ((ch = fgetc(source)) != EOF) {
        fputc(ch, destination);
    }

    fclose(source);
    fclose(destination);

    printf("File copied successfully to destination.txt");

    return 0;
}

/* Sample:
   Source file: source.txt
   Content: Learning C File Handling

   Output:
   File copied successfully to destination.txt

   destination.txt content:
   Learning C File Handling
*/