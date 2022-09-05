#include <stdio.h>
#include <sys/stat.h>

int main()
{
    char ch;

    //Create temp directory in drive c
    mkdir("c:/temp");

    printf("Input data string:\n");
    //Input char and put it in data.txt until encontering .
    FILE* fp = fopen("c:/temp/data.txt", "w");
    while ((ch = getchar()) != '.'){
        fputc(ch, fp);
    }
    fputc('.', fp);
    fclose(fp);
    return 0;
}