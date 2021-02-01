#include<stdio.h>
#include<conio.h>

struct student
{
       char name[100];
       int date,month,year;
       //char dob[10];
       char department[20];
       int sem[3];
       char gender[7];
       int date1,month1,year1;
       //char dob[10];
       
       
       
}s[5];

int main()
{
    printf("********Structure Operation*******\n");
    int i;
    for(i=0;i<5;i++)
    {
                    printf("\nEnter name : ");
                    scanf("%s",&s[i].name);
                    printf("\nEnter DOB (dd/mm/yyyy) : ");
                    printf("\nEnter date (1 - 31)  : ");
                    scanf("%d",&s[i].date);
                    printf("\nEnter Month (1 - 12)  : ");
                    scanf("%d",&s[i].month);
                    printf("\nEnter year (yyyy): ");
                    scanf("%d",&s[i].year);
                    printf("\nEnter Department  : ");
                    scanf("%s",&s[i].department);
                    printf("\nEnter Gender (Male or Female)  : ");
                    scanf("%s",&s[i].gender); 
                    printf("\nEnter DOA(Date of Admission) (dd/mm/yyyy) : ");
                    printf("\nEnter date (1 - 31)  : ");
                    scanf("%d",&s[i].date1);
                    printf("\nEnter Month (1 - 12)  : ");
                    scanf("%d",&s[i].month1);
                    printf("\nEnter year (yyyy): ");
                    scanf("%d",&s[i].year1);                   
    }
       for(i=0;i<5;i++)
    {
                    printf("\n Name : %s",s[i].name);
                    printf("\n DOB : %d/%d/%d",s[i].date,s[i].month,s[i].year);
                    printf("\n Department : %s",s[i].department);
                    printf("\n Gender : %s",s[i].gender);
                    printf("\n Date Of Admission : %d/%d/%d",s[i].date1,s[i].month1,s[i].year1);                                     
    }
    getch();
    
}
