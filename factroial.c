/*c program for finding factroial of given numbers using user define function*/
#include<stdio.h>
  
int fact(int f);
  
 void main()
   
   {
    int i,fac;
    printf("enter the number to find factroial:\n");
    scanf("%d",&i);

    fac=fact(i);

    printf("the factroial of %d is %d", i,fac);
   }

  int fact( f)
   {
     if(f==1)
      {
        return 1;
      }
     else 
       return f*fact(f-1);
    

}

