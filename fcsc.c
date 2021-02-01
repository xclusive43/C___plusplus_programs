#include<stdio.h>

void main()
{
     int processes[20],bt[20],wt,tat,n;
     printf("Enter the number of prosesses:");
     scanf("%d",&n);
     for(int i=0;i<n;i++)
     {
             printf("p %d",processes[i];
             
     }
      printf("Enter the Burst time:");
       for(int i=0;i<n;i++)
     {
             printf("bt %d",bt[i];
             
     }
     tofindavgtime( n, processes, bt, wt, tat);
}




void findwaitingtime(int n,int processes[],int bt[],int wt[])
{
                         int wt[]=0;
                         for(int i=0;i<n;i++)
                         {
                                 wt[i]=bt[i-1]+wt[i-1];
                          }
}

void findturnaroundtime(int n,int processes[],int bt[],int wt[],int tat[])
{
                        
                         for(int i=0;i<n;i++)
                         {
                                 tat[i]=bt[i]+wt[i];
                          }
}
void tofindavgtime(int n,int processes[],int bt[],int wt[],int tat[])
{
     int wt[n],tnt[n],totalwt=0,totaltat=0;
     findwaitingtime( n, processes, bt, wt);                                      
     findturnaroundtime( n, processes, bt, wt,tat); 
     
     printf("\n process \t Burst time \t Waiting time \t turn around time \n");
      for(int i=0;i<n;i++)
      {
              totalwt=totalwt+wt[i];
              totaltat=totaltat+tat[i];
              printf(" %d ",(i+1);
              printf(" %d ",bt[i];
              printf(" %d ",wt[i];
              printf(" %d ",tat[i];
      }
      int s=(float)totalwt/(float)n;
      int t=(float)totaltat/(float)n;
      printf("The average of the waiting time = %d",s);
      printf("\n");
      printf("The average of the turn around time = %d",t);     
}    
                          
     
     
     
     
      
