#include <stdio.h>
#include <windows.h>

int main(void)
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    char code1 = 'A';
    int code2 = 65;

    printf("code1 = %c, (%d)\n", code1, code1);
    printf("code2 = %c, (%d)\n", code2, code2);

    return 0;
}