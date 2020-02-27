#include <bits/stdc++.h>
using namespace std;
int main()
{
	int matrix[30][30];
	//init matrix
	for(int i=0;i<30;i++)
	{
		for(int j=0;j<30;j++)
			matrix[i][j] = 0;
	}
	for(int i=0;i<30;i++)
	{
		matrix[i][i] = 1;
		matrix[i][0] = 1;
	}
	for(int i=1;i<30;i++)
	{
		for(int j=1;j<=i;j++)
			matrix[i][j] = matrix[i-1][j-1]+matrix[i-1][j];
	}
	int n;
	while(cin>>n)
	{
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<=i;j++)
			{
				if(j!=i)
					cout<<matrix[i][j]<<" ";
				else
					cout<<matrix[i][j]<<endl;
			}
		}
		cout<<endl;
	}
	return 0;
 } 
