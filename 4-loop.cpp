#include<iostream>
using namespace std;

int main()
{
//	int i,n;
//	
//	cout<<"Enter Number: ";
//	cin>>n;
//	
//	for(i=0;i<=n;i++)
//	{
//		cout << i << " - " << i*i << "\n";
//	}

//	int i,n;
//	
//	cout << "Enter Number: ";
//	cin>>n;
//	
//	for(i=1;i<=n;i++)
//	{
//		if(i%2==0)
//		{
//			cout<<i<<endl;
//		}
//	}

//	int i,n;
//	
//	for(i=2;i<=27;i=i+5)
//	{
//		cout<<i<<endl;
//	}

//	char w;
//	
//	for(w='a';w<='z';w++)
//	{
//		cout<<w<<endl;
//	}

//	int i,n;
//	
//	cout<<"Enter Number: ";
//	cin>>n;
//	
//	for(i=n;i>=1;i--)
//	{
//		cout<<i<<endl;
//	}

//	int i;
//	
//	for(i=1;i<=100;i=i+3)
//	{
//		cout<<i<<endl;
//	}

//  table
//	int i,n;
//	cout<<"Enter Number: ";
//	cin>>n;
//	
//	for(i=1;i<=10;i++)
//	{
//		cout<< n << " x " << i << " = " << n*i << endl;
//	}

//	power of the number
//	int i,n,p,r=1;
//	cout<<"Enter Number: ";
//	cin>>n;
//	cout<<"Enter Power: ";
//	cin>>p;
//	
//	for(i=1;i<=p;i++)
//	{
//		r=r*n;
//	}
//	
//	cout<<r;

//	sum of n natural number
//	int i,n,s=0;
//	
//	cout<<"Enter Number: ";
//	cin>>n;
//	
//	for(i=1;i<=n;i++)
//	{
//		s=s+i;
//	}
//	
//	cout<<s;

//	sum of square n natural number
//	int i,n,s=0;
//	
//	cout<<"Enter Number: ";
//	cin>>n;
//	
//	for(i=1;i<=n;i++)
//	{
//		s=s+(i*i);
//	}
//	
//	cout<<s; 

//	Factorial
//	int n,i,f=1;
//	cout<<"Enter Number: ";
//	cin>>n;
//	
//	for(i=1;i<=n;i++)
//	{
//		f=f*i;
//	}
//	
//	cout<<f;

//	prime
//	int i,n,p=1;
//	
//	cout<<"Enter Number: ";
//	cin>>n;
//	
//	if(n<2)
//	{
//		p=0;
//	}
//	else
//	{
//		for(i=2;i<n;i++)
//		{
//			if(n%i==0)
//			{
//				p=0;
//				break;
//			}
//		}
//  	}
//	
//	if(p==1)
//	cout<<"Number is Prime";
//	else
//	cout<<"Number is Not-Prime";

//	Fibonacci

	int i,n,f,a=0,b=1;
	
	cout<<"Enter Number: ";
	cin>>n;
	
	for(i=1;i<=n;i++)
	{
		cout<<a<<endl;//0,1,1,2,3,
		f=a+b;//1,2,3,5,8,
		a=b;//1,1,2,3,5,
		b=f;//1,2,3,5,8,
	}
	
}
