#include <bits/stdc++.h>
using namespace std;
/*
char signal[7] = {'~','!','@','#','$','%','^'};
bool issignal(char c)
{
	for(int i=0;i<7;i++)
	{
		if(c==signal[i])
			return true;
	}
	return false;
}
*/
int main()
{
	int n;
	cin>>n;
	while(n--)
	{
		string str;
		cin>>str;
		int flag[4] = {0};
		if(str.length()<8 || str.length()>16)
			cout<<"NO"<<endl;
		else
		{
			for(int i=0;i<str.length();i++)
			{
				if(str[i]>='A' && str[i]<='Z')
					flag[0] = 1;
				else if(str[i]>='a'&&str[i]<='z')
					flag[1] = 1;
				else if(isdigit(str[i]))
					flag[2] = 1;
				else
					flag[3] = 1;
			}
			int sum = 0;
			for(int i=0;i<4;i++)
				sum+=flag[i];
			if(sum>=3)
				cout<<"YES"<<endl;
			else
				cout<<"NO"<<endl;
		}
	}
	return 0;
}
