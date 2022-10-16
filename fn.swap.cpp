#include<iostream>
using namespace std;
int swap(int a,int b)
{
	int temp;
	cout<<a<<endl<<b<<endl;
	temp=a;
	a=b;
	b=temp;
	cout<<"after swapping"<<endl;
	cout<<a<<endl<<b;
	
}
int main()
{
	swap(20,10);
	return 0;
}
