#include<stdio.h>
#include<conio.h>
struct student
{
       char sname[100];
       int roll;
       int marks;
      // char gender;          
}s[100];
int j=0;

int display(struct student *s1);
int display1(struct student s2[]);
int main()
{
    int ch;
    printf("***************Pointer Array***************\n\n\n");
    for(int i=0;i<100;i++)
    {
            printf("Enter Student Name : ");
            scanf("%s",&s[i].sname);
            printf("Enter Student Roll Number: ");
            scanf("%d",&s[i].roll);
            printf("Enter Marks : ");
            scanf("%d",&s[i].marks);
            //printf("Enter Student gender (M/F) : ");
            //scanf("%c",&s[i].gender); 
            display(&s[i]);
            j++;
            printf("\n ---------------------\n");
            printf("\nChoose from below options : \n1.To add more.\n2.Display All\n3.Exit\n\t");
            scanf("%d",&ch);
            printf("\n\t\t ---------------------\n");
            printf("\n\t\t ---------------------\n");
            if(ch==3)
            {
                     printf("Thank U");
                     break;
            }
            if(ch==2){
                      display1(s);
                      int ch1;
                        
                      printf("\nChoose from below options : \n1.To add more.\n2.Exit\n\t");
                      scanf("%d",&ch1);
                      printf("\n\t\t ---------------------\n");
                      printf("\n\t\t ---------------------\n");
                      if(ch1==2)
                      {
                                
                               printf("Thank U");
                               break;
                      }
                      
            }               
    }
    getch();
}
int display(struct student *s1)
{
    printf("\n\n \t-----------Last Entered Student Detail----------");
    printf("\nStudent Name : %s\n",s1->sname);
    printf("Student ROLL NUMBER : %d\n",s1->roll);
    printf("Student Marks Secured : %d\n",s1->marks);
    printf("\n \t---------------------\n");
   // printf("Student Gender : %c\n",s1->gender);
    return 0;
    
    }

int display1(struct student s1[])
{
    printf("\n\n\n -----------Students Detail----------\n");
    for(int i=0;i<j;i++)
    {
            printf("Student Name : %s\n",s1[i].sname);
            printf("Student ROLL NUMBER : %d\n",s1[i].roll);
            printf("Student Marks Secured : %d\n",s1[i].marks);
            printf("\n ---------------------\n");
            //printf("Student Gender : %c\n",s1[i].gender);
    
    }
    return 0;
}
