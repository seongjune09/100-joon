#include <stdio.h>
int main(void) {
    char s[101];
    int len = 0;
    scanf("%s", s);
    
    while (s[len] != '\0') {
        len++;
    }
    printf("%d", len);
    return 0;
}