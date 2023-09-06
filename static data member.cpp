#include<iostream>
using namespace std;

class SI{
	private:
		int principal;
		static int rate;
		int time;
		
	public:
		void getdata()
		{
			cout<<"enter principal and time:"<<endl;
			cin>>time>>principal;
		}
		void calculate()
		{
		    //int intrest;
		    cout<<(principal * rate * time)/100;
		}
};
int SI ::rate=8;
int main()
{
	int i=0;
	SI obj[3];
	for(i=0;i<3;i++)
	{
		cout<<endl<<"taking data from person"<<i+1<<endl;
		obj[i].getdata();
	}
		for(i=0;i<3;i++)
	{
		cout<<endl<<"simple interest of a person "<<i+1<<"is:";
		obj[i].calculate();
		
	}
	return 0;
}
