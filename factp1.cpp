#include<stdio.h>
int fact(int a);

int main()
{
	int num,result;
	printf("enter the number:\n");
	scanf("%d",&num);
	if(num<0)
	{
		printf("the fac of negative number is not possible");
		return 0;
	}
	else
	result=fact(num);
	printf("the factroial is %d",result);
	
	return 0;
}
int fact(int a)
{   if(a==1 || a==0)
{
	return 1;
}
else
	return a*fact(a-1);
}
