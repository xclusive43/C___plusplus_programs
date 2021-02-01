#include<iostream>
#include<stdio.h>
using namespace std;
class rectangle
{
	
	public:
		int len, bed;
		int area()
		{
			return (len*bed);
		}
		 
		 char display()
		 {
		 	cout<<"**********area of rectangle***********";
		 }
		 char displays()
		 {
		 	cout<<"%%%%%%%%%%%% SIMPLE INTEREST OF PRT %%%%%%%%%%";
		 }
		 void si()
        {
   	    float sip,p,r,t;
	
 cout<<"enter the P,R,T:\n";
 cin>>p;
 cin>>r;
 cin>>t;
	
	sip=(p*r*t)/100;
	cout<<"si is=\n"<<sip;
	
	
}
}; 


int main()
{   
	rectangle a1;
	cout<<"\n"<<a1.display();
	cout<<"enter len:\n";
	cin>>a1.len;
	cout<<"enter bed:\n";
	cin>>a1.bed;
	cout<<"area="<<a1.area();
	
	rectangle a2;
	a2.si();
	return 0;
	
	
	
	
	
	
}




