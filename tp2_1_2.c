
#include <stdio.h>
#include <stdlib.h>
#define N 20
int main()
{
    int i; double *punt;
    double vt[N];
    punt = vt;
    for (i = 0; i < N; i++)
    {
        vt[i] = 1 + rand() % 100;
        printf("%f", *punt++);
    }
    return 0;
}
