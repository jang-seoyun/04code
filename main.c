#include <studio.h>

int main (void){
    int a, b;

    printf("input two integers : ");

    scanf("%d %d", &a, &b);

    printf("+ result is %d\n", a + b);
    printf("- result is %d\n", a - b);
    printf("* result is %d\n", a * b);
    printf("/ result is %d\n", a / b);
    printf("%% result is %d\n", a % b);

    return 0;
}