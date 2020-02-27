#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	while(n--)
	{
		int a;
		cin>>a;
		int sheep = 3;
		while(a--)
		{
			sheep--;
			sheep*=2;
		}
		cout<<sheep<<endl;
	}
	return 0;
 } 
