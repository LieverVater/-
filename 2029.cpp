#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	while(n--)
	{
		string s;
		cin>>s;
		int len = s.length(),i;
		bool flag = true;
		for(i=0;i<len/2;i++)
		{
			if(s[i]!=s[len-i-1])
				flag = false;
		}
		if(flag)
			cout<<"yes"<<endl;
		else
			cout<<"no"<<endl;
	}
	return 0;
}
