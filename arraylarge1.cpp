#include<stdio.h>
int main()
{
	int i,num,large,small,a[10];
	
	printf("enter the size of array:\n");
	scanf("%d",&num);
	
	printf("enter the %d element in the array:\n", num);
	for(i=0; i<num; i++)
	{
		scanf("%d",&a[i]);
	}
	large=small=a[0];
	
	for(i=0;i<num; ++i)
	{
		if(a[i]>large)
		{
			large=a[i];
		}
		if(a[i]<small)
		{
			small=a[i];
		}
	}
	printf("large is %d\n",large);
	printf("small is %d", small);
	
	return 0;
	
}
