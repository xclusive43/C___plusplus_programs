#include<stdio.h>
main()
{
	int a[10],i,s=0;
	printf("enter the ten number in an array:\t");
	for(i=0;i<10; i++)
	{
		scanf("%d",&a[i]);
		
	}
	for(i=0; i<10; i++)
	{
		s=s+a[i];
	
	}
	
		printf("\nsum of the ten elements in the array is:%d",s);
}
