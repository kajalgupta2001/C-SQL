// simple calculator using class

#include<iostream>
using namespace std;
class calculator
{
   public:
   int a,b;
   
   void add()
   {
   	  cout<<"enter the value of a"<<endl;
   	  cin>>a;
   	  cout<<"enter the value of b"<<endl;
   	  cin>>b;
   	  
   	  cout<<"addition is"<<a+b<<endl<<endl;
	}	
	
	void subs()
	{
		cout<<"substraction is"<<a-b<<endl<<endl;
	}
	
	void multi()
	{
		cout<<"multiply is"<<a*b<<endl<<endl;
	}
	
	void divi()
	{
		cout<<"division is"<<a/b<<endl<<endl;
	}
};
int main()
{
	calculator obj;
	obj.add();
	obj.subs();
	obj.multi();
	obj.divi();
	return 0;
}
