#include <stdio.h>

int main(int argc, char *argv[]) {
    int sec, hour, minute, second;

    printf("input the second : ");
    scanf("%i", &sec);

    hour = sec / 3600;
    minute = (sec % 3600) / 60;
    second = sec % 60;

    printf("The time for %i second is %i : %i : %i\n", sec, hour, minute, second);

    return 0;
}