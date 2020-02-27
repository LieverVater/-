#include <bits/stdc++.h>
using namespace std;
int calculate(int n)
{
	return n*n+n+41;
} 
bool isprime(int n)
{
	for(int i=2;i<n/2+1;i++)
	{
		if(n%i==0)
			return false;
	}
	return true;
}
int main()
{
	int x,y;
	while(scanf("%d%d",&x,&y)&&(x!=0||y!=0))
	{
		int i,n,flag = 1;
		for(i=x;i<=y;i++)
		{
			n = calculate(i);
			if(!isprime(n))
			{
				flag = 0;
				break;
			}
		}
		if(flag)
			cout<<"OK"<<endl;
		else
			cout<<"Sorry"<<endl;
	}
	return 0;
}
