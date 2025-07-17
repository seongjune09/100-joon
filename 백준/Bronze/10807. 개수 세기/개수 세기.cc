#include <stdio.h>
int main(void) {
    int n,a,b;
    int arr[100];
    int count = 0;

    scanf("%d", &n);

    for(int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &b);

    for(int i=0; i<n; i++) {
        if (arr[i] == b){
            count ++;
        }
    }
    printf("%d", count);
    return 0;
}