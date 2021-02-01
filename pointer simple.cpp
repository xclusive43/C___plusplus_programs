//pointer simple program
 #include<stdio.h>
 int main()
 {  int a,*c;
 	printf("ENTER A INTEGER THAT U WANT TO KNOW THE ADDRESS:\n");
 	scanf("%d",&a);
 	c=&a;
 	printf("D ADRESS OF %d is %d", a,c);
 
 	return 0;
 }
