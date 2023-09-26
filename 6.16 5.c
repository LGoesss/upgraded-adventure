#include <stdio.h> 
int main(void)
{
	char c;
	int i, j, k,l,num;
	char ch = 'A';
	
	printf("Enter the core char (A...Z):");
	scanf ("%c",&c) ;
	num = c - 'A' + 1;
	
	for (i = 1; i <= num; i++)
{
	for(j = 1; j <= num - i ; j++ )
{
	printf(" ");
	}
	for (ch = 'A',k = 1; k <= i; k++, ch++ )
{
	printf ("%c", ch);
	}
	for (ch -=2,l = 1; l <= i - 1;l++, ch--)
{   printf("%c",ch);
	
	}
	printf("\n");
	}
	return 0;
}
