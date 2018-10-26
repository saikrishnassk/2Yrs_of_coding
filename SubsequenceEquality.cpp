#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int flag=0;
		string s;
		cin>>s;
		for(int i=0;i<s.length();i++)
		{
			for(int j=i+1;j<s.length();j++)
			{
				if(s[i]==s[j])
				{
					flag=1;
				}
			}
		}
		if(flag==0)
		{
			cout<<"no\n";
		}
		else
		{
			cout<<"yes\n";
		}
	}
}
