#include <bits/stdc++.h>
using namespace std;
int main()
{
	int m,n;
	while(cin>>m&&cin>>n)
	{
		int temp;
		if(m>n)
		{
			temp = m;
			m = n;
			n = temp;
		}
		long int EvenNum = 0,OddNum = 0;
		for(int i=m;i<=n;i++)
		{
			if(i%2==0)
				EvenNum+=pow(i,2);
			else
				OddNum+=pow(i,3);
		}
		cout<<EvenNum<<" "<<OddNum<<endl;
	}
	return 0;
 } 
