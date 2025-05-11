#include <stdio.h>

void numbers(int i, int n)
{
    if (i == n + 1)
    {
        return;
    }

    numbers(i + 1, n);
    printf("%d", i);
    if (i != 1)
    {
        printf(" ");
    }
}

int main()
{
    int i = 1, n;
    scanf("%d", &n);
    numbers(i, n);
    return 0;
}