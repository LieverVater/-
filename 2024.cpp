#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	while(cin>>n)
	{
		string str;
		getchar();
		while(--n)
		{
			getline(cin,str);
			int length = str.length();
			int flag = 1;
			if(str[0]!='_' && !isalpha(str[0]))
				flag = 0;
			for(int i=1;i<length;i++)
			{
				if(str[i]!='_' && !isalpha(str[i]) && !isdigit(str[i]))
					flag = 0;
			}
			if(flag)
				cout<<"yes"<<endl;
			else
				cout<<"no"<<endl;
		}
	}
	return 0;
}
