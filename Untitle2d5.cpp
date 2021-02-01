 #include<iostream>
using namespace std;
class A
{
	int a;
	public:
		int b;
		void get_ab();
		int get_a(void);
		void show_a(void);
};
class B:private A

{
	int c;
	public:
		void mul(void);
		void dis(void);
};
void A::get_ab()
{
	cout<<"enter a and b:\n";
	cin>>a>>b;
	
 } 
  int A::get_a()
  {
  	cout<<"enter the a:\n";
  	cin>>a;
  }
  void A::show_a()
  {
  	cout<<"a="<<a;
  	
  }
  void B::mul()
  {
  	get_ab();
  	c=b*get_a();
  }
   void B::dis()
   {
   	show_a();
   	cout<<"b="<<b<<"c="<<c;
   	
   	
   }
   
   int main()
   {
   	B d;
   	d.mul();
   	d.dis();
	   return 0;
   }
   
   
   
   
   
   
