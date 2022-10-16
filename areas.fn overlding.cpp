#include<iostream>
using namespace std;
int area(int a,int b)
{
	int area;
	area=0.5*a*b;
	cout<<"area of triangle"<<area<<endl;
  }  
  int area(float r)
  {
  	int area;
  	area=3.14*r*r;
  	cout<<"area of circle"<<area<<endl;
  }
  int area(float a,float b)
  {
  	int area;
  	area=a*b;
  	cout<<"area of rect"<<area<<endl;
  }
  int area(int a)
  {
  	int area;
  	area=a*a;
  	cout<<"area of square"<<area<<endl;
  }
  int main()
  {
  	int x=2,y=3;
  	
  	area(x,y);
  	area(2.6f);
  	area(3.2f,3.4f);
  	area(y);
  	return 0;
  }
