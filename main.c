#include <stdio.h>

int main(int argc, char *argv[]) {
    int sec, minute, second;

    printf("input the second :");
    scanf("%i", &sec);

    minute = sec / 60;
    second = sec % 60;

    printf("the time is %i : %i\n", minute, second);

    return 0;
}