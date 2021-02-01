#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,c;
	printf("enter the value of a:");
	scanf("%d",&a);
	printf("\nenter the value of b:");
	scanf("%d",&b);
	printf("\nenter the value of c:");
	scanf("%d",&c);
	printf("\nvalue of a=%d b=%d and c=%d ",a,b,c);
	if(a>b && a>c)
	{
		printf("\nvalue of a is greater :%d",a);
	}
	else if(b>a && b>c)
	{
		printf("\nvalue of b is greater :%d",b); }
	
	else
	{
		printf("\nvalue of c is greater :%d",c);
	}
	getch();
}
