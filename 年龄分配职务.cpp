#include<stdio.h>
int main()
{
	int age;
	printf("请输入年龄：");
	scanf("%d",&age);
	if (age<22)
		printf("false");
	else if (age<30)
		printf("担任勤务员");
	else if (age<45)
		printf("担任内勤人员");
	else if (age<55)
		printf("担任仓库管理员");
	else
		printf("退休"); 
 } 
