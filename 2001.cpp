#include <bits/stdc++.h>
using namespace std;
int main()
{
	double x1,y1,x2,y2;
	while(cin>>x1&&cin>>y1&&cin>>x2&&cin>>y2)
	{
		double dist2;
		double dist;
		dist2 = pow(x1-x2,2)+pow(y1-y2,2);
		dist = sqrt(dist2);
		cout<<fixed<<setprecision(2)<<dist<<endl;
	}
	return 0;
 } 
