#include<stdio.h>
int main()
{
	float i,bonus,b1,b2,b3,b4,b5;
	int branch;
	b1=100000*0.1;
	b2=b1+100000*0.075;
	b3=b2+200000*0.005;
	b4=b3+200000*0.003;
	b5=b4+400000*0.015;
	printf("ÇëÊäÈëÀûÈó£º");
	scanf("%f",&i);
	branch=i/100000;
	if (branch>10)
		branch=10;
	switch(branch)
	{
	case 0:bonus=i*0.1;break;
	case 1:bonus=b1+(i-100000)*0.075;break;
	case 2:
	case 3:
	bonus=b2+(i-200000)*0.005;break;
	case 4:
	case 5:
	bonus=b3+(i-200000)*0.003;break;
	case 6:
	case 7:
	case 8:
	case 9:
	bonus=b4+(i-400000)*0.015;break;
	case 10:
	bonus=b5+(i-1000000)*0.001;break;
	}
	printf("%f",bonus);
}
