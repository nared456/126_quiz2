#include <stdio.h>
int main()
{
    int N, i = 2, ch = 0, j=1;
    scanf("%d", &N);
    int lo = 0;
    while (i <= 1000000)
    {
        if (N % (i * i * i) == 0)
        {
            printf("Not Cube Free");
            ch++;
            break;
        }
        i++;
    }
    if (ch != 1)
    {
        int k = 2;
        while (j <= N)
        {
            if (j % (k * k * k) == 0)
            {
                lo -= 1;
            }
            else
            {
                lo +=1;
            }
            k++;
            j++;
        }
        printf("%d",lo);
    }
}