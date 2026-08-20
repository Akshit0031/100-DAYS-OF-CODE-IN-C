// Q22

#include <stdio.h>

int main()
{
    int cp = 1000;   // Input 1
    int sp = 1200;   // Input 2

    if(sp > cp)
        printf("Profit 20%%");
    else if(cp > sp)
        printf("Loss 20%%");
    else
        printf("No Profit No Loss");

    return 0;
}