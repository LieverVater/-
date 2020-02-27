#include <bits/stdc++.h>
using namespace std;

int sum(int m)
{
	if(m==1)
		return 1;
	else if(m==2)
		return 2;
	else
		return sum(m-1)+sum(m-2);
}

int main()
{
	int n;
	cin>>n;
	while(n--)
	{
		int m;
		cin>>m;
		cout<<sum(m-1)<<endl;
	}
	return 0;
}
