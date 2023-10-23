#include <stdio.h>
#define low 0.50//110
#define middle 0.55//210
#define high 0.70//
int main(void)
{
    float ele;
    scanf("%f", &ele);

    if (ele <= 110)
        printf("%.2f", ele * 0.50);
    else
        {
            if (ele <= 210)
                 printf("%.2f", 55 + (ele - 110) * 0.55);
            else
                printf("%.2f", 110 + (ele - 210) * 0.70);
        }    
    return 0;
}