#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    printf("********Character counting Operation*******\n");
    char wandapakora[1000],ch;
    printf("Enter String : ");
    scanf("%s",&wandapakora);
    int i,space=0,tabs=0,nline=0,charac=0,length=strlen(wandapakora);
    for(i=0;i<length;i++)
    {
                         ch=wandapakora[i];
                         switch(ch)
                         {
                                   case ' ': space++;
                                   break;
                                   case '\n': nline++;
                                   break;
                                   case '\t': tabs++;
                                   break;
                                   default: charac++;
                                   break;
                         }
    }
    
    printf("\n No. of Characters = %d\n\nNo. of Space = %d\n\nNo. of tabs = %d\n\nNo. of new lines = %d\n\n ",charac,space,tabs,nline);
    getch();
}
