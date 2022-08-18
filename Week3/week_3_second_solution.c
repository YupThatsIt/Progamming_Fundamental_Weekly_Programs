//Using recursive function
#include <stdio.h>

int Fibonacci(int n);

int main()
{
    int sum, n, i = 1;

    while(1){
        n = Fibonacci(i);
        if(n > 4000000) break;

        if (n % 2 == 0){
            sum += n;
        }
        i++;
    }
    
    printf("%d", sum);
    return 0;
}

int Fibonacci(int n){
    if (n <= 1){
        return 1;
    }
    else{
        return Fibonacci(n - 1) + Fibonacci(n - 2);
    }
}
