#include <stdio.h>
#include <string.h>
int main(void)
{

    int n;
    scanf("%d", &n);

    char result[n][4];

    for (int i = 0; i < n; i++)
    {
        char pw[101];
        scanf("%s", pw);
        int len = strlen(pw);

        if (len >= 6 && len <= 9)
            strcpy(result[i], "yes");
        else
            strcpy(result[i], "no");
    }
    for (int i = 0; i < n; i++)
    {
        printf("%s\n", result[i]);
    }

    return 0;
}