#include<iostream>
using namespace std;
class demo
{
	public:
	int a,b;
	
	demo(int x,int y)
	{
		a=x;
		b=y;
	}
	
	void display()
	{
		
	    cout<<"addition is"<<a+b<<endl;
		cout<<"substraction is"<<a-b<<endl;
		cout<<"multiply is"<<a*b<<endl;
		cout<<"division is"<<a/b<<endl;	
	}	
};
int main()
{
	demo obj(2,3);
	obj.display();
	
	return 0;
}
