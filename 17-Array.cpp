#include<iostream>
using namespace std;

int main()
{
//	int i,a=INT_MAX,arr[]={12,1,4,9,2};
//	
//	for(i=0;i<5;i++)
//	{
//		if(arr[i]<a)
//		a=arr[i];
//	}
//	
//	cout<<a;

	int i,a=INT_MIN,arr[]={12,1,4,9,2};
	
	for(i=0;i<5;i++)
	{
		if(arr[i]>a)
		a=arr[i];
	}
	
	cout<<a;
}
