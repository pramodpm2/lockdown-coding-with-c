'''
Given an array of random numbers, Push all the zero’s of the given array to the end of the array. For example, if the given arrays is {1, 0, 2, 6, 0, 4}, it should be changed to {1, 2, 6, 4, 0, 0}. The order of all other elements should be the same.

Examples:

Input: arr[]={8, 9, 0, 1, 2, 0, 3}
Output: arr[]={8, 9, 1, 2, 3, 0, 0}
Explanation:
Swap {0 ,1} -> Resulting array {8, 9, 1, 0, 2, 0, 3}
Swap {0 ,2} -> Resulting array {8, 9, 1, 2, 0, 0, 3}
Swap {0 ,3} -> Final array {8, 9, 1, 2, 3, 0, 0}

Input: arr[]={4, 5, 0, 0, 0, 0, 6, 7}
Output: arr[]={4, 5, 6, 7, 0, 0, 0, 0}
'''

#include<iostream.h>
using namespace std;
int main()
{
	int i,j,a[100],n,b[100],k=1;
	cout<<"Enter The Size Of Array: ";
	cin>>n;
	cout<<"Enter The Array Elements: ";
	for(i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(j=1;j<=n;j++)
	{
		if(a[j]!=0)
		{
			b[k]=a[j];
			k++;
		}
		
	}
	while(k<=n)
	{
			b[k]=0;
			k++;
	}
	
	
	cout<<"Output Array is: ";
	for(int p=1;p<=n;p++)
	{
		cout<<b[p]<<" ";
	}
}
