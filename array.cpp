//array
#include<stdio.h>
#define size 13
int main()
{
	int a[size],i,j,n,sp,space;
	printf("how many lines of pascal trianglesyou ant<=%d?",size);
	scanf("%d",&n);
	space=36;
	printf("\n                            pacal triangle");
	for(i=0;i<n;i++){
		for(sp=1;sp<=space;sp++)
		printf("  ");
		a[i]=1;
		for(j=0;j<=i;j++)
		printf("%6d",a[j]);
		 
		for(j=i;j>=i;j--)
		a[j]=a[j]=a[j-1];
		space -=3;
		printf("\n");
		
	}
	return 0;
}
