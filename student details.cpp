#include<iostream>
using namespace std;
class details
{
	char q[20];
	int age;
	public:
		void create()
        {
        	cout<<"enter the name of student:\nAnd age:\n";
        	cin>>q>>age;        	

		}
		int display()
		{
			cout<<"the details are \nname:"<<q<<"\nage is:"<<age;
			
		}
};
int main()
{
	details stu1;
	stu1.create();
	stu1.display();
	return 0;
}
