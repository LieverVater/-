#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	while(cin>>n)
	{
		int a = 1,temp;
		while(n--)
		{
			cin>>temp;
			if(temp%2)
				a*=temp;
		}
		cout<<a<<endl;
	}
	return 0;
}
