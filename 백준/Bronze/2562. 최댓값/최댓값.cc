#include <stdio.h>
int main(void) {

    int arr[9];
    int n = 0;
    int count = 0;

    for(int i=0; i<9; i++) {
        scanf("%d", &arr[i]);
        if (n < arr[i]) {
            n = arr[i];
            count = i + 1;
        }
    }
    printf("%d\n", n);
    printf("%d", count);
    return 0;
}