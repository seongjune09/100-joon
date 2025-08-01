#include <stdio.h>
int main(void) {

    int a,b;
    int result[100];
    int sum = 0;
    
    while (1) {
        scanf("%d %d", &a,&b);
        if (a == 0 && b == 0) 
            break;
        result[sum++] = a + b;
    }
    for(int i=0; i<sum; i++) {
        printf("%d\n", result[i]);
    }
    return 0;
}