#include<iostream>
using namespace std;
int main()
{
	int n,i,p=0;
	cout<<"enter an integer to find perfect number of not=";
	cin>>n;
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		{
			p+=i;
		}
	}
	if(p==n)
	{
		cout<<n<<"is a prfect number";
	}
	else
	{
		cout<<n<<"is not a perfect number";
	}
	return 0;
}
