#include <stdio.h>
#include <ctype.h>
int main(void)
{
	float x,y;
    
     printf("������������������\n");
	 
	 while (scanf("%f%f",&x,&y)==2)
	 {
	 	printf("������ĸ������ǣ�%f��%f\n",x,y);
	 	printf("����ǣ�%f\n",(x-y)/(x*y));
	 	printf("������������������\n");
	 }
	 
	return 0;
}
