#include<iostream>
using namespace std;
class bank
{
   public:
        string name;
		string actype;
		int number;
		float balance;
		
		void getdata()
		{
			cout<<"enter the holder name:-"<<endl;
			cin>>name;
			cout<<"enter the actype:-"<<endl;
			cin>>actype;
			cout<<"enter the number:-"<<endl;
			cin>>number;
			cout<<"enter the balance:-"<<endl;
			cin>>balance;
		}	
		
		void deposit()
		{
			int bal;
			cout<<"enter the amt to deposit"<<endl;
			cin>>bal;
			balance+=bal;
			cout<<"amount deposit successfuly\n your new balance: "<<balance;
		}
		
		void check()
		{
			int bal;
			cout<<"Your balance: "<<balance;
			cout<<"Enter the amount to withdraw: ";
			cin>>bal;
			if(bal<=balance)
			{
				balance-=bal;
				cout<<"Remaining balance: "<<balance;
			}
		}
		void display()
		{
			cout<<"Name: "<<name;
			cout<<"Balance: "<<balance;
		}
};
int main()
{
	bank obj;
	obj.getdata();
	obj.deposit();
	obj.check();
	obj.display();
	return 0;
}
