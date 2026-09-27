#include <stdio.h>

int main() {
    char name[100];
    int i, space = 0;

    fgets(name, sizeof(name), stdin);

    printf("%c.", name[0]);

    for (i = 0; name[i] != '\0'; i++) {
        if (name[i] == ' ')
            space++;
    }

    for (i = 0; name[i] != '\0'; i++) {
        if (name[i] == ' ' && space > 1) {
            printf("%c.", name[i + 1]);
            space--;
        }
    }

    for (i = 0; name[i] != '\0'; i++) {
        if (name[i] == ' ') {
            while (name[i] == ' ')
                i++;
            printf(" ");
            while (name[i] != '\n' && name[i] != '\0') {
                printf("%c", name[i]);
                i++;
            }
            break;
        }
    }

    return 0;
}