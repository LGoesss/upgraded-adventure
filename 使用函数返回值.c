#include <stdio.h>
double power (double n,int p);
int main(void)
{
	double x,xpow;
	int exp;
	
	printf("幂：\n指数：\nEnter q to quit."); 
	while(scanf("%lf%d",&x,&exp)==2) 
	{
		xpow = power(x,exp);
		printf("%.5g",xpow);
		printf ("幂：\n指数：\nEnter q to quit.");
	}
	
	return 0;
	
}

double power (double n,int p)
{
	double pow=1;
	int i;
	for (i=0;i<p;i++)
	pow *= n;
	return pow;
}
