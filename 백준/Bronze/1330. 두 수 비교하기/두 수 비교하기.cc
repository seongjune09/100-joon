#include <stdio.h>
int main(void){
    int n,m;
    scanf("%d %d", &n,&m);
    if(n > m) {
        printf("%s\n", ">");
    }
    else if(n == m) {
        printf("%s\n", "==");
    }
    else {
        printf("%s\n", "<");
    }
    
    return 0;
}