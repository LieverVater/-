#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	getchar();
	while(n--)
	{
		string str;
		getline(cin,str);
		int ac = 0,ec = 0,ic = 0,oc = 0,uc = 0;
		for(int i=0;i<str.length();i++)
		{
			if(str[i]=='a')
				ac++;
			else if(str[i]=='e')
				ec++;
			else if(str[i]== 'i')
				ic++;
			else if(str[i]=='o')
				oc++;
			else if(str[i]=='u')
				uc++;
		}
		cout<<"a:num"<<ac<<endl<<"e:num"<<ec<<endl<<"i:num"<<ic<<endl<<"o:num"<<oc<<endl<<"u:num"<<uc<<endl;
		if(n>0)
			cout<<endl;
	}
	return 0;
 } 
