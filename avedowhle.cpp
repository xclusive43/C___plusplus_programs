#include<stdio.h>
 
  main()
{
  int n, numbers, i=0,Sum=0;
  float Average;
 
  printf("\nPlease Enter How many Number you want?\n");
  scanf("%d",&n);
 
  printf("\nPlease Enter the elements one by one\n");
  do
   {
     scanf("%d",&numbers);
     Sum = Sum +numbers;
     i++;
   }while(i<n);
 
  Average = Sum/n;
 
  printf("\nSum of the %d Numbers = %d",n, Sum);
  printf("\nAverage of the %d Numbers = %.2f",n, Average);
 
  return 0;
}
