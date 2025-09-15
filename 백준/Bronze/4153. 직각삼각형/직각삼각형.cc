#include <stdio.h>
int main(void)
{

    int a, b, c;

    while (1)
    {
        scanf("%d %d %d", &a, &b, &c);
        if (a == 0 && b == 0 && c == 0)
        {
            break;
        }

        int max = a;
        if (b > max)
            max = b;
        if (c > max)
            max = c;

        if (max == a)
        {
            if (b * b + c * c == a * a)
                printf("right\n");
            else
                printf("wrong\n");
        }

        else if (max == b)
        {
            if (a * a + c * c == b * b)
                printf("right\n");
            else
                printf("wrong\n");
        }

        else
        {
            if (a * a + b * b == c * c)
                printf("right\n");
            else
                printf("wrong\n");
        }
    }
    return 0;
}