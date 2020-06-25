'''
Given a 2D array arr[][] of size M x N integers where M is the number of rows and N is the number of columns. The task is to reverse every row of the given 2D array.

Example:

Input: arr[][] =
{ {1, 2, 3},
{4, 5, 6},
{7, 8, 9} }
Output:
3 2 1
6 5 4
9 8 7

Input: arr[][] =
{ {1, 2},
{4, 5},
{7, 8},
{9, 10} }
Output:
2 1
5 4
8 7
10 9
'''






#include<stdio.h>
int main()
{
	int a[10][10],i,n,m,j;
	printf("Enter Row And Column Size: ");
	scanf("%d%d",&m,&n);
	printf("Enter The Matrix: \n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Matrix After Reversing The Row: \n");
	for(i=0;i<m;i++)
	{
		for(j=n-1;j>=0;j--)
		{
			printf("%d ",a[i][j]);	
		}
		printf("\n");
	}
}
