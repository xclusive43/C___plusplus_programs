#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
struct student
{
       char sname[100];
       int roll;
       int marks;
      // char gender;          
}*s=NULL;

int display(struct student *s1);

int main()
{
    int num;
    printf("Enter number of students details to be inserted : ");
    scanf("%d",&num);
    if((s=(struct student *)malloc(num*sizeof(struct student)))!=NULL)
    {
                 for(int i=0;i<num;i++)
                 {
                       printf("\nEnter name : ");
                       scanf("%s",(s+i)->sname);
                       printf("Enter Student Roll Number: ");
                       scanf("%d",(s+i+100)->roll);
                       //printf("Enter Marks : ");
                       //scanf("%d",(s+i+100+2)->marks);
                       display(s+i);
                       
                 }
    }
    else
    printf("\n Allocation fail.");
    
    getch();
}

int display(struct student *s1)
{
    printf("\n\n \t-----------Last Entered Student Detail----------");
    printf("\nStudent Name : %s\n",s1->sname);
    printf("Student ROLL NUMBER : %d\n",s1->roll);
    //printf("Student Marks Secured : %d\n",s1->marks);
    printf("\n \t---------------------\n");
   // printf("Student Gender : %c\n",s1->gender);
    return 0;
    
}
