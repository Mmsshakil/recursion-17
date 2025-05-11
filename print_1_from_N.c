#include <stdio.h>

void numbers(int i)
{
    if (i == 5)
    {
        return;
    }

    printf("%d\n", i);
    numbers(i + 1);
}

int main()
{
    int i = 1;
    numbers(i);
    return 0;
}