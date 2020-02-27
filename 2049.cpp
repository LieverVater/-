#include <bits/stdc++.h>
using namespace std;

long long int fac(int n)
{
	if(n==0 || n==1)
		return 1;
	else
		return n*fac(n-1);
}

double CMN(int m,int n)
{
	return (double)fac(m)/(fac(n)*fac(m-n));
}

int main()
{
	int n;
	cin>>n;
	long long int dp[21];
	dp[1] = 0;
	dp[2] = 1;
	for(int i=3;i<21;i++)
		dp[i] = (i-1)*(dp[i-1]+dp[i-2]);
	while(n--)
	{
		int m,n;
		cin>>m>>n;
		cout<<CMN(m,n)*dp[n]<<endl;
	}
	return 0;
}
