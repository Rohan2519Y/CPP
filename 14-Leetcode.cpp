#include<iostream>
using namespace std;

int main()
{
//	int n,a=0,d;
//	
//	cout<<"Enter Number: ";
//	cin>>n;
//	
//	while(n>9)
//	{
//		a=0;
//		while(n>0)
//		{
//			d=n%10;
//			a=a+d;
//			n=n/10;
//		}
//		n=a;
//	}
//	cout<<a;
	
//	int n;
//	
//	cout<<"Enter Number: ";
//	cin>>n;
//	
//	if(n%400==0)
//	{
//	cout<<"Leap Year";
//	}
//	else if(n%4==0 && n%100!=0)
//	{
//	cout<<"Leap Year";
//	}
//	else
//	{
//	cout<<"Not Leap Year";
//	}

//	int n,a=0,d;
//	
//	cout<<"Enter Number: ";
//	cin>>n;
//	
//	while(n>0)
//	{
//		a=a*10+(n%10);
//		n=n/10;
//	}
//	cout<<a;

//	int n,a=1 ;
//	
//	cout<<"Enter NUmber: ";
//	cin>>n;
//	
//	while (a < n) {
//        a = a * 2;	
//	}
//	if(a==n)
//	cout<<"Yes";
//	
//	else
//	cout<<"No";

//	int n,s=1,a=1;
//	
//	cout<<"Enter Number: ";
//	cin>>n;
//	
//	while(a<n)
//	{
//		s++;
//		a=s*s;
//	}
//	cout<<s;

	int n,s,a=0;
	
	cout<<"Enter Number: ";
	cin>>n;
	
	s=n;
	while(n>0)
	{
		a=a*10+(n%10);
		n/=10;
	}
	
	if(a==s)
	cout<<"Yes";
	
	else
	cout<<"No";
}
