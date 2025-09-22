#include <stdio.h>
int main(void) {
    
    int n;
    int sum = 0;
    int min = 100;
    int search = 0;
    
    for(int i=0; i<7; i++) {
        scanf("%d", &n);
        
        if (n % 2 == 1) {
            sum += n;
            if (n < min) min = n;
            search = 1;
        }
    }
    if (search) 
        printf("%d\n%d", sum, min);
    else 
        printf("-1\n");
}