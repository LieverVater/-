#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	while(n--)
	{
		double tri[3];
		for(int i=0;i<3;i++)
			cin>>tri[i];
		sort(tri,tri+3);
		if(tri[0]+tri[1]>tri[2])
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
	return 0;
}
