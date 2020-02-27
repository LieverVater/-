#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	while(cin>>n>>m)
	{
		double score[n][m];
		for(int i=0;i<n;i++)
			for(int j=0;j<m;j++)
				cin>>score[i][j];
		double ave1[n];
		double ave2[m];
		int by = 0;
		for(int i=0;i<m;i++)//ke mu ping jun cheng ji
		{
			for(int j=0;j<n;j++)
				ave2[i]+=score[i][j];
			ave2[i]/=n;
		}
		for(int i=0;i<n;i++)//xue sheng ping jun cheng ji
		{
			for(int j=0;j<m;j++)
				ave1[i]+=score[i][j];
			ave1[i]/=m;
			int flag = 1;
			for(int j=0;j<m;j++)
			{
				if(score[i][j]<ave2[j])
					flag = 0;
			}
			if(flag == 1) 
				by++;
		}
		for(int i=0;i<n;i++)
		{
			if(i!=n-1)
				cout<<setprecision(2)<<std::fixed<<ave1[i]<<" ";
			else
				cout<<setprecision(2)<<std::fixed<<ave1[i];	
		}
		cout<<endl;
		for(int i=0;i<m;i++)
		{
			if(i!=m-1)
				cout<<setprecision(2)<<std::fixed<<ave2[i]<<" ";
			else
				cout<<setprecision(2)<<std::fixed<<ave2[i];
		}
		cout<<endl<<by<<endl<<endl;		
	}
	return 0;
}
