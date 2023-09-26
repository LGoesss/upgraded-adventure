#include <stdio.h>
int main()
{
	float a;
	float b;
	
	printf("金额："); 
	scanf("%f",&a);
	
	printf("收款：");
	scanf("%f",&b);
	
	if(b>=a){printf("找您：%f",b-a);
	}
	
	else{printf("没钱滚蛋");
	}
	
	return 0;
}
