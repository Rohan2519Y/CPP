#include<iostream>
using namespace std;

int main()
{
//	int a[]={1,2,3,4,5},n,i;
//	
//	cout<<"Enter  Number: ";
//	cin>>n;
//	
//	for(i=0;i<5;i++)
//	{
//		if(n==a[i])
//		{
//			cout<<i;
//			break;
//		}
//	}

//	int a[]={1,2,3,4,5},b[5],i,j=0;
//	
//	for(i=4;i>=0;i--)
//	{
//		b[j]=a[i];
//		j++;
//	}
//	j=0;
//	for(i=0;i<5;i++)
//	{
//		a[i]=b[j];
//		j++;
//	}
//	
//	for(i=0;i<5;i++)
//	{
//		cout<<a[i];
//	}

//	int a[]={1,2,3,4,5},i=0,j=4;
//	
//	while(i<j)
//	{
//		swap(a[i],a[j]);
//		i++;
//		j--;
//	}
//	
//	for(i=0;i<5;i++)
//	{
//		cout<<a[i];
//	}

//	int a[]={1,2,3,6,5},fm=INT_MIN,sm=INT_MIN,i;
//	
//	for(i=0;i<5;i++)
//	{
//		if(a[i]>fm)
//		fm=a[i];
//	}
//	for(i=0;i<5;i++)
//	{
//		if(a[i]!=fm)
//		sm=max(a[i],sm);
//	}
//	
//	cout<<sm;

//	int a[6],i;
//	a[0]=0;
//	a[1]=1;
//	
//	for(i=2;i<6;i++)
//	{
//		a[i]=a[i-1]+a[i-2];
//	}
//	
//	cout<<a[5];

	int a[5]={1,2,3,4,5},i,f=a[0];
	
	for(i=0;i<4;i++)
	{
		a[i]=a[i+1];
	}
	a[4]=f;
	for(i=0;i<5;i++)
	cout<<a[i];
}
