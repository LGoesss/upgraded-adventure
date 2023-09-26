#include <stdio.h>
#include <ctype.h>
int main(void)
{
	float x,y;
    
     printf("请输入两个浮点数：\n");
	 
	 while (scanf("%f%f",&x,&y)==2)
	 {
	 	printf("你输入的浮点数是：%f和%f\n",x,y);
	 	printf("结果是：%f\n",(x-y)/(x*y));
	 	printf("请输入两个浮点数：\n");
	 }
	 
	return 0;
}
