#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    int numSize = n * n, sumSize = (n * 2) + 2;

    int *num = calloc(numSize, sizeof(int));
    int *sum = calloc(sumSize, sizeof(int));

    for (int i = 0; i < n * n; i++){
        scanf("%d", num + i);
    }

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (i == j){
                *(sum + (sumSize - 2)) += *(num + j + (n * i));
            }
            if (i + j == n - 1){
                *(sum + (sumSize - 1)) += *(num + j + (n * i));
            }
            *(sum + j) += *(num + j + (n * i));
            *(sum + i + n) += *(num + j + (n * i));
        }
    }

    int check = *sum;

    for (int i = 1; i < sumSize; i++){
        if (*(sum + i) != check){
            printf("NO");
            return 0;
        }
    }
    printf("YES");
    return 0;
}