#include <stdio.h>

void numbers(int i, int n)
{
    if (i == n + 1)
    {
        return;
    }

    printf("%d\n", i);
    numbers(i + 1, n);
}

int main()
{
    int i = 1, n;
    scanf("%d", &n);
    numbers(i, n);
    return 0;
}