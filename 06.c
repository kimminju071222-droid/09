#include <stdio.h>
#include <windows.h>

int main(void)
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    FILE *fp = NULL;
    char c;

    fp = fopen("sample.txt", "r");
    if (fp == NULL)
    {
        printf("파일을 못열음\n");
        return -1;
    }

    while ((c = fgetc(fp)) != EOF)   // 한글자 읽은 것이 파일의 마지막이 아니면
        putchar(c);                   // 화면에 한글자 출력

    fclose(fp);

    return 0;
}