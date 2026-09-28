#include <stdio.h>
int main() {
    int day, month, year;
    char name[12];
    printf("enter date:");
    scanf("%d/%d/%d", &day, &month, &year);
    char months[12][4] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
    printf("date: %d/%s/%d\n", day, months[month - 1], year);
    return 0;
}