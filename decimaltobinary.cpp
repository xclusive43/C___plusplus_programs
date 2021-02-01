#include<stdio.h>
#include<math.h>
main()
{
	int num,decimal,rem,base=1,binary=0,nof1=0;
	printf("enter the decimal number \n");
	scanf("%d",&num);
	
	decimal=num;
	while(num>0)
	{
		rem=num%2;
		if(rem==1)
{
	nof1++;
	}	
	binary=binary+rem*base;
	num=num/2;
	base=base*10;
	}
	printf("its binary equlivant is :%d", binary);}
