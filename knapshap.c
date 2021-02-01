//knapshap problem
#include<stdio.h>
#define s 4

int flag=1,i,j,basket;
float knap[s][s],max=0,remain;
float boss[s][s],total=0;
int all(int a1,int b,int cs);
void max1();
void cal();
void dis();
main()
{
     
   printf("____________________________\n");
   printf("\n------KNAPSHAP PROBLEM------\n");
   printf("____________________________\n");
   
  //enter the objects
   printf("\nEnter the size of basket:\n");
   scanf("%d",&basket);
   printf("enter the %d objects:\t",s);
    
   all(0,s,1);
   //enter the profit
   printf("enter the profit of %d objects:",s); 
   all(1,s,1);
   //enter the weight
    printf("enter the weight of %d objects:",s);
   all(2,s,1);
   //profit by weight
    all(3,s,0);
    printf("The profit by weight is calculated successfully:\n");
    //show function
    max1(); 
    cal();
    dis();
}

int all(int a1,int b1,int cs)
{
  
  if(flag==cs)
  {
   
     for(i=0;i<b1;i++)
      {
     	scanf("%f",&knap[a1][i]);
     	boss[a1][i]=knap[a1][i];
      }	
  }
  else
  {  
  	for(j=0;j<s;j++)
      {  
      	knap[a1][j]=(knap[1][j] / knap[2][j]);
      	 boss[a1][j]=knap[a1][j];
	  }
  }
}
   
void max1()
 {  
 	//comparision max profit by weight
 	for(i=0;i<s;i++)
 	{
 		if(boss[3][i]>max)
 		{
 		  max=boss[3][i];	
		 }
		  
	 }
	// printf("max from max1 =%f\n",max);
	 //printf("From max1 max =%f\nindex of boss %f\nbasket is %d\n",max,boss[3][i],basket);
 }
 
 void cal()
  {  
  	 for(i=0;i<s;i++)
	   {  //max1();
	    
	      if(boss[3][i]==max)
	      
	      { 
		   if(basket>boss[2][i])
		    {
		    basket=basket-boss[2][i];
	     	total=total+boss[1][i];
	     	printf("-----------------------------\n");
			printf("index of boss %f\n",boss[3][i]);
			boss[3][i]=0;
	     	printf("max =%f\nbasket size remaining is %d\n",max,basket);
	        max=0;
	        //printf("max2 is %f\n",max);
		    max1();
		    //printf("after max 1->max is %f\n",max);
	       }
	       else
	       {
	       	printf("wait\n");
		   }
	       }
	       //i=0;
        }
		 if(max!=0){
		 printf("-----------------------------\n");
		 cal();
		 }
		 else
	     printf("total profit %f\n",total);
		 //printf("max =%f\n",max);
  }
  
void dis()
{   
	//display the matrix
       printf("Knapshap\n");
	  for(i=0;i<s;i++)
      {    
      	   for(j=0;j<s;j++)
      	  {  
      	 	printf("[%f]\t",knap[i][j]);
		   }
		   printf("\n");
	  }
	  printf("Boss\n");
	  for(i=0;i<s;i++)
      {    
      	   for(j=0;j<s;j++)
      	  {  
      	 	printf("[%f]\t",boss[i][j]);
		   }
		   printf("\n");
	  }
	  
}
   
   

