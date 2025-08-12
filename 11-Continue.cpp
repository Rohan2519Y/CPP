#include<iostream>
using namespace std;

int main()
{
	int i=1,n;
	
	cout<<"Enter Number: ";
	cin>>n;
	
	while(i<=n)
	{
		if(n%i==0)
		{
			i++;
			continue;
		}	
		
		cout<<i<<endl;
		i++;
	}
}
