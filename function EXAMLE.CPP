#include<stdio.h>
void create()
{  
  printf("\t\tdislaying");
}
 void display()
 {
 	char a[20];
     printf("\nenter the word that u want to display:");
    scanf("%s",&a);
	 printf("%s",a);
 }
  int main()
  {  
    create();
  	display();
   return 0;
  }
