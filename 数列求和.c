#include <stdio.h>
int main(void)
{
	int y,z;
	double x,time;
	
	printf("����������Ҫ�ıƽ�������\n");
	
	scanf("%d",&y);
	for(x=1,time=0,z=1;z<=y;x*=2.0,z++)
	{
		time+=1.0/x;
		printf("%d time=%f\n",z,time);
	}
	return 0;
}
