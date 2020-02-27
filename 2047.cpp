#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long int dp[41];
	dp[1] = 3;
	dp[2] = 8;
	for(int i=3;i<41;i++)
		dp[i] = dp[i-1]*2+dp[i-2]*2;
	int n;
	while(cin>>n)
	{
		cout<<dp[n]<<endl;
	}
	return 0;
}
