#include <stdio.h>

int main(void)
{
	const int first=40;
	const int next=15;
	int ounces,cost;
	
	printf("ounces cost\n");
	for (ounces=1,cost=first;ounces<=6;ounces++,cost+=next)
	{
		printf("%5d,$%d\n",ounces,cost/100);
	}
	
	return 0;
}
