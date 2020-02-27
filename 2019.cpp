#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	while(cin>>n>>m&&(n!=0||m!=0))
	{
		int num[n+1];
		for(int i=0;i<n;i++)
			cin>>num[i];
		num[n] = m;
		sort(num,num+n+1);
		for(int i=0;i<n;i++)
			cout<<num[i]<<" ";
		cout<<num[n]<<endl;	
	}
	return 0;
}
