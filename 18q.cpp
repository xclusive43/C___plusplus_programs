#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{ FILE *f1;
 
char ch;
printf("enter the text:\n");
 

int nl,nt,nb,nc=0;
 
f1=fopen("text.txt","r");
 
 
while(1) 
{
ch=fgetc(f1);
if(ch==EOF)
break;
nc++; //to count number of characters
if(ch==' ')
nb++; //to count number of blank spaces
if(ch=='\n')
nl++; //to count number of lines
if(ch=='\t')
nt++; //to count number of tabs
}

fclose(f1);
printf("Total number of character in file = %d \n",nc);
printf("Total number of blank spaces in file = %d \n",nb);
printf("Total number of New Lines in file = %d \n",nl);
printf("Total number of tabs in file = %d \n",nt);

printf("\nEnjoy Programming with Buffercode\n");
return 0;
}
