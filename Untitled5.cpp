#include<iostream>
using namespace std;
class person
{
	public:
		int n;
		char a[25];
		void create();
	    void display();
};

void person::create()
{
	cout<<"enter the person number:";
	cin>>person.n;
	cout<<"enter the name:";
	cin>>person.a;
	}
void person::display()
{
	cout<<"the person no. is:"<<person.n;
	cout<<"the name is:"<<person.a;
	}
	
	int main()
	{
		person a1;
		a1.create();
		a1.display();
		return 0;
		
	}
	
	
	
	
	
	
	
	
	
		
