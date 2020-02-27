#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int num[n][2];
	for(int i=0;i<n;i++)
		cin>>num[i][0]>>num[i][1];
	for(int i=0;i<n;i++)
		cout<<num[i][0]+num[i][1]<<endl;
	return 0;
}
