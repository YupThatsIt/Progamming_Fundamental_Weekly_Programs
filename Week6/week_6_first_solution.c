#include <stdio.h>

int main()
{
    int arr1[3][3], arr2[3][3];
    int m, n;

    scanf("%d %d", &m, &n);

    for (int i = 0; i < m; i++){
        int input;
        for (int j = 0; j < n; j++){
            scanf("%d", &input);
            arr1[i][j] = input;
        }
    }

    for (int i = 0; i < m; i++){
        int input;
        for (int j = 0; j < n; j++){
            scanf("%d", &input);
            arr2[i][j] = input;
        }
    }

    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            printf("%d ", arr1[i][j] + arr2[i][j]);
        }
        printf("\n");
    }
    return 0;
}