#include<stdio.h>
int main()
{
	float i,bonus;
	printf("����������ֵ��");
	scanf("%f",&i);
	if (i<=100000)
		bonus=i*0.1;
	else if (i<=200000)
		bonus=100000*0.1+(i-100000)*0.075;
	else if (i<=400000)
		bonus=100000*0.1+100000*0.075+(i-200000)*0.005;
	else if (i<=600000)
		bonus=100000*0.1+100000*0.075+200000*0.005+(i-400000)*0.003;
	else if (i<=100000)
		bonus=100000*0.1+100000*0.075+200000*0.005+400000*0.003+(i-600000)*0.0015;
	else
		bonus=100000*0.1+100000*0.075+200000*0.005+400000*0.003+600000*0.0015+(i-1000000)*0.001;
	printf("%f",bonus);	
 } 
