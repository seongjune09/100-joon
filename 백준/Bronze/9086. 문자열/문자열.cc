#include <stdio.h>
int main(void) {
    int n;
    scanf("%d", &n);

    char str[101];

    for(int i=0; i<n; i++) {
        scanf("%s", str);

        int len = 0;
        while (str[len] != '\0') {
            len ++;
        } 
        printf("%c%c\n", str[0], str[len-1]);
    }
    return 0;
}