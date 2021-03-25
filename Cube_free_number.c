#include <stdio.h>
int main()
{
    int N, i = 2, ch = 0, j = 1, k;
    scanf("%d", &N);
    int lo = N;
    int new_lo = 0;
    while (i <= 100)
    {
        if (N % (i * i * i) == 0)
        {
            ch++;
            printf("Not Cube Free");
            break;
        }
        i++;
    }
    if (ch < 1)
    {
        for (j = 1; j < N; j++)
        {
            for (k = 2; k<=100; k++)
            {
                if (j % (k * k * k) == 0)
                {
                    new_lo += 1;
                }
            }
        }
        printf("%d", lo - new_lo);
    }
}