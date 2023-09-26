#include <stdio.h>
#include <string.h>
int main(void)
{
	int length,i;
	char word[length];
	
	printf("Word:\n");
	scanf("%s",word);
	printf("the word you entered is:%s\n",word);
	
	length=strlen(word);
	
	for(i=length-1;i>=0;i--)
	printf("%c",word[i]);
	
	
	
	
	return 0;
}
