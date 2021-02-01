#include<stdio.h>
#include<conio.h>

#define size1 10
 
int item[size1],count=0,count1=0;
int producer();
int produce();

int consumer();
int consume();

int main()
{ 
   printf("Producer and Consumer Problem");
   printf("\n-----------------------------\n");
   
   int ch;
 
   while(1)
   {
     printf("1.producer mudule\t2.consumer module\t3.exit\n");
     scanf("%d",&ch);
     switch(ch)
       {
               case 1 :producer();
               break;
               case 2: consumer();
               break;
               case 3: return 0;
             
       }
   }
  getch();
  return 0;    
}

int producer()
{  
    // temp=produce();
     
     if(count1==size1)
     {
          return 0;
     }
      else 
       {
        produce();
       } 
    
}
int produce()
{  int i,data;

    printf("prodecer module\n");
    printf("enter the number of item to be produce:");
    scanf("%d",&count);
     
     printf("\nenter the %d items: ",count);
     for(i=0;i<count;++i)
     {
       scanf("%d",&data);
       item[i]=data;
       count1=count1+1;
     }
   
}
int consumer()
{
    
 }
