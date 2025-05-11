#include <stdio.h>

void numbers(int n)
{
    if (n == 0)
    {
        return;
    }

    printf("%d\n", n);
    numbers(n - 1);
}

int main()
{
    int n;
    scanf("%d", &n);
    numbers(n);
    return 0;
}