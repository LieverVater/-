#include <bits/stdc++.h>
using namespace std; 
char num[16] = {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
char res[1001];
int main()
{
	int n,r;
	while(cin>>n>>r)
	{
		if(n<0)
		{
			cout<<'-';
			n = -n;
		}
		int i=0;
		while(n!=0)
		{
			res[i] = num[n%r];
			n /= r;
			i++;
		}
		int len = i;
		for(i = len-1;i>=0;i--)
			cout<<res[i];
		cout<<endl;
	}
}
