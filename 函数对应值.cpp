#include<stdio.h>
#include<math.h>
int main()
{
	int x,y;
	printf("请输入任意数：\n");
	scanf("%d",&x);
	if (x<10)
		y=x+1;
	if (10<=x&&x<=20)
		y=pow(x,2);
	if (x>=20)
		y=6*x+9;
	printf("y=%d\n",y);
}
