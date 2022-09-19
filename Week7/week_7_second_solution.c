#include <stdio.h>

int main()
{
    int n, num[100][100], dsum1 = 0, dsum2 = 0;
    scanf("%d", &n);

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            scanf("%d", &num[i][j]);
        }
    }
    
    //Checking diagonal sums
    for (int i = 0; i < n; i++){
        dsum1 += num[i][i];
        dsum2 += num[i][n - 1 - i];
    }
    if (dsum1 != dsum2){
        printf("NO");
        return 0;
    }

    //Checking respective row and column sums
    int colsum, rowsum;
    for (int i = 0; i < n; i++){
        colsum = 0, rowsum = 0;

        for (int j = 0; j < n; j++){
            rowsum += num[i][j];
            colsum += num[j][i];
        }
        if (rowsum != dsum1 || colsum != dsum1){
            printf("NO");
            return 0;
        }
    }

    printf("YES");
    return 0;
}
