#include<stdio.h>
#include<conio.h>
#define s 100
int p[s],a[s],b[s],tat[s],wt[s],b1[s];
int time,i,quantam,num,count,rt;

int rrobin(int p1[],int a1[],int b2[],int n,int q);


int main()
{
    
    printf("enter the quantam time :\n");
    scanf("%d",&quantam);
    
    printf("enter the total no. of process :");
    scanf("%d",&num);
    
    for(i=0;i<num;i++)
    {
        printf("enter the burst time for process P%d",i+1);
        scanf("%d",&b[i]);
        b1[i]=b[i];
        a[i]=p[i]=i;
    }
       
        rrobin(p,a,b,num,quantam);
        
      getch();
    return 0;
}

int rrobin(int p1[],int a1[],int b2[],int n,int q)
{  
    rt=n;
    
    for(time=0;count=0;rt!=0)
    {
         if(b[count]<=q && b[time]>0)
         { 
                         time=time+b[count];
                         b[count]=0;
                        
          }                    
          
         else if(b[count]>0)
         {  
              b[count]=b[count]-q;
              time=time+q;
         
         }
         
         if(b[count]==0)
         {
          rt--;
          printf("hello");               
         }
                            
      } 
        
 }
