//friend function find max number
#include<iostream>
using namespace std;
class d
{
	int a,b;
	public:
		void get()
		{
			cout<<"Enter the number 1st\n";
			cin>>a;
			cout<<"Enter the number 2nd\n";
			cin>>b;
			
		}
		
	friend void number(d n);
		
};
void number(d n)
		{
			if(n.a>n.b)
			{
				cout<<"a is max no.\n"<<n.a<<endl;
			}
			else
			{
				cout<<"b is max no."<<n.b<<endl;
			}
		}

int main()
{
	d obj;
	obj.get();
	number(obj);
	return 0;
}











