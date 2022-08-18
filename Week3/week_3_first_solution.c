#include <stdio.h>

int main()
{
    int start = 1, sum = 0, temp, prev = 1;

    while(start < 4000000){
        if (start % 2 == 0){
            sum += start;
        }
        temp = start;
        start += prev;
        prev = temp;
    }

    printf("%d", sum);
    return 0;
}