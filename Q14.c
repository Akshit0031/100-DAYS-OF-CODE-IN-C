
// Q14
#include <stdio.h>

int main()
{
    char ch;

    printf("Enter character: ");
    scanf("%c", &ch);

    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
        printf("Vowel");
    else
        printf("Consonant");

    return 0;
}