#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n,k,m,e,i,stu=0,temp;
		cin>>n>>k>>e>>m;
		long long a[n-1]; 
		for(i=0;i<(n-1);i++)
		{
			long long arr=0;
			for(int j=0;j<e;j++)
			{
				cin>>temp;
				arr=arr+temp;
			}
			a[i]=arr;
		}
		for(int j=0;j<(e-1);j++)
		{
			cin>>temp;
			stu=stu+temp;
		}
		sort(a,a+n-1);
		temp=a[n-k-1]+1;
		if(temp-stu<=m)
		{
			cout<<temp-stu<<endl;
		}
		if(temp-stu<=0)
		{
			stu=0;
			cout<<stu<<endl;
		}
		else{
			cout<<"Impossible\n";
		}
	}
}
