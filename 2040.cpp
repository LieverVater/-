#include <bits/stdc++.h>
using namespace std;

int NumSum(int n)
{
	int a=0;
	for(int i=1;i<n/2+1;i++)
		if(n%i==0)
			a+=i;
	return a; 
}


int main()
{
	int n;
	cin>>n;
	while(n--)
	{
		int a,b;
		cin>>a;
		cin>>b;
		if(NumSum(a)==b  &&  NumSum(b)==a)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
	return 0;
 } 
