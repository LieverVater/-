#include <bits/stdc++.h>
#define pi 3.1415927
using namespace std;
int main()
{
	double r;
	while(cin>>r)
	{
		double v = 4*pow(r,3)*pi/3;
		cout<<fixed<<setprecision(3)<<v<<endl;
	}
	return 0;
}
