#include<iostream>
using namespace std;
class kalai
{
	public:
	void phn()
	{
		cout<<"\n 7338958911";
	}
};
class kabilan : public kalai
{
	public:
	void nickname()
	{
		cout<<"\n kabil";
	}
};
int main()
{
	kabilan obj;
	obj.nickname();
	obj.phn();
	return 0;
}
