#include<iostream>
using namespace std;

int main()
{
//	int n,r,b=0,i=1;
//	
//	cout<<"Enter Number: ";
//	cin>>n;
//	
//	while(n>0)
//	{
//		r=n%2;
//		n=n/2;
//		b=r*i+b;
//		i*=10;
//	}
//	
//	cout<<b;

//	int n,r,b=0,i=1;
//	
//	cout<<"Enter Number: ";
//	cin>>n;
//	
//	while(n>0)
//	{
//		r=n%10;
//		n=n/10;
//		b=r*i+b;
//		i*=2;
//	}
//	
//	cout<<b;

//	Decimal to Octa
	int n,r,b=0,i=1;
	
	cout<<"Enter Number: ";
	cin>>n;
	
	while(n>0)
	{
		r=n%8;
		n=n/8;
		b=r*i+b;
		i*=10;
	}
	
	cout<<b;
}
