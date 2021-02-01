#include<stdio.h>
#include<conio.h>
main()
{
	int n;
	printf("enter the fahrenheit temperature:\t");
	scanf("%d",&n);
	int c=(n-32)/1.8;
	
	printf("the celcius equivalence of fahrenheit is :%d", c);
	getch();
}
