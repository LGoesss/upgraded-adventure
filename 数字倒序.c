#include <stdio.h>
int main()
{
	int a;
	int b;
	int c;
	
	scanf("%d%d%d",&a,&b,&c);
	printf("%d+%d+%d=%d",a/100,b/10,c*100,a/100+b/10+c*100);  
	return 0;
	
}
