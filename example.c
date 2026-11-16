#include <stdio.h>

void swap_value(int x, int y)
{
    int temp = x;
    x = y;
    y = temp;
}

void swap_pointer(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main(void)
{
    int a = 3;
    int b = 5;

    swap_value(a, b);
    printf("After swap_value:   a=%d, b=%d\n", a, b);

    swap_pointer(&a, &b);
    printf("After swap_pointer: a=%d, b=%d\n", a, b);

    return 0;
}