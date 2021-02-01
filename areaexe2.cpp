#include<iostream>
using namespace std;
class area
{
public:	
	int len;
	int breadth;
 
 ~area()
 {
 	len=10;
 	cout<<" false len by constructor is 10";
 	
 } 
 
 int cr()
 {
 	return(len*breadth);
 }
};
int main()
{ int i;
i=1;
do
{

	area a;
	cout<<"\nconstructor  of lenght is been destroy by destructor so enter the lenght:\n";
 cin>>a.len;
	cout<<"enter d breadth:\n";
	cin>>a.breadth;
	cout<<"area is:"<<a.cr()<<"\n";
	i++;
} while(i<5);
	return 0;
	
}
