#include <stdio.h>

int main(void)
{
    unsigned int a;
    int b;
    scanf("%u %d", &a, &b);
    if ((a % b) ==0)
    {
        printf("yes");
    }
    else
        printf("%d %d", a / b, a % b);
}