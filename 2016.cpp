#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	while(cin>>n&&n!=0)
	{
		int num[n];
		for(int i=0;i<n;i++)
			cin>>num[i];
		int m = num[0],pos = 0;
		for(int i=0;i<n;i++)
		{
			if(num[i]<m)
			{
				m = num[i];
				pos = i;
			}
		}
		int temp = num[0];
		num[0] = num[pos];
		num[pos] = temp;
		for(int i=0;i<n;i++)
		{
			if(i!=n-1)
				cout<<num[i]<<" ";
			else
				cout<<num[i]<<endl;
		}
	}
	return 0;
}
