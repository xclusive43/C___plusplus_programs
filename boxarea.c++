#include<iostream>
using namespace std;
class rec
{
	public:
		int length;
		int breadth;
		
		int area()
		{
			return(length*breadth);
		}
};
 
 int main()
 {
 	rec box1;
 	cout<<"enter lenght:";
		cin>>box1.length;
		cout<<"and breadth:";
		cin>>box1.breadth;
 	cout<<"area of box1:"<<box1.area();
 	return 0;
 }
