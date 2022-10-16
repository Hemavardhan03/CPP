#include<iostream>
using namespace std;
void add(int a,int b)
{
	int add;
	add=a+b;
	cout<<add<<endl;
}
int sub(int a,int b)
{
	int sub;
	sub=a-b;
		cout<<sub<<endl;
}

int mul(int a,int b)
{
	int mul;
	mul=a*b;
	cout<<mul<<endl;
}                                                                                                                                  
int div(int a,int b)
{
	int div;
	div=a/b;
	cout<<div<<endl;
}
int main()
{
	add(2,3);
	sub(2,5);
	mul(2,5);
	div(6,2);
	return 0;
}
