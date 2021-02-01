#include<iostream>
using namespace std;
class A
{
	int b,d;
	public:
		void dd()
		{
			cout<<"enter the valu of b,d:\n";
			cin>>b>>d;
			
		}
		
};
class G : public A
{  public:
	int c,a;
	void area()
	{   int are;
		cout<<"enter length and breadtg:\n";
		cin>>c>>a;
		are=c*a;
		cout<<"area="<<are<<"\n";
		
	}
};
int main()
{
  A kl;
  kl.dd();
  G l;
   l.area();
  return 0;
  
}
