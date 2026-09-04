#include <stdio.h>
#include <windows.h>

int main(void)
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    FILE *fp = NULL;
    char word1[100], word2[100], word3[100];

    fp = fopen("sample.txt", "w");
    if (fp == NULL)
    {
        printf("파일을 못열음\n");
        return -1;
    }

    printf("input a word:");
    scanf("%s", word1);
    printf("input a word:");
    scanf("%s", word2);
    printf("input a word:");
    scanf("%s", word3);

    fprintf(fp, "%s\n", word1);
    fprintf(fp, "%s\n", word2);
    fprintf(fp, "%s\n", word3);

    fclose(fp);

    return 0;
}