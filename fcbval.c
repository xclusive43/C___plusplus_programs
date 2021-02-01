#include<stdio.h>
int sum(int c,int d);
main()
{
int a,b;
printf("enter the value of a and b:\n");
scanf("%d %d",&a, &b);
sum(a,b);
}

int sum(c,d)
{
return c+d;
}
