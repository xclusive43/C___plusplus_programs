#include<stdio.h>
#include<conio.h>
void Waiting_time(int n,int bt,int at,int wt)
{
     int remt[n];
     
     //wt[0]=0;
     for(int i=0;i<n;i++)
     {
             rt[i]=bt[i]
     }
     int ct=0,t=0,min=,s=0,ft;
     bool check=false;
     
     while(ct!=n)
     for(int j=0;j<n;j++)
     {
             if((at[j]<=t) &&(remt[j]<min) && (remt[j]=0))
             {
                           min=remt[j];
                           s=j;
                           check=true;
             }     
     }
     if (check==false) 
     {
                       t++;
                       continue;
     }
     remt[s]--;
     min=remt[s];
     if(min==0)
     min=INT_MAX;
     if(remt[s]==0)
     {
                   ct++:
                        check=false;
                        ft=t+1;
                        wt[s]=ft-bt[s]-at[s];
                        if(wt[s]<0)
                        {
                                   wt[s]=0
                                   }
                                   t++;
                                   }
                        
          
 }
void Average(int n,int bt,int at)
{
     int wt(n),tat(n),total_wt=0,total_tat=0;
     Waiting_time(n,bt,at,wt);
 }
int main()
{
    int n,burst_time[20],arrival_time[20];
    printf("Shortest remaining time first");
    printf("\n Enter the number of processes::");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
            printf(" Enter the Burst time  of process P[%d]",i+1);
            scanf("%d", &burst_time);
    }
    for(int j=0;j<n;j++)
    {
            printf("Enter the Arrival time of process P[%d]",j+1)  
            scanf("%d",&arrival_time);
            Average(n,burst_time,arrival_time);
            }
            
            
