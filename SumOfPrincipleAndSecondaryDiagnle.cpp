'''
Write a C++ program to declare a matrix of size 3*3 matrix of size, initialize the matrix and display them. Also find the sum of matrix elements, sum of main diagonal elements and secondary diagonal elements.
'''

#include<iostream.h>
using namespace std;
int main()
{
	int i,j,psum=0 ,dsum=0,m,n;

    cout << "Enter The Row Size: " << endl;
    cin>>m;
    cout<<"Enter Column Size: "<<endl;
    cin>>n;
    int a[m][n];
    cout<<"Enter The Matrix Elements: "<<endl;
    for ( i = 0; i <m ; i++) 
    {
        for(j=0;j<n;j++)
        {
        cin >> a[i][j];
        }
        
    }
    cout<<endl;
    cout<<"Entered Matrix Is: "<<endl;
    for ( i = 0; i <m ; i++) 
    {
        for(j=0;j<n;j++)
        {
        cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<endl;
    
    for ( i = 0; i <m ; i++) 
    {
        for(j=0;j<n;j++)
        {
           if(i==j)
           {
           	psum=psum+a[i][j];
           }
           if(i==n-1-i)
           {
           	dsum=dsum+a[i][j];
           }
        }
    }
     
 cout<<"Sum Of Main Diagonal Elements Is: "<<psum<<endl;
 cout<<"Sum Of Secondary Diagonal Elements Is: "<<dsum<<endl;
 
}
