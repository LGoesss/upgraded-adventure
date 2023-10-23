#include <stdio.h>
int main(void)
{
    int hour, min, total;
    float tem;
    scanf("%d %d", &hour, &min);

    total = hour + min / 60;

    tem = (4 * total * total) / (total + 2) - 20;

    printf("%.2f", tem);

    return 0;

}