#include<iostream>
using namespace std;
void create()
{
	float si, p,r,t;
	cout<<"enter the principal:\n";
	cin>>p;
	cout<<"enter the rate:\n";
	cin>>r;
	cout<<"enter time:\n";
	cin>>t;
	
	si=p*r*t/100;
	cout<<"simple interest is:"<<si;
}

 
int main()
{
	create();
	return 0;
}
