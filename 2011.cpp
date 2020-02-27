#include <bits/stdc++.h>
using namespace std;
double sum(int n)
{
	double s = 0;
	for(int i=1;i<=n;i++)
	{
		s+=pow(-1,i+1)/i;
	}
	return s;
}
int main()
{
	int n;
	cin>>n;
	double num,result[n];
	for(int i=0;i<n;i++)
	{
		cin>>num;
		result[i] = sum(num);
	}
	for(int i=0;i<n;i++)
	{
		cout<<fixed<<setprecision(2)<<result[i]<<endl;
	}
	return 0;
}
