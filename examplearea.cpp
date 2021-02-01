#include<iostream>
using namespace std;
class rectangle
{
	public:
		float len;
		float breadth;
		int area()
		{
			return (len*breadth);
			
		}
		
};
int main()
{
	rectangle A1;
	cout<<"enter len:\n";
	cin>>A1.len;
	cout<<"enter breadth:\n";
	cin>>A1.breadth;
	cout<<"the area is :"<<A1.area();
	return 0;
}
