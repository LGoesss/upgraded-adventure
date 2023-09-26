#include <stdio.h>
#define ROWS 4
#define CHARS 8
int main(void)
{
	int i;
	int j;
	for (i=0;i<4;i++)
	{
		for (j=0;j<8;j++)
		{
			printf("$");
		}
		printf("\n");
	}
}

