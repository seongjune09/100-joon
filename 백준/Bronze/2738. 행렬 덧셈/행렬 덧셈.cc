#include <stdio.h>
int main(void) {
    int n,m;
    scanf("%d %d", &n,&m);

    int arr[n][m];
    int arr2[n][m];
    int result[n][m];
    
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            scanf("%d", &arr2[i][j]);
        }
    }

    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            result[i][j] = arr[i][j] + arr2[i][j]; 
        }
    }

    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            printf("%d\n", result[i][j]);
        }
    }
    printf("\n");
    return 0;
}