#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	while(cin>>n&&n!=0)
	{
		int pn = 0,zn = 0,nn = 0;
		double num[n];
		for(int i=0;i<n;i++)
		{
			cin>>num[i];
			if(num[i]>0)
				pn++;
			else if(num[i]==0)
				zn++;
			else
				nn++;
		}
		cout<<nn<<" "<<zn<<" "<<pn<<endl;
	}
	return 0;
}
