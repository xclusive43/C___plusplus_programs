#include<iostream>
using namespace std;
int a[4][4]={0},b[4][4]={0},c[4][4]={0},k,m,n,i,j;
 
 int data();
 int mul();
 int show();

int main()
{   
    data();
    mul();
    show();
    
    int add(int a22 ,int b22 ,int c22 );
    int sub(int a33 ,int b33 ,int c33 );
    int mul(int a44 ,int b44 ,int c44 );
    
	return 0;
}
int data()
{
	int num;
	cout<<"enter the elements in array a[4][4]: \t";
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			cin>>num;
			a[i][j]=num;
		}
	}
	
	num=0;
	
	cout<<"enter the elements in array b[4][4]: \t";
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			cin>>num;
			b[i][j]=num;
		}
	}
	cout<<"matrix a[4][4] is : "<<endl;
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			 cout<<a[i][j];
			 cout<<"\t";
		 
		}
		cout<<" \n";
	}
	cout<<"matrix b[4][4] is : "<<endl;
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			 cout<<b[i][j];
			 cout<<"\t";
		 
		}
		cout<<" \n";
	}
}


int add(int a22,int b22 ,int c22 )
{
   c22=a22+b22;
   
}

int sub(int a33 ,int b33 ,int c33 )
{
 c33 =a33-b33;
}
    
int mul(int a44 ,int b44 ,int c44 )
{   
   c44=(a44*b44); 	
}

int mul()
{    
	int a1[2][2]={0};int a2[2][2]={0};int a3[2][2]={0};int a4[2][2]={0};//division for a
	int a5[2][2]={0};int a6[2][2]={0};int a7[2][2]={0};int a8[2][2]={0};//division for b
	int c1[2][2]={0};int c2[2][2]={0};int c3[2][2]={0};int c4[2][2]={0};
	int p1 , p2 ,p3, p4;
	int p5 , p6,p7 ;
	
	int temp1,temp2 ;
	
	for(i=0;i<2;i++)//a[2][2] division and b[2][2] division
	{
		for(j=0;j<2;j++)
		{
			a1[i][j]=a[i][j];
			a5[i][j]=b[i][j];
		}
	}
	
	for(i=0;i<2;i++)////a[2][2] division and b[2][2] division
	{
		for(j=2;j<4;j++)
		{
			a2[i][(j-2)]=a[i][j];
			a6[i][(j-2)]=b[i][j];
		}
	}
	
	
	for(i=2;i<4;i++)////a[2][2] division and b[2][2] division
	{
		for(j=0;j<2;j++)
		{
			a3[(i-2)][j]=a[i][j];
			a7[(i-2)][j]=b[i][j];
		}
	}
	
	for(i=2;i<2;i++)////a[2][2] division and b[2][2] division
	{
		for(j=2;j<4;j++)
		{
			a4[(i-2)][(j-2)]=a[i][j];
			a8[(i-2)][(j-2)]=b[i][j];
		}
	}
	
	
	//p1=a11*(b12-b22)//
	sub(a6[1][2],a8[2][2],temp1);
	mul(a1[1][1],temp1,p1);
	//p2=b22*(a11+a12)
	add(a1[1][1],a2[1][2],temp1);
	mul(temp1,a8[2][2],p2);
    //p3=b11*(a21+a22)
	add(a3[2][1],a4[2][2],temp1);
	mul(a5[1][1],temp1,p3);
	 
	//p4=a22*(b21-b11)
	sub(a7[2][1],a5[1][1],temp1);
	mul(a4[2][2],temp1,p4);
	
	//p5=(a11+a22)*(b11+b22)
	add(a1[1][1],a4[2][2],temp1);
	add(a5[1][1],a8[2][2],temp2);
	mul(temp1,temp2,p5);
	
	//p6=(a12-a22)*(b21+b22)
	sub(a2[1][2],a4[2][2],temp1);
	add(a7[2][1],a8[2][2],temp2);
	mul(temp1,temp2,p6);
	
	//p7=(a11-a21)*(b21+b12)
	sub(a1[1][1],a3[2][1],temp1);
	add(a7[2][1],a6[1][2],temp2);
	mul(temp1,temp2,p7);
	
	//c11=p6+p5+p4-p2
	add(p6,p5,temp1);
	sub(p4,p2,temp2);
	add(temp1,temp2,c1[1][1]);
	cout<<c1[1][1];
	//c12=p1+p2
	add(p1,p2,c2[1][2]);
	cout<<c2[1][2];
	//c21=p3+p4
	add(p3,p4,c3[2][1]);
    	cout<<c3[2][1];
	
	//c22=(p1+p5)-(p3+p7)
	add(p1,p5,temp1);
	add(p3,p7,temp2);
	sub(temp1,temp2,c4[2][2]);
	cout<<c4[2][2];
 
	  
	//stote in c[4][4]
	for(i=0;i<2;i++) 
	{
		for(j=0;j<2;j++)
	 
		 c[i][j]=c1[i][j];
		 
	}
	
	for(i=0;i<2;i++) 
	{
		for(j=2;j<4;j++)
		 
			c[i][j]=c2[i][(j-2)];
		 
	}
	
	 
   for(i=2;i<4;i++) 
	{
		for(j=0;j<2;j++)
		 
			 c[i][j]=c3[(i-2)][j];
		 
	}
	 
	for(i=2;i<4;i++) 
	{    
		for(j=2;j<4;j++)
		    
			 c[i][j]=c4[(i-2)][(j-2)];
	       
	}
 
}

int show()
{
  	cout<<"matrix c[4][4] is : "<<endl;
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			 cout<<c[i][j];
			 cout<<"\t";
		 
		}
		cout<<" \n";
	}
}
