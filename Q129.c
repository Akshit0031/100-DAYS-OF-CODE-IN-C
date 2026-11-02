/* Q129: Sum and Average from File */

#include <stdio.h>

int main() {
    FILE *fp;
    int num, sum = 0, count = 0;
    float average;

    fp = fopen("numbers.txt", "r");

    if (fp == NULL) {
        printf("File not found");
        return 1;
    }

    while (fscanf(fp, "%d", &num) == 1) {
        sum = sum + num;
        count++;
    }

    fclose(fp);

    if (count > 0) {
        average = (float)sum / count;

        printf("Sum = %d\n", sum);
        printf("Average = %.2f", average);
    }

    return 0;
}

/* Sample:
   numbers.txt: 10 20 30 40 50

   Output:
   Sum = 150
   Average = 30.00
*/