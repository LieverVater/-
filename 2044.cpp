#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long int dp[51];
	dp[0] = 0;
	dp[1] = 1;
	dp[2] = 2;
	for(int i=3;i<51;i++)
		dp[i] = dp[i-1]+dp[i-2];
	int n;
	cin>>n;
	while(n--)
	{
		int a,b;
		cin>>a>>b;
		cout<<dp[b-a]<<endl;
	}
	return 0;
}
