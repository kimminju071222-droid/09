#include <stdio.h>
#include <string.h>
#include <windows.h>

int main(void)
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    char src[] = "The worst things to eat before you sleep";
    char dst[100];

    strcpy(dst, src);
    printf("copied string : %s\n", dst);

    return 0;
}