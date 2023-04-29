#include<iostream>
using namespace std;
class overload
{
	public:
		//rectangle:
    int area(int l,int w)
    {
    	cout<<"area of rectangle"<<l*w<<endl;
	}
// circle:
int area(int r)
    {
    	cout<<"area of circle"<<2*3.14*r*r<<endl;
	}
//triangle:	
int area(float h,float b,int c)
	{
		cout<<"area of triangle"<<(h*b)/c<<endl;
	}
};
int main()
{
	overload obj;
	obj.area(4,3);
	obj.area(6);
	obj.area(2,4,2);
	return 0;
}
