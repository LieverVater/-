#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	while(cin>>n)
	{
		int num[n];
		for(int i=0;i<n;i++)
			cin>>num[i];
		sort(num,num+n);
		double ave = 0;
		for(int i=1;i<n-1;i++)
			ave+=num[i];
		ave = ave/(n-2);
		cout<<fixed<<setprecision(2)<<ave<<endl;
	}
	return 0;
}
