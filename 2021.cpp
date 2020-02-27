#include <bits/stdc++.h>
using namespace std;
int cnt(int n)
{
	int sum = 0;
	while(n)
	{
		if(n>=100)
		{
			sum+=(n/100);
			n = n%100;
		}
		else if(n>=50)
		{
			sum+=(n/50);
			n = n%50;
		}
		else if(n>=10)
		{
			sum+=(n/10);
			n = n%10;
		}
		else if(n>=5)
		{
			sum+=(n/5);
			n = n%5;
		}
		else if(n>=2)
		{
			sum+=(n/2);
			n = n%2;
		}
		else{
			n--;
			sum++;
		}
	}
	return sum;
}
int main()
{
	int n;
	while(cin>>n&&n!=0)
	{
		int num[n];
		for(int i=0;i<n;i++)
			cin>>num[i];
		int sum = 0;
		for(int i=0;i<n;i++)
		{
			sum+=cnt(num[i]);
		}
		cout<<sum<<endl;
	}
	return 0;
}
