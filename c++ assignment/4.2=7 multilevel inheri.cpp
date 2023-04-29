#include<iostream>
using namespace std;
class student
{
  public:
  int rollno;
  
  void getdata()
  {
     cout<<"enter the roll no"<<endl;
	 cin>>rollno;	
  }	
  
  void display()
  {
  	cout<<"roll no is"<<rollno<<endl;
  }
};

class test:public student
{
  public:
  int math,eng;
  
  void getdata1()
  {
  	cout<<"enter the math"<<endl;
  	cin>>math;
  	cout<<"enter the eng"<<endl;
  	cin>>eng;
  }
   void display1()
   {
   	cout<<"Math marks is"<<math<<endl<<"English marks is"<<eng<<endl;
   }
  	
};

class result:public test
{
	public:
		int total;
		
		
		void display2()
		{
			total=math+eng;
			cout<<"total marks is"<<total<<endl;
		}
};

int main()
{
	result obj;
	obj.getdata();
	obj.getdata1();
	obj.display();
	obj.display1();
	obj.display2();
	return 0;
	
}



