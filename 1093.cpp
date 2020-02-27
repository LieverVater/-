#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int sum[n];
	int i=0;
	while(n--)
	{
		int len,ss=0,temp;
		cin>>len;
		while(len--)
		{
			cin>>temp;
			ss+=temp;
		}
		sum[i] = ss;
		i++;
	}
	for(int j=0;j<i;j++)
		cout<<sum[j]<<endl;
	return 0;
}
