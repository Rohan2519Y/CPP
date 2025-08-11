#include<iostream>
using namespace std;

int main()
{
//    int n,i,j;
//    cin >> n;
//
//    for( i = 1; i <= n; i++)
//    {
//        for( j = 1; j <= n-i; j++)
//        {
//           cout<<"  ";
//        }
//        for(j=1;j<=2*i-1;j++)
//        {
//        	cout<<"* ";
//		}
//        cout << endl;
//    }

//   	int n,i,j,k;
//   	cout<<"Enter Number: ";
//    cin >> n;
//
//    for( i = 1; i <= n; i++)
//    {
//        for( j = 1; j <= n-i; j++)
//           cout<<"  ";
//           
//        for(j = 1; j <= i; j++)
//            cout << j << " ";
//            
//        for(j = i - 1; j >= 1; j--)
//            cout << j << " ";
//            
//        cout << endl;
//    }

//	int n,i,j;
//	cout<<"Enter Number: ";
//    cin >> n;
//
//    for( i = n; i >= 1; i--)
//    {
//        for( j = 1; j <= n-i; j++)
//        {
//           cout<<"  ";
//        }
//        for(j=1;j<=2*i-1;j++)
//        {
//        	cout<<"* ";
//		}
//        cout << endl;
//    }

//	int n,j,i;
//    cout << "Enter Number: ";
//    cin >> n;
//    
//    for (i = n; i >= 1; i--)
//	{  
//       	for(j=1;j<=i;j++)
//       		cout<<"* ";	
//       		
//       	for(j=1;j<=2*n-2*i;j++)
//       		cout<<"  ";
//       			
//       	for(j=1;j<=i;j++)
//       		cout<<"* ";	
//        
//        cout << endl;
//    }
//
//	for (i = 1; i <= n; i++)
//	{  
//       	for(j=1;j<=i;j++)
//       		cout<<"* ";	
//       		
//       	for(j=1;j<=2*n-2*i;j++)
//       		cout<<"  ";
//       			
//       	for(j=1;j<=i;j++)
//       		cout<<"* ";	
//        
//        cout << endl;
//    }

//	int n,j,i;
//    cout << "Enter Number: ";
//    cin >> n;
//
//	for (i = 1; i <= n; i++)
//	{  
//       	for(j=1;j<=i;j++)
//       		cout<<"* ";	
//       		
//       	for(j=1;j<=2*n-2*i;j++)
//       		cout<<"  ";
//       			
//       	for(j=1;j<=i;j++)
//       		cout<<"* ";	
//        
//        cout << endl;
//    }
//    
//    for (i = n-1; i >= 1; i--)
//	{  
//       	for(j=1;j<=i;j++)
//       		cout<<"* ";	
//       		
//       	for(j=1;j<=2*n-2*i;j++)
//       		cout<<"  ";
//       			
//       	for(j=1;j<=i;j++)
//       		cout<<"* ";	
//        
//        cout << endl;
//    }

	int n,j,i;
    cout << "Enter Number: ";
    cin >> n;
    
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n-i;j++)
		cout<<"  ";
		
		for(j=1;j<=i;j++)
		cout<<" *  ";
		
		cout<<endl;
	}
	
	for(i=n;i>=1;i--)
	{
		for(j=1;j<=n-i;j++)
		cout<<"  ";
		
		for(j=1;j<=i;j++)
		cout<<" *  ";
		
		cout<<endl;
	}
}

