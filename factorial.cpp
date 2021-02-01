#include<stdio.h>
 
main()
{
  int f=1, n;
  printf("enter the value to find the factorial:");
  scanf("%d",&n);
  for(int i=1; i<=n; i++)
{
	f=f*i;
	
	
   } 
   printf("factorial of %d! is : %d", n, f);  
 
  return 0;
}
