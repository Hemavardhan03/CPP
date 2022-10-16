#include<iostream>
using namespace std;
int main(){
	int n,t1=0,t2=1,nt=0,i;
	cout<<"enter the number : ";
	cin>>n;
	if(n>0){
		cout<<"\n the"<<n<<"th fibonnaci series is : ";
		for(i=1;i<=n;i++){
			if(i==1){
				cout<<t1<<", ";
				continue;
			}
			if(i==2){
				cout<<t2<<", ";
				continue;
			}	
			nt=t1+t2;
			t1=t2;
			t2=nt;
		
			cout<<nt<<endl;
		}
	}	
	else if(n<0){
		cout<<"invalid input enter psitive number";
	}
	else{
		cout<<"invalid input enter psitive number";
	}
		
	
	return 0;
}
