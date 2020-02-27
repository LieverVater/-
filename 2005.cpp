#include <bits/stdc++.h>
using namespace std;
int main()
{
	int year,month,day;
	int days[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
	while(scanf("%d/%d/%d",&year,&month,&day)!=EOF)
	{
		int d;
		if(year%400 == 0)
			days[2] = 29;
		else if(year%4 == 0 && year%100 !=0)
			days[2] = 29;
		for(int i=0;i<month;i++)
			d += days[i];
		d += day;
		cout<<d<<endl; 
	}
	return 0;
}
