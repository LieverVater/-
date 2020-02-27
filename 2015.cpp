#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	while(cin>>n>>m)
	{
		int len;
		if(n%m==0)
			len = n/m;
		else
			len = n/m+1;
		double ave[len];
		int pos =0,sub = 0,sum = 0,sp = 0;
		while(n--)
		{
			sub++;
			pos++;
			sum += 2*pos;
			if(sub==m)
			{
				sum = sum/m;
				ave[sp] = sum;
				sp++;
				sub = 0;
				sum = 0;
			}
		}
		if(sub)
		{
			ave[len-1] = sum/sub;
		}
		for(int i=0;i<len;i++)
		{
			if(i!=len-1)
				cout<<ave[i]<<" ";
			else
				cout<<ave[i]<<endl;
		}
	}
}
