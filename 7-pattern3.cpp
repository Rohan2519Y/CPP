#include<iostream>
using namespace std;

int main()
{
//	int i,j;
//	
//	for(i=5;i>=1;i--)
//	{
//		for(j=0;j<=5;j++)
//		{
//			if(i>j)
//			cout<<"  ";
//			else
//			cout<<"* ";
//		}
//		cout<<endl;
//	}

//	int i,j;
//	for(i=1;i<=5;i++)
//	{
//		for(j=5;j>=1;j--)
//		{
//			if(i<j)
//			cout<<"  ";
//			else
//			cout<<i<<" ";
//		}
//		cout<<endl;
//	}

//	int i,j,c=1;
//	for(i=5;i>=1;i--)
//	{	
//		c=1;
//		for(j=1;j<=5;j++)
//		{
//			if(i>j)
//			cout<<"  ";
//			else
//			{
//			 	cout<<c<<" ";
//			 	c++;
//			}
//		}
//		cout<<endl;
//	}

//	int i,j;
//	char c='A';
//	for(i=5;i>=1;i--)
//	{	
//		c='A';
//		for(j=1;j<=5;j++)
//		{
//			if(i>j)
//			cout<<"  ";
//			else
//			{
//			 	cout<<c<<" ";
//			 	c++;
//			}
//		}
//		cout<<endl;
//	}

	int i,j;
	
	for(i=1;i<=5;i++)
	{
		for(j=5;j>=1;j--)
		{
			if(i<j)
			{
				cout<<"  ";	
			}
			else
			{
				cout<<j<<" ";
			}	
		}
		cout<<endl;
	}
	
}
