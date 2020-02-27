#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	while(n--)
	{
		int sum = 0;
		char e;
		while((e = getchar())!='\n')
		{
			if(e<0)
				sum++;
		}
		cout<<sum/2<<endl;
	}
	return 0;
}
