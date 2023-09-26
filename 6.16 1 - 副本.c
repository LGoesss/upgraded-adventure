#include <stdio.h>
int main(void)
{
	char ch,ace[25];
	int i,j;
	
	for (i = 0, ch = 'a'; i < 26; i++, ch++)
	{
		ace[i] = ch;
	}
	
	for (i = 0; i < 26; i++)
	{
		printf("%c", ace[i]);
	}
	return 0;
 } 
