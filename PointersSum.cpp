'''
Write a C++ program to find the sum of 2 integers using Pointers.
'''

#include<iostream.h>
using namespace std;
int main()
{
	int a,b,sum=0,*m,*n,p;
	cout<<"Enter The First Number: ";
	cin>>a;
	m=&a;
	cout<<"Enter The Second Number: ";
	cin>>b;
	n=&b;
	sum=*m+*n;
	
	cout<<"Sum Of Two Numbers Is: "<<sum;
	
}
	
