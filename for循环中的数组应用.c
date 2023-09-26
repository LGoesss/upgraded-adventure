#include <stdio.h>
#define SIZE 5
int main(void)
{
	int sum,index,score[SIZE];
	float average;	
	
	printf("请输入%d个数。\n",SIZE);
	for (index=0;index<SIZE;index++)
	{
		scanf("%d",&score[index]);
	}
	printf("你输入的数是：\n");
	for (index=0;index<SIZE;index++)
	{
		printf("%5d",score[index]);
	}
	for (index=0,sum=0;index<SIZE;index++)
	{
		sum+=score[index];
	}
	printf("\n");
	average=(float) sum/SIZE;
	printf("平均数是%.2f",average);
 } 
