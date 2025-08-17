#include<iostream>
using namespace std;

char Capital(char a)
{
	a-=32;
	return a;
}

int Count(int n)
{
	int c=0;
	for(;n!=0;n/=10)
	{
		c++;
	}
	return c;
}

int Armstrong(int c,int n)
{
	int a=n,i,ar=0,p,d;
	
	while(n!=0)
	{
		d=n%10;
		p=1;
		for( i=1; i<=c; i++)
        {
            p=p*d;
        }
		ar=ar+p;
		n/=10;
	}
	if(a==ar)
	return 1;
	
	else
	return 0;
}

int Trailingzero(int n)
{
	int c=0;
	
	while(n>=5)
	{
		c+=n/5;
		n/=5;
	}
	return c;
}

int Rectangle(int a, int b, int c, int d)
{
	if((a==b && c==d) || (a==c && b==d) || (a==d && b==c))
	return 1;
	
	else
	return 0;
}

int Bishop(int a,int b)
{
	int c=0;
	
	c+=min(8-a,8-b);
	c+=min(8-a,b-1);
	c+=min(a-1,b-1);
	c+=min(a-1,8-b);
	
	return c;
}

int main()
{
//	char a;
//	
//	cout<<"Enter Word: ";
//	cin>>a;
//	
//	cout<<Capital(a);

//	int n,c,e,f,g,h;
//	
//	cout<<"Enter Number: ";
//	cin>>e>>f>>g>>h;
	
//	c=Count(n);
//	cout<<Armstrong(c,n);

//	cout<<Trailingzero(n);

//	cout<<Rectangle(e,f,g,h);

	int a,b;
	
	cout<<"Enter Number: ";
	cin>>a>>b;
	
	cout<<Bishop(a,b);
}
