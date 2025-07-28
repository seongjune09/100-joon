#include <stdio.h>
int main(void) {
    
    int n,a,b;
    scanf("%d", &n);   

    int result[n];
 
    for(int i=0; i<n; i++) {
        scanf("%d %d", &a,&b);
        result[i] = a + b;
    }
    for(int i=0; i<n; i++) {
        printf("%d\n", result[i]);
    }
    return 0;
}