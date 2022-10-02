#include <stdio.h>
#include <math.h>

int main()
{
    int n;

    scanf("%d", &n);

    for (int y = 0; y < n; y++){
        for (int x = -(n - 1); x <= n - 1 ;x++){
            if (abs(x) + abs(y) <= 2 * y) printf("*");
            else printf(" ");
        }
        printf("\n");
    }
    return 0;
}