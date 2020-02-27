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
		int len = s.length();
		int sum = 0;
		for(int i=0;i<len;i++)
		{
			if(s[i]>='0'&&s[i]<='9')
				sum++;
		}
		cout<<sum<<endl;
	}
	return 0;
}
