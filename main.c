#include <studio.h>

int main (void){
    int input_sec, hour, min. sec;

    printf("input the second : ");
    scanf("%d", &input_sec);

    hour = input_sec / 3600;
    min = (input_sec % 3600) / 60;
    sec = input_sec % 60;

    printf("The time for %d second is %d : %d : %d\n", input_sec, hour, min, sec);

    return 0;
}