#include <bits/stdc++.h>
using namespace std;
int main()
{
	int len,i=0;
	cin>>len;
	int sum[len];
	while(len--)
	{
		int n,temp,ss=0;
		cin>>n;
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
		if(j!=i-1)
			cout<<sum[j]<<endl<<endl;
		else
			cout<<sum[j]<<endl;
	}
	return 0;
 } 
