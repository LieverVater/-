#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long int dp[51];
	dp[0] = 0;
	dp[1] = 3;
	dp[2] = 6;
	dp[3] = 6;
	for(int i=4;i<51;i++)
		dp[i] = dp[i-1]+dp[i-2]*2;
	int n;
	while(cin>>n)
	{
		cout<<dp[n]<<endl;
	}
	return 0;
}
