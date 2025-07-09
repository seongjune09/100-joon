#include <stdio.h>
#include <stdlib.h> 
int main(void) {
    long long n,m;
    scanf("%lld %lld", &n,&m);
    printf("%lld\n", llabs(n-m));
    return 0;
}