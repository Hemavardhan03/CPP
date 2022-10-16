#include<iostream>
using namespace std;
int maxfreq(int arr[10], int s){
	int times=0;
	int count=0;
	int i;
	for(i=1;i<s;i++){
		if(arr[i]==arr[times]){
			count++;
		}
		else{
			count--;
		}
		if(count==0)
		{
			times=i;
			count=1;
		}
	}
	return arr[times];
}
int main()
{
	int arr[10],n,count=0,times=0,i,s,freq;
	cout<<"enter the length of the array : ";
	cin>>n;
	cout<<"enter the array : ";
	for(i=0;i<n;i++){
		cin>>arr[i];
    }
    s=sizeof(arr);
    freq=maxfreq(arr,s);
    for(i=0;i<s;i++){
    	if(arr[i] == freq){

    		count++;
		}
	}
	cout<<maxfreq(arr,s)<<" occurs "<<count<<"  times"<<endl;
	return 0;
}

