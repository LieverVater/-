#include <bits/stdc++.h>
using namespace std;
int fib(int n)
{
	if(n==0||n==1)
		return 1;
	if(n==2)
		return 2;
	if(n==3)
		return 3;
	return fib(n-1)+fib(n-3);
}
int main()
{
	int n;
	while(cin>>n&&n!=0)
	{
		cout<<fib(n)<<endl;
	}
	return 0;
 } 
