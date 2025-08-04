#include <stdio.h>
int main(void) {

    int t,r;
    char c;
    char arr[1001];
    int x;

    scanf("%d", &t);
    while (t--) {
        scanf("%d ", &r);
        x = 0;

        while (1) {
            c = getchar();
            if(c == '\n' || c == EOF) break; 
            for(int i=0; i<r; i++) {
                arr[x++] = c;
            }
        }
        arr[x] = '\0';
        printf("%s\n", arr);
    }
    return 0;
}

