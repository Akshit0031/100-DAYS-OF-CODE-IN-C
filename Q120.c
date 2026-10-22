/* Q120: Convert String to Sentence Case */

#include <stdio.h>
#include <ctype.h>

int main() {
    char str[] = "I am trying to build logic.";
    int i, newWord = 1;

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            newWord = 1;
        } else {
            if (newWord)
                str[i] = toupper(str[i]);
            else
                str[i] = tolower(str[i]);

            newWord = 0;
        }
    }

    printf("%s", str);

    return 0;
}

/* Sample Test Cases:
   "I am trying to build logic."
   Output: I Am Trying To Build Logic

   "The classes are supposed to start early."
   Output: The Classes Are Supposed To Start Early

   "We are going to look at 26 different test cases."
   Output: We Are Going To Look At 26 Different Test Cases
*/