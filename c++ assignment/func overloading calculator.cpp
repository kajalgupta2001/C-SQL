// function overloading

#include<iostream>
using namespace std;
class overloading
{
	public:
		void op(int a,float b,int c,int d,int e)
		{
			cout<<"addition is"<<a+b+c+d+e<<endl;
		}
		void op(int a,int b,int c)
		{
			cout<<"substraction is"<<a-b-c<<endl;
		}
		void op(int a,int b ,int c,double d)
		{
			cout<<"multiplication is"<<a*b*c*d<<endl;
		}
		void op(double a,int b)
		{
			cout<<"division is"<<a/b<<endl;
		}
};
int main()
{
	overloading obj;
	obj.op(4,5);
	obj.op(3,4);
	obj.op(2,3,4,5,6);
	obj.op(3,4,4,3);
	
	return 0;
}
