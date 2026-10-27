/* Q125: Append Text to a File */

#include <stdio.h>

int main() {
    FILE *fp;
    char text[100] = "This is appended text.";

    fp = fopen("data.txt", "a");

    if (fp == NULL) {
        printf("File cannot be opened");
        return 1;
    }

    fprintf(fp, "\n%s", text);

    fclose(fp);

    printf("File updated successfully with appended text.");

    return 0;
}

/* Sample:
   Existing file: data.txt
   Content: Hello world

   User text: This is appended text.

   Output:
   File updated successfully with appended text.

   Updated file:
   Hello world
   This is appended text.
*/