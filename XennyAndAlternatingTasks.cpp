#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		long a[5],b[5];
		cin>>n;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		for(int j=0;j<n;j++)
		{
			cin>>b[j];
		}
		long long f=0,s=0;
		for(int i=0;i<n;i++)
		{
			if(i%2==0)
			{
				f=f+a[i];
				s=s+b[i];
			}
			else{
				f=f+b[i];
				s=s+a[i];
			}
		}
		if(f<s)
		{
			cout<<f<<endl;
		}
		else{
			cout<<s<<endl;
		}
	}
}
