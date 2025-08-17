#include<iostream>
using namespace std;

int sum(int a,int b)
{
	int n=a+b;
	return n;
}

int prime(int a)
{
    if (a <= 1) 
        return 0;

    for (int i = 2; i < a; i++)
    {
        if (a % i == 0)
            return 0;
    }
    return 1;
}

int Fact(int n)
{
	int a=1;
	
	for(int i=1;i<=n;i++)
	{
		a=a*i;
	}
	return a;
}

int main()
{
    int a;
    cout << "Enter Number: ";
    cin >> a;

    cout<<Fact(a);
}
