#include<stdio.h>
int main()
{
	float sum=0,i,nums;
	int n;
	printf("enter the total numbers: ");
	scanf("%d", &n);
	printf("\nenter the %d number one by one :\n", n);
	for(i=0; i<n; i++)
	{
		scanf("%f", &nums);
		sum=sum+nums;
		
	}
	float ave=sum/n;
	printf("the average using for loop is :%f", ave);
	
	while(i<n)
	{
		scanf("%f", &nums);
		sum=sum+nums;
		i++;
		
	}
  float ave1=sum/n;
	printf("\nthe average using while  loop is :%f", ave1);
	
	
	return 0;
	
}
