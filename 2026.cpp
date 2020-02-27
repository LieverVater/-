#include <iostream>
using namespace std;
int main()
{
	string str;
	while(getline(cin,str))
	{
		int len = str.length();
		str[0] -= 32;
		for(int i=1;i<len;i++)
		{
			if(str[i-1]==' ' && isalpha(str[i]))
				str[i]-=32;
		}
		cout<<str<<endl;
	}
	return 0;
}
