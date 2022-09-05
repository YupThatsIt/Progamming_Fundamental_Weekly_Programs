#include <stdio.h>
#include <sys/stat.h>

int main()
{
    char str[1001];

    //Create temp directory in drive c
    mkdir("c:/temp");

    //Get input string. Terminate when enconter .
    printf("Input data string:\n");
    scanf("%[^.]", str);

    //Put input string in data.txt in temp
    FILE* fp = fopen("c:/temp/data.txt", "w");
    fprintf(fp, "%s.", str);
    fclose(fp);
    return 0;
}