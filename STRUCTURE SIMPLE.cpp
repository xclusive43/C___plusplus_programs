#include<stdio.h>
 struct book
 {
 	int a;
 	char i[20];
 	char s[20];
 	
 } rs;

 
	   
	   
int main()
{
	printf("enter booknumber:\n\t");
	  scanf("%d", &rs.a);
	printf("enter book name:\n\t");
	  scanf("%s",&rs.i);
	printf("enter the author name:\n");
	  scanf("%s",&rs.s);    
  	printf("\nbook no:%d\nbook name:%s\nauthor name:%s\n",rs.a,rs.i,rs.s);
   
     	  
}
   
