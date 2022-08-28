#include <stdio.h>

int main()
{
    int arr[100];
    int isSorted = 1;

    for (int i = 0;; i++){
        printf("Number : ");
        scanf("%d", &arr[i]);

        if (arr[i] == 999){
            break;
        }

        if (i > 0){
            if(arr[0] < arr[1]){ //ascending
                if (arr[i - 1] > arr[i]) isSorted = 0;
            }
            else if (arr[0] > arr[1]){ //descending
                if (arr[i - 1] < arr[i]) isSorted = 0;
            }
        }
    }
    if(isSorted == 1) printf("Is sort : YES");
    else printf("Is sort : NO");

    return 0;
}