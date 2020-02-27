#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	while(cin>>n)
	{
		long long int a[n][6];
		long long int b[n][3];
		for(int i=0;i<n;i++)
			for(int j=0;j<6;j++)
				cin>>a[i][j];
		for(int i=0;i<n;i++)
		{
			b[i][2] = (a[i][2]+a[i][5])%60;
			b[i][1] = (a[i][1]+a[i][4]+(a[i][2]+a[i][5])/60)%60;
			b[i][0] = a[i][0]+a[i][3]+(a[i][1]+a[i][4]+(a[i][2]+a[i][5])/60)/60;
		}
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<3;j++)
			{
				if(j!=2)
					cout<<b[i][j]<<" ";
				else
					cout<<b[i][j];
			}
			if(i!=n-1)
				cout<<endl;
		}
	}
	return 0;
}
