#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	int sum[n];
	int i=0;
	while(cin>>n&&n!=0)
	{
		int temp,ss=0;
		while(n--)
		{
			cin>>temp;
			ss+=temp;
		}
		sum[i] = ss;
		i++;
	}
	for(int j=0;j<i;j++)
	{
		cout<<sum[j]<<endl;
	}
	return 0;
}
