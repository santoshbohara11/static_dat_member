#include<iostream>
using namespace std;

class SI{
	public:
		int p;
		static int r;
		int t;
		
	public:
		void getdata()
		{
			cout<<"enter principal and time:"<<endl;
			cin>>t>>p;
		}
		void calculate()
		{
		    
		    cout<<(p * r * t)/100;
		}
};
int SI ::r=8;
int main()
{
	int i=0;
	SI obj[3];
	for (i=0;i<3;i++)
	{
		cout<<"taking data from person"<<i+1<<endl;
		obj[i].getdata();
	}
		for (i=0;i<3;i++)
	{
		cout<<endl<<"the simple intrest of a person "<<i+1<<" is:";
		obj[i].calculate();
	}
	return 0;
}
