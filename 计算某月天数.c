#include <stdio.h>
int main(void)
{
    unsigned int a, b;
    scanf("%u %u", &a, &b);
    if (a % 4 == 0)
        {
            if (b == 2)
            {
                printf("29");
            }
            else
                if ((b == 1) | (b == 3) | (b == 5) | (b == 7) | (b == 12) | (b ==8) | (b == 10))
                    {
                        printf("31");
                    }
                else 
                    {
                        printf("30");
                    }
        }
    else 
        {
            if (b == 2)
            {
                printf("28");
            }
            else
                if ((b == 1) | (b == 3) | (b == 5) | (b == 7) | (b == 12) | (b ==8) | (b == 10))
                    {
                        printf("31");
                    }
                else 
                    {
                        printf("30");
                    }
        }
    return 0;
}