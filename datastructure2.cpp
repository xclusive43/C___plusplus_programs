//write a c program to store 10 element in an array (1)After 7th element the for loop should stop
                                                   //(2)insert in 4th position =200 and shift the earlier value to right side
                                                   //(3)delete the 3rd value and shift the remaining value to left
#include<stdio.h>
int in(int b[]);
int ar(int c[]);
int main()
{
	int a[10];
	int i;
	
	printf("Enter the array element:-\n");
	 for(i=1;i<11;i=i+1)
	{
	   if(i==8)
	   { 
	  for(i=8;i<11;i++)
	       {
	  	     a[i]=NULL;
	       }
	     	break;
	   }
	   else
	     {
	      scanf("%d",&a[i]);
		 }
	}
	
	printf("Array element are:-");
	for(i=1;i<11;i=i+1)
	{
	
	printf("[%d]",a[i]);
	
	}
	printf("\n");
	
//printf("right shifted array is with 200 inserted in 4th position:-");
in(a);
//printf("\nleft shifted array with 4th position deleted:-");
ar(a);
return 0;

}

//first function//
int in(int b[])
{ int num,el;   
printf("\nEnter the position to insert an element:-");
scanf("%d",&num);
	//right shifted//
	int i;
	 
	 for(i=7;i>num;i=i-1)
	{
		b[i]=b[i-1];
	}
	
	printf("\nEnter the element to inserted at %d position with right shifting:-",num);
	scanf("%d",&el);
    b[num]=el;

   for(i=1;i<11;i++)
     {
        printf("[%d]",b[i]);
     }
    
}

//second function//
	int ar(int c[])
	{
		int i,j,count;
		printf("\nEnter the array element to be deleted with left shifting:\n");
			scanf("%d",&j);
			
			 
	for(i=1;i<11;i=i+1)
	{
		if(j==c[i])
		{   
		    count=i;
			c[i]=NULL;
			
			 
			 break;
		}
		
		
	} 
     
    for(i=count; i<11;i++)
	{   
		c[i]=c[i+1];
	} 
	
	printf("\nThe array is:-");
	for(i=1;i<11;i++)
	{
		printf("[%d]",c[i]);
	}
}   
	   
     	 
	 
	
		 
