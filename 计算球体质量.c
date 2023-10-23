#include <stdio.h>
#define PI 3.1415926
int main(void)
{
	const double steal = 7.86;
	const double gold = 19.3;
	
	int a, b;
	double c, d;
	
	scanf("%d %d", &a, &b);
	
	c = PI * a * a * a * steal / 6000;
	d = PI * b * b * b * gold /6000;
	
	printf("%.3f %.3f", c, d);
	
	return 0;
	
}
