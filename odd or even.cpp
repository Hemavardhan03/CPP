#include<ctype.h>
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter integer";
    cin>>n;
    if(int(n))
	{		
    if(n%2==0)
	{
		cout<<n<<"is even";
		}
		else if(n%2!=0)
		{
			cout<<n<<"is odd";
		}

}
	else
		{
			cout<<"enter only integer";
}
}
