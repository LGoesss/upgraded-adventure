#include <stdio.h>

int main()
{
	int n;
	
	int i=1;
	printf("������һ��������");
	scanf("%d",n);
	
	for(n>1;n--;){
		i*=n;
	}  printf("%d",i);
}
