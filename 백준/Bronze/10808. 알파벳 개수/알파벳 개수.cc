#include <stdio.h>
int main(void)
{

    char s[100];
    int count[26] = {0};

    scanf("%s", s);

    for (int i = 0; s[i] != '\0'; i++)
    {
        count[s[i] - 'a']++;
    }

    for (int i = 0; i < 26; i++)
    {
        printf("%d ", count[i]);
    }
    return 0;
}