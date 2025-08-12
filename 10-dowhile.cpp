#include<iostream>
using namespace std;

int main()
{
//	int i=1;
//	
//	do
//	{
//		cout<<i<<endl;
//		i++;
//	}while(i<=10);

	int i=1,n,c=0;
	
	cout<<"Enter Number: ";
	cin>>n;
	
	do{
		c=c+i;
		i++;
	}while(i<=n);
	
	cout<<c<<endl;
}
