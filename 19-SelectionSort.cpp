#include<iostream>
using namespace std;

int main()
{
//	int arr[]={2,5,3,1,4},i,j,index;
//	
//	for(i=0;i<5;i++)
//	{
//		index=i;
//		for(j=i+1;j<5;j++)
//		{
//			if(arr[j]<arr[index])
//			index=j;
//		}
//		swap(arr[index],arr[i]);
//	}
//	for(i=0;i<5;i++)
//	{
//		cout<<arr[i];
//	}
	
	int arr[]={2,5,3,1,4},i,j,index;
	
	for(i=0;i<5;i++)
	{
		index=i;
		for(j=i+1;j<5;j++)
		{
			if(arr[j]>arr[index])
			index=j;
		}
		swap(arr[index],arr[i]);
	}
	for(i=0;i<5;i++)
	{
		cout<<arr[i];
	}
}
