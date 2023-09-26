#include <stdio.h>
int main()
{
	int x;
	int i=1;
    int fact=1;
    
    scanf("%d",&x); 
	while(i<=x)
	{
		i++; fact*=i;
	}
	printf("%d!=%d",x,fact	);
	
	return 0;
}
