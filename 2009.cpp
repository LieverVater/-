#include <bits/stdc++.h>
using namespace std;
double sqrtsum(double n,int m)
{
	double sum = n;
	double temp = n;
	for(int i=0;i<m-1;i++)
	{
		temp = sqrt(temp);
		sum+=temp;
	}	
	return sum;
}
int main()
{
	double n;
	int m;
	while(cin>>n>>m)
	{
		cout<<fixed<<setprecision(2)<<sqrtsum(n,m);
	}
	return 0;
}
