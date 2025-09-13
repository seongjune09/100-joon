#include <stdio.h>
int main(void)
{
    int n, m;
    scanf("%d %d", &n, &m);

    if (n == 2 && m == 18)
    {
        printf("Special");
    }
    else if (n > 2 || (n == 2 && m > 18))
    {
        printf("After");
    }
    else
    {
        printf("Before");
    }
    return 0;
}