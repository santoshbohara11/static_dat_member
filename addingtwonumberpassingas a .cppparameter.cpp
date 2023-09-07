//add a number by passing two object as a parameter
#include<iostream>
using namespace std;
class demo{
	private:
		int a;
	public:
		void getdata()
		{
			cout<<"enter the value of a:";
			cin>>a;
		}
		void sum(demo x, demo y)
		{
		   int	result;
		   result =x.a+y.a;
		   cout<<"the sum is "<<result;
		}
};
int main()
{
     demo obj1,obj2,obj3;
	 obj1.getdata();
	 obj2.getdata();
	 obj3.sum(obj1,obj2);
	 return 0;	
}
