#include<iostream>
using namespace std;
class batsman
{
	public:
        int runs;
        int matches;
        int notout;
        int battingavg;
        int dismissed;
		double average; 
		
		
		void dis()
		{
			cout<<"enter the total runs"<<endl;
			cin>>runs;
			cout<<"enter the no of matches(innings)"<<endl;
			cin>>matches;
			cout<<"enter the not out number"<<endl;
			cin>>notout;
			
			dismissed=matches-notout;
			average=runs/dismissed;
		}
		
};


class cricketer:public batsman
{
	public:
		void input()
		{
			cout<<endl<<"total runs are"<<runs<<endl;
			cout<<"number of matches(innings) is"<<matches<<endl;
			cout<<"not out innings are"<<notout<<endl;
			cout<<"number of times dismissed"<<dismissed<<endl;
			cout<<"batting average is(performance)"<<average<<endl;
		}
};
int main()
{
	cricketer obj;
	obj.dis();
	obj.input();
	return 0;
}
