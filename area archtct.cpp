#include<iostream>
using namespace std;
class area{
	int breadth,height,radius,side,area;
	public:
		void rectangle();
		void circle();
		void square();
};
void area::rectangle()
{
		cout<<"enter breadth te determine area of rect=\n";
	cin>>breadth;
	cout<<"enter height to determine area of rect=\n";
	cin>>height;
	area=breadth*height;
	cout<<"area of rectangle="<<area<<endl;
}
void area::circle()
{
	cout<<"enter radius to determine thwe area of circular path=\n";
	cin>>radius;
	area=3.14*radius*radius;
	cout<<"area of circle="<<area<<endl;
}
void area::square()
{
	
	cout<<"enter side to determine area of square path=\n";
	cin>>side;
	area=side*side;
	cout<<"area of rectangle="<<area<<endl   ;
	
}
int main()
{
	area a;
	a.rectangle();
	a.square();
    a.circle();
    return 0;
}


