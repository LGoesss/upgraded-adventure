#include <stdio.h>
#define SIZE 5
int main(void)
{
	int sum,index,score[SIZE];
	float average;	
	
	printf("������%d������\n",SIZE);
	for (index=0;index<SIZE;index++)
	{
		scanf("%d",&score[index]);
	}
	printf("����������ǣ�\n");
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
	printf("ƽ������%.2f",average);
 } 
