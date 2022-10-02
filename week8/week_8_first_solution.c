#include <stdio.h>

int main()
{
    int n;

    scanf("%d", &n);

    for (int y = 0; y < n; y++){
        for (int x = 0; x < n - 1 - y; x++){
            printf(" ");
        }
        for (int x = 0; x < (2 * y) + 1; x++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}