#include<iostream>
using namespace std;
int swap(int a,int b)
{
	cout<<"before swapping"<<endl;
	cout<<a<<endl<<b<<endl;
	a=a-b;
	b=a+b;
	cout<<"after swapping"<<endl;
	cout<<a<<endl<<b;
	
}
int main()
{
	swap(20,10);
	return 0;
}
