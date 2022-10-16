#include<iostream>
using namespace std;
class printnumber{
	int n1;
	char *x;
	float n2;
	double n3;
	long int n4;
	public:
		printnumber(int);
		printnumber(char*);
		printnumber(float);
		printnumber(double);
		printnumber(long int);
		void display();
};
printnumber::printnumber(int a)
{
	n1=a;
	cout<<"integer is"<<n1;
}
printnumber::printnumber(char *b)
{
	x=b;
	cout<<"char is"<<x;
}
printnumber::printnumber(float c)
{
	n2=c;
	cout<<"float is"<<n2;
}
printnumber::printnumber(double d)
{
	n3=d;
	cout<<"double is"<<n3;
}
printnumber::printnumber(long int e)
{
	n4=e;
	cout<<"long int is"<<n4;
}
void printnumber::display()
{
	cout<<"p1"<<n1;
	cout<<"p2"<<x;
	cout<<"p3"<<n2;
	cout<<"p4"<<n3;
	cout<<"p5"<<n4;
	
	
}

int main()
{
	printnumber print();
	print.display;
	return 0;
}
