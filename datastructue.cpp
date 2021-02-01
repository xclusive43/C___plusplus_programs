//write a c program to store 10 element in an array (1)After 7th element the for loop should stop
                                                   //(2)insert in 4th position =200 and shift the earlier value to right side
                                                   //(3)delete the 3rd value and shift the remaining value to left
#include<stdio.h>
int main()
{
	int a[10];
	int i;
	
	printf("enter the array element:-\n");
	 for(i=0;i<10;i=i+1)
	{
	   if(i==7)
	   {
	   	break;
	   }
	   else
	   
		scanf("%d",&a[i]);
	}
	
	printf("array element are:-");
	for(i=0;i<10;i=i+1)
	{
	
	printf("[%d]",a[i]);
	
	}
	//right shifted//
	
	for(i=7;i>4;i=i-1)
	{
		a[i]=a[i-1];
	}
	a[4]=200;
	printf("\nThe right shifted array with 200 new value int the 4th position are:-");
		for(i=0;i<10;i=i+1)
	{
	printf("[%d]",a[i]);
	}
	
	//left shifted
	a[3]=0;
	for(i=3;i<8;i=i+1)
	{
		a[i]=a[i+1];
	}
	printf("\nThe right shifted array with 200 new value int the 4th position are:-");
		for(i=0;i<10;i=i+1)
	{
	printf("[%d]",a[i]);
	}
	
return 0;

}
