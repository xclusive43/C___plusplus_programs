//call by address//call by reference
#include<iostream>
#include<conio.h>
using namespace std;

 

int add(int *y,int *g)
{
    int sum;
    sum=*y + *g;
    cout<<"sum is:"<<sum<<endl;
    
}
    
    
    
int swap(int &h,int &j)
    
    {
        cout<<"\nbefore swapping->" <<h<<" "<<j<<endl;
        
        int temp=0;
        
        temp=h;
        
        h=j;
        
        j=temp;
        
        cout<<"\nafter swapping->" <<h<<" "<<j<<endl;
        
        }
        
int main()
{

int a,b;

cout<<"enter the two numbers"<<endl;

cin>>a;
cin>>b;

   add(&a,&b);
   
   swap(a,b);
   
   getch();
   
   return 0;
}
