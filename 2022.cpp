#include <bits/stdc++.h>
using namespace std;
int main()
{
	int m,n;
	while(cin>>m>>n)
	{
		long long mm[m][n];
		for(int i=0;i<m;i++)
		{
			for(int j=0;j<n;j++)
				cin>>mm[i][j];
		}
		int x = 0,y = 0;
		long long s = 0;
		for(int i=0;i<m;i++)
		{
			for(int j=0;j<n;j++)
			{
				if(abs(mm[i][j])>abs(s))
				{
					s = mm[i][j];
					x = i;
					y = j;
				}
			}
		}
		cout<<x+1<<" "<<y+1<<" "<<s<<endl;
	}
	return 0;
 } 
