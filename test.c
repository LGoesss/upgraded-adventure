#include <stdio.h>
 int main()
{
    int number;
    scanf("%d",&number);
 
	int sum=0;
	do
	{
		sum+=number%10;
		number=number/10; 
	}
	while (number!=0);
	printf("%d",sum);
    return 0;
}
 