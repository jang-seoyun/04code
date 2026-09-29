#include <studio.h>

int main (void){
    int input_sec, min, sec;

    printf("input the second :");
    scanf("%d, &input_sec");

    min = input_sec / 60; 
    sec = input_sec % 60;

    printf("the time is %d : %d\n", min, sec);
    return 0;
}