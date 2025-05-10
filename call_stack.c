#include <stdio.h>

void cello()
{
    printf("cello\n");
}

void gello()
{
    printf("gello\n");
    cello();
}

void mello()
{
    printf("Mello\n");
    gello();
}

int main()
{
    printf("Hello\n");
    mello();

    return 0;
}