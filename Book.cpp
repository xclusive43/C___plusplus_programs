#include<stdio.h>
#include<conio.h>

struct student
{
       char name[100];
       int book_id;
       
       char author[100];
       char publisher[100];
       
       
       
       
}s[5];

int main()
{
    printf("********Structure Operation*******\n");
    int i;
    for(i=0;i<5;i++)
    {
                    printf("\nEnter Book Name  Number %d :",i+1);
                    scanf("%s",&s[i].name);
                    
                    printf("\nEnter Book ID  Number %d :",i+1);
                    scanf("%d",&s[i].book_id);
                    
                    printf("\nEnter Author Name  Number %d :",i+1);
                    scanf("%s",&s[i].author);
                    printf("\nEnter Publisher  Number %d :",i+1);
                    scanf("%s",&s[i].publisher); 
                    
                    printf("\n\n");
                                      
    }
    printf("\n\n\t\t---------------Display Book Details----------------------");
       for(i=0;i<5;i++)
    {
                    
                    printf("\n Book ID : %d",s[i].book_id);
                    printf("\n Name : %s",s[i].name);
                    printf("\n Author Name : %s",s[i].author);
                    printf("\n Publisher : %s \n\n",s[i].publisher);
                                                         
    }
    getch();
    
}
