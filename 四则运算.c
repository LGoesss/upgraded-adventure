#include <stdio.h>
int main(void)
{
    int a, b;
    char ope;
    scanf("%d%c%d", &a, &ope, &b);
    
    if (b != 0)
    {
        switch(ope)
    {
        case '+': printf("%d%c%d=%d", a, ope, b, a + b);
                  break;
        case '-': printf("%d%c%d=%d", a, ope, b, a - b);
                  break;
        case '*': printf("%d%c%d=%d", a, ope, b, a * b);
                  break;
        case '/': printf("%d%c%d=%d", a, ope, b, a / b);
                  break;
        case '%': printf("%d%c%d=%d", a, ope, b, a % b);
                  break;
        default: break;
    }
    }
    else 
        printf("Wrong input!");

    return 0;
    
}