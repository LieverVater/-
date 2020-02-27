#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	while(cin>>s)
	{
		char temp;
		for(int i=0;i<3;i++)
		{
			for(int j=i;j<3;j++)
			{
				if(s[i]>s[j])
				{
					temp = s[i];
					s[i] = s[j];
					s[j] = temp;
				}
			}
		}
		for(int i=0;i<3;i++)
		{
			if(i!=2)
				cout<<s[i]<<" ";
			else
				cout<<s[i];
		}
		cout<<endl;
	}
	return 0;
 } 
