#include <stdio.h>
#include <stdlib.h>
#define N 5
#define M 7

int main()
{
    int i, j;
    int mt[N][M];
  
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < M; j++)
        {
            *(*(mt+i)+j)=1+rand()%100;
            printf("%4d",  *(*(mt+i)+j));
        }
        printf("\n");
    }
}