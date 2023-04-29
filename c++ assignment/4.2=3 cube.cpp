#include<iostream>
using namespace std;

class demo
{
   public:
   	int a,b;
   	int n;
   inline void hello()
   {
   	  cout<<"enter the a value"<<endl;
   	  cin>>a;
   	  cout<<"enter the b value"<<endl;
   	  cin>>b;
   }
   
 void multi()
   {
   	cout<<"multiply is:"<<a*b<<endl;
   }
  void hii()
   {
   	cout<<"enter the n value"<<endl;
   	cin>>n;
   }
   
void cube()
   {
   	cout<<"cube is:"<<n*n*n<<endl;
   }
	   	
};
int main()
{
	demo obj;
	obj.hello();
	obj.multi();
	obj.hii();
	obj.cube();
	return 0;
}
