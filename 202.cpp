#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	while(cin>>n&&n!=0)
	{
		int num[n];
		for(int i=0;i<n;i++)
		{
			cin>>num[i];
		}
		int temp;
		for(int i=0;i<n;i++)
		{
			for(int j=i+1;j<n;j++)
			{
				if(abs(num[j])>abs(num[i]))
				{
					temp = num[j];
					num[j] = num[i];
					num[i] = temp;
				}
			}
		}
		for(int i=0;i<n-1;i++)
			cout<<num[i]<<" ";
		cout<<num[n-1]<<endl;
	}
	return 0;
}
