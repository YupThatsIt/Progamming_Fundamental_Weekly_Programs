//Not using array
#include <stdio.h>

int main()
{
    int curnum, lastnum, isSorted = 1;

    printf("Number : ");
    scanf("%d", &curnum);

    lastnum = curnum;

    printf("Number : ");
    scanf("%d", &curnum);

    if (lastnum < curnum){ //ascending
        while (curnum != 999){
            if (lastnum > curnum) isSorted = 0;

            lastnum = curnum;

            printf("Number : ");
            scanf("%d", &curnum);
        }
    }
    else if (lastnum > curnum){ //descending
        while (curnum != 999){
            if (lastnum < curnum) isSorted = 0;

            lastnum = curnum;

            printf("Number : ");
            scanf("%d", &curnum);
        }
    }
    if(isSorted == 1) printf("Is sort : YES");
    else printf("Is sort : NO");

    return 0;
}