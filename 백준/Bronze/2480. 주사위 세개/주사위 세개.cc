#include <stdio.h>
int main(void)
{

    int a, b, c;
    int price;
    scanf("%d %d %d", &a, &b, &c);

    if (a == b && b == c)
    {
        price = 10000 + a * 1000;
    }

    else if (a == b || a == c)
    {
        price = 1000 + a * 100;
    }
    else if (b == c) 
    {                    
        price = 1000 + b * 100;
    } 
    else
    {
        int max = a;
        if (b > max)
            max = b;
        if (c > max)
            max = c;
        price = max * 100;
    }
    printf("%d", price);
    return 0;
}