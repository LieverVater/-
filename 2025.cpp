#include <bits/stdc++.h>
using namespace std;
int main()
{
	string str;
	while(cin>>str)
	{
		int len = str.length();
		char max = str[0];
		for(int i=0;i<len;i++)
		{
			if(str[i]>max)
				max = str[i];
		}
		for(int i=0;i<len;i++)
		{
			cout<<str[i];
			if(str[i]==max)
				cout<<"(max)";
		}
		cout<<endl;
	}
	return 0;
}
