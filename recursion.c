#include <stdio.h>

void hello()
{
    printf("Mello\n");
    hello();
}
int main()
{
    printf("Hello\n");
    hello();
    return 0;
}