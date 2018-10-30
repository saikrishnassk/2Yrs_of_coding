#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,j=1,k=1;
		cin>>n;
		for(int i=0;i<n;i++)
		{
			cout<<j<<" ";
			j=j+2;
		}
		cout<<endl;
	}
}
