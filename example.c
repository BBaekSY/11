#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int grade[5];
    int *ptr = grade;
    int sum = 0;
    int i;

    for (i = 0; i < 5; i++) {
        printf("grade[%d] = ", i);
        fflush(stdout);

        if (scanf("%d", &grade[i]) != 1) {
            printf("Please enter an integer.\n");
            return 1;
        }
    }

    printf("Scores:");
    for (i = 0; i < 5; i++) {
        printf(" %d", *(ptr + i));
        sum += *(ptr + i);
    }

    printf("\nAverage: %.2f\n", sum / 5.0);

    return 0;
}