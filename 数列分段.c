#include <stdio.h>
#define size 1000
int main(void)
{
    unsigned int i, count = 1, n, data[size];

    scanf("%u", &n);
    for (i = 0; i < n ; i++)
    {
        scanf("%d", &data[size]);
        printf("%d", data[size]);
        
        
        if (i > 0 && data[i] != data[i - 1])
         {
             count++;
         }
        
    }

    printf("%u", count);
}