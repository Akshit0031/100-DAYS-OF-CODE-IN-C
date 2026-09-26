#include <stdio.h>
#include <string.h>

int main() {
    char a[100], b[100], temp[200];

    scanf("%s %s", a, b);

    if(strlen(a) == strlen(b)) {
        strcpy(temp, a);
        strcat(temp, a);

        if(strstr(temp, b))
            printf("Rotation");
        else
            printf("Not rotation");
    } else {
        printf("Not rotation");
    }

    return 0;
}