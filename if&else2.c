#include <stdio.h>

int main()

{
	int pass=60;
	int score;
	
	printf("请输入您的成绩：");
	scanf("%d",&score);
	
	if(score>=pass)	printf("恭喜你通过了这次考试");
	else printf("很遗憾，你没能通过这次考试");
	 
	printf("继续加油吧");
	
	return 0;
}
