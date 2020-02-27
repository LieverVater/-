#include <bits/stdc++.h>
using namespace std;
bool isSXH(int n)
{
	int b,s,g;
	b = n/100;
	s = n/10%10;
	g = n%10;
	if(pow(b,3)+pow(s,3)+pow(g,3)==n)
		return true;
	else
		return false;
}
int main()
{
	int a,b;
	while(cin>>a&&cin>>b)
	{
		int num[1000];
		int cnt = 0;
		for(int i=a;i<=b;i++)
		{
			if(isSXH(i))
			{
				num[cnt] = i;
				++cnt;
			}
		}
		if(cnt==0)
			cout<<"no"<<endl;
		else
		{
			cout<<num[0];
			for(int i=1;i<cnt;i++)
				cout<<" "<<num[cnt];
			cout<<endl;
		}
	}
	return 0;
}
