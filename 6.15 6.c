#include <stdio.h>
#define ROWS 4
#define CHARS 8
int main(void)
{
	int i,j;
	for (i=0;i<ROWS;i++)
	{
		for (j=0;j<CHARS;j++)
		{
			printf("$");
		}
		printf("\n");
	}return 0;
}
