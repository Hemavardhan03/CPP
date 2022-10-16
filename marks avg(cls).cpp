#include<iostream>
using namespace std;
class student{
	char name[20];
	int m1,m2,m3,m4,avg;
	public:
		void input();
		void display();
		void calculation();
};
void student::input() 
{
	cout<<"enter student name=";
	cin>>name;
	cout<<"mrk 1=";
	cin>>m1;
		cout<<"mrk 2=";
	cin>>m2;
		cout<<"mrk 3=";
	cin>>m3;
		cout<<"mrk 4=";
	cin>>m4;
}
void student::calculation()
{
	cout<<"total marks="<<m1+m2+m3+m4<<endl;
	avg=(m1+m2+m3+m4)/4;
	cout<<"average marks="<<avg<<endl;
}
void student::display()
{
	if(avg > 75)
	{
		cout<<"grade=S";
	}
	else if(avg>60 and avg<75)
	{
		cout<<"grade=A";
	}
	else if(avg >50 and avg <60)
	{
		cout<<"grade=B";
	}
	else if(avg<50)
	{
		cout<<"grade=fail";
	}
	else
	{
		cout<<"enter valid input";
	}
}
int main()
{
	student s;
	s.input();
	s.calculation();              
	s.display();
	return 0;
}
