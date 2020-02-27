#include <bits/stdc++.h>
using namespace std;
int gys(int a,int b)
{
	int m = 1;
	int min = a>b?b:a;
	for(int i=2;i<=min;i++)
	{
		if(a%i==0 && b%i==0)
			m = i;
	}
	return m;
}
int main()
{
	int n;
	while(cin>>n)
	{
		int num[n];
		for(int i=0;i<n;i++)
			cin>>num[i];
		int y = gys(num[0],num[1]);
		int b = num[0]*(num[1]/y);
		for(int i=2;i<n;i++)
		{
			y = gys(num[i],b);
			b = b*(num[i]/y);
		}
		cout<<b<<endl;
	}
	return 0;
}
