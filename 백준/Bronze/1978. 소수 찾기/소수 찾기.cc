#include <stdio.h>
int main(void)
{

    int n;
    int m[100];
    int count = 0;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &m[i]);
    }

    for (int i = 0; i < n; i++)
    {
        int num = m[i];
        int isPrime = 1;

        if (num < 2)
        {
            isPrime = 0;
        }

        else
        {
            for (int j = 2; j * j <= num; j++)
            {
                if (num % j == 0)
                {
                    isPrime = 0;
                    break;
                }
            }
        }
        if (isPrime)
        {
            count++;
        }
    }
    printf("%d", count);
    return 0;
}