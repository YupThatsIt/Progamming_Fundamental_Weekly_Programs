#include <stdio.h>

int main()
{
    int wordSize[6];
    char wordArr[6][31];

    for (int i = 0; i < 6; i++){
        scanf("%s%n", wordArr[i], &wordSize[i]);
    }

    char temp[31];
    for (int i = 0; i < 5; i++){
        int min = i;
        for (int j = 1 + i; j < 6; j++){
            for (int k = 0; k < wordSize[j - 1]; k++){
                if ((int)wordArr[min][k] > (int)wordArr[j][k]){
                    min = j;
                    break;
                }
                else if ((int)wordArr[min][k] < (int)wordArr[j][k]) break;
            }
        }

        if (min != i){
            //Swap string
            char temp[31];
            for (int k = 0; k < 30; k++){
                temp[k] = wordArr[i][k];
            }
            for (int k = 0; k < 30; k++){
                wordArr[i][k] = wordArr[min][k];
            }
            for (int k = 0; k < 30; k++){
                wordArr[min][k] = temp[k];
            }
        }
    }

    for (int i = 0; i < 6; i++){
        int isDup = 1;
        for (int j = 0; j < wordSize[j]; j++){
            if (wordArr[i - 1][j] != wordArr[i][j]){
                isDup = 0;
            }
        }
        if (isDup == 0) printf("%s\n", wordArr[i]);
    }
    
    return 0;
}