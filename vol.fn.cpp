#include<iostream>
using namespace std;
int volume(int b,int h,int l)
{
	int volume;
	cout<<"enter values of breadth,height and length of triangle\n";
	cin>>b>>h>>l;
	volume=b*h*l;
	cout<<"volume of triangle"<<volume <<endl;
  }  
  int volume(float r,float u)
  {
  	int volume;
  	cout<<"enter values of radius and height of cylinder\n";
  	cin>>r>>u;
  	volume=3.14*r*r*u;
  	cout<<"volume of cylinder"<<volume <<endl;
  }
  int volume(int s)
  {
  	int volume;
  	cout<<"enter value of side of square\n";
  	cin>>s;
  	volume=s*s*s;
  	cout<<"volume of square"<<volume <<endl;
}
  int main()
  {
  	int b,h,l,r,u,s;
  	
  	volume(b,h,l);
  	volume(r,u);
  	volume(s);
  	return 0;
  }
