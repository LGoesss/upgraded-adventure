#include <stdio.h>
int main(void)
{
    long int num;
    int sum = 0, i, a;
    scanf("%ld", &num);

    for(i = 1; i <= 9; i++)
    {
       a = num % 10;
       num /= 10; 
       sum += a;
    }
    printf("%d", sum);
    return 0;
}