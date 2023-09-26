#include <stdio.h>
int main(void)
{
	int row,i;
	for (row = 0; row < 5; row++)
	{
		for (i = 0; i <= row; i++)
		{
			printf("$");
		}
		printf("\n");
	}
	
	return 0;
}
