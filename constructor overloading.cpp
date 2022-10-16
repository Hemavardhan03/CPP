#include<iostream>
using namespace std;
class print{
	int a;
	char *b;
	public:
		print(int,char*);
		print(char*,int);
		void display();
};
print::print(int n1,char *n2)
{
	n1=a;
	cout<<"enter integer";
	cin>>a;
	*n2=*b;
	cout<<"enter character";
	cin>>*b;
}
print::print(char *n2,int n1)
{
	*n2=*b;
	n1=a;
}
   void print::display()   
{
	cout<<"n1"<<a;
	cout<<"n2"<<*b;
	
}
int main()
{
	print p;
	p.display;
	return 0;
}
