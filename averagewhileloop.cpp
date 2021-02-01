#include<stdio.h>
int main()
{
	float sum=0,i,nums;
	int n;
	printf("enter the total numbers: ");
	scanf("%d", &n);
	printf("\nenter the %d number one by one :", n);
 while(i<n)
	{
		scanf("%f", &nums);
		sum=sum+nums;
		i++;
		
	}
	float ave=sum/n;
	printf("the average is :%f", ave);
	return 0;
	
}
