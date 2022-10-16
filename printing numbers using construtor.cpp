#include<iostream>
using namespace std;
class printnumber
{
	public:
		void printn(int a)
		{
			cout<<a<<endl;
		}
		void printn(float a)
		{
			cout<<a<<endl;
		}
		void printn(double a)
		{
			cout<<a<<endl;
		}
};
int main()
{
	printnumber obj;
	obj.printn(2);
	obj.printn(2.5);
	obj.printn(2.1233456);
}  


