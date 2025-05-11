#include <stdio.h>

void numbers(int i)
{
    if (i == 6)
    {
        return;
    }
    numbers(i + 1);
    printf("%d\n", i);
}

int main()
{

    numbers(1);
    return 0;
}