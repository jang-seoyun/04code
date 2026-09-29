#include <studio.h>

int main (void){
    int year;
    int is_leap;

    printf("input the year :");
    scanf("%d", &year);

    is_leap = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
    printf("is the year %d the leap year? : %d\n", year, is_leap);

    return 0;
}