#include <stdio.h>
#include <string.h>
#include <windows.h>

int main(void)
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    char str[30] = "happy C programming";
    printf("문자열 \"%s\"의 길이 : %d\n", str, strlen(str));

    return 0;
}