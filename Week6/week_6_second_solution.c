#include <stdio.h>

//Using function which return pointer to an array
int *setMatrix(int m, int n){
    static int arr[9];
    int input;
    for (int i = 0; i < m * n; i++){
        scanf("%d", &input);
        arr[i] = input;
    }
    return arr;
}

int main()
{
    int *ptr, arr1[3][3], arr2[3][3];
    int m, n, k;

    scanf("%d %d", &m, &n);

    ptr = setMatrix(m, n);
    k = 0;
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            arr1[i][j] = *(ptr + k);
            k++;
        }
    }

    ptr = setMatrix(m, n);
    k = 0;
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            arr2[i][j] = *(ptr + k);
            k++;
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