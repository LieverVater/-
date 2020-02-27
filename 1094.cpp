#include <bits/stdc++.h>
using namespace std;
int main()
{
	int len;
	while(cin>>len)
	{
		int temp,sum=0;
		while(len--)
		{
			cin>>temp;
			sum+=temp;
		}
		cout<<sum<<endl;
	}
	return 0;
}
