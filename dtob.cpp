#include<stdio.h>
//#include<stdlib.h>
//#include<math.h>
main()
{
	int dec,bin=0,count=1,rem;
	printf("enter decimal:\n");
	scanf("%d",&dec);
	
	while(dec>0)
	{
	 rem=dec%2;
	 dec=dec/2;
	 bin=bin+rem*count;
	 count=count*10;	
	
	}
	printf("%d",bin);
	
}
