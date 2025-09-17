#include <stdio.h>
int main(void)
{

    int n;
    scanf("%d", &n);

    int result = 0;

    for (int i = 0; i < n; i++)
    {
        int num = i;
        int sum = i;

        while (num > 0)
        {
            sum += num % 10;
            num /= 10;
        }

        if (sum == n)
        {
            result = i;
            break;
        }
    }
    printf("%d", result);
    return 0;
}