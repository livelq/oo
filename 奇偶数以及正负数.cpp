#include<stdio.h>
int main()
{
	int x;
	printf("请输入一个整数：");
	scanf("%d",&x);
	if (x<0)
		printf("%d为负数\n",x);
	else
		printf("%d为正数\n",x);
	if (x/2==0)
		printf("%d为偶数\n",x);
	else
		printf("%d为奇数\n",x); 
 } 
