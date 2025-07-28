#include <stdio.h>
#include <stdlib.h> 

int main(void) {
    char a[101], b[101], c[101];

    scanf("%s", a);
    scanf("%s", b);
    scanf("%s", c);

    int result1 = atoi(a) + atoi(b) - atoi(c);

    char ab[202];
    sprintf(ab, "%s%s", a, b);  

    int result2 = atoi(ab) - atoi(c);

    printf("%d\n", result1);
    printf("%d\n", result2);

    return 0;
}