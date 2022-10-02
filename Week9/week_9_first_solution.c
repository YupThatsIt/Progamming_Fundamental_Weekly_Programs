#include <stdio.h>
#include <string.h>

int main()
{
    char wordArr[6][31];

    for (int i = 0; i < 6; i++){
        scanf("%s", wordArr[i]);
    }

    //sorting
    char temp[31];
    for (int i = 0; i < 6; i++){
        for (int j = 0; j < 5 - i; j++){
            if (strcmp(wordArr[j], wordArr[j + 1]) > 0){ //return > 0 if fisrt char in str1 is greater (according to ASCII) than str2, vice vesa
                strcpy(temp, wordArr[j]);
                strcpy(wordArr[j], wordArr[j + 1]);
                strcpy(wordArr[j + 1], temp);
            }
        }
    }

    //print result array
    for (int i = 0; i < 6; i++){
        if (strcmp(wordArr[i], wordArr[i - 1]) != 0){
            printf("%s\n", wordArr[i]);
        }
    }
    return 0;
}