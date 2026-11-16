#include <stdio.h>

int main(void)
{
    char chars[2];
    int ints[2];
    double doubles[2];

    char *pc = chars;
    int *pi = ints;
    double *pd = doubles;

    printf("Before: pc=%p, pi=%p, pd=%p\n",
           (void *)pc, (void *)pi, (void *)pd);

    pc++;
    pi++;
    pd++;

    printf("After:  pc=%p, pi=%p, pd=%p\n",
           (void *)pc, (void *)pi, (void *)pd);

    printf("Bytes per step: char=%zu, int=%zu, double=%zu\n",
           sizeof(*pc), sizeof(*pi), sizeof(*pd));

    return 0;
}