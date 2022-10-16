#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int a,b,c,d,r1,r2;
	cout<<"enter values of a,b,c=";
	cin>>a>>b>>c;
	d=(b*b)-(4*a*c);
	r1=(-b+sqrt(d))/(2*a);
	r2=(-b-sqrt(d))/(2*a);
	
	cout<<"the roots of qudratic eqn by given values=";
	cout<<r1<<"\n"<<r2;
	if(r1==r2)
	{
		cout<<"roots are equal and real";
	}
	else
	{
		cout<<"roots are unequal and real";
	}
}
