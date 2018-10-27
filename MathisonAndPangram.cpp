#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long  n[26];
		string s;
		char ch;
		int in;
		for(int i=0;i<26;i++)
		{
			cin>>n[i];
		}
		cin>>s;
		for(int i=0;i<s.length();i++)
		{
			ch=s[i];
			in=ch-'a';
			n[in]=0;
			
		}
		in=0;
		for(int i=0;i<26;i++)
		{
			in+=n[i];
		}
		cout<<in<<endl;
	}
}
