#include <stdio.h>

int main()
{
    int n, num[100][100], sum[202];
    scanf("%d", &n);
    int sumSize = (n * 2) + 2;

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            scanf("%d", &num[i][j]);
            if (i == j){
                sum[sumSize - 1] += num[i][j];
            }
            if (i + j == n - 1){
                sum[sumSize - 2] += num[i][j];
            }
            sum[j] += num[i][j];
            sum[n + i] += num[i][j];
        }
    }

    int check = sum[0];
    for (int i = 1; i < sumSize; i++){
        if (sum[i] != check){
            printf("NO");
            return 0;
        } 
    }
    printf("YES");
    return 0;
}