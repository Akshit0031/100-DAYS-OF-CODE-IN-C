#include <stdio.h>

int main()
{
    char binary[] = "1010";
    int i = 0;

    while(binary[i] != '\0')
    {
        if(binary[i] == '0')
            binary[i] = '1';
        else
            binary[i] = '0';

        i++;
    }

    printf("%s", binary);

    return 0;
}