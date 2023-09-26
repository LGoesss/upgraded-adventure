#include <stdio.h>
int main(void)
{
	const int ROWS = 10;
	const int CHARS = 8;
	
	int row;
	char ch;
	
	for (row = 0; row < ROWS; row++)
	{
		for(ch = ('A'+row); ch < ('A'+CHARS); ch++)
		printf("%c",ch);
		printf("\n");
	}
	 return 0;
}
