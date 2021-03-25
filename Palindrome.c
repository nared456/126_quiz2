#include <stdio.h>
int main()
{
    int N, i, k, m;
    int Palindrome = 0;
    scanf("%d", &N);
    for (i = 1; i <= N; i++)
    {
        if (i >= 11)
        {
            break;
        }
        else
        {
            if (i % 10 != 0)
            {
                Palindrome++;
            }
        }
    }
    if (N > 10)
    {
        for (i + 1; i <= 100; i++)
        {
            k = i % 10;
            m = i - k;
            if (k % m == 0)
            {
                Palindrome++;
            }
        }
    }

    printf("%d", Palindrome);
}