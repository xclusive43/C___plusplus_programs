#include<stdio.h>
#include<math.h>
int fact(int f);
 void main()
{
	 int num;
	 printf("enter the binary  number:\n");
	 scanf("%d",&num);
	fact(num);
	
 }

int fact(num)
{
int b_val,d_val=0, rem,i=0;
     
 while(num>0)
{
  rem=num % 10;
  d_val=d_val+rem*pow(2,i);
  num=num/10;
  i++;

}
printf("decimal_val is %d\n", d_val);
}
