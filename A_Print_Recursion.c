#include <stdio.h>

void data(int n, int i)
{
    if (i == n + 1)
    {
        return;
    }

    printf("I love Recursion\n");

    data(n, i + 1);
}

int main()
{
    int n, i = 1;
    scanf("%d", &n);
    data(n, i);
    return 0;
}