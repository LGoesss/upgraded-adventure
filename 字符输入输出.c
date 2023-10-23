#include <stdio.h>
#include <ctype.h>
int main(void)
{
    char a, b, c, d, e;
    scanf("%c|%c|%c|%c|%c",&a, &b, &c, &d, &e);
    printf("%c%c%c%c%c!",tolower(a), tolower(b), 
    tolower(c), tolower(d), tolower(e));
    

    return 0;
}
