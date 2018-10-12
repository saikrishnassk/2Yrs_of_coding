#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int  n,k;
		scanf("%d%d",&n,&k);
		long a[100000];
		for(int i=0;i<n;i++)
		{
			scanf("%ld",&a[i]);
		}
		sort(a,a+n,greater<long>());
		int c=0;
		for(int i=0;i<n;i++)
		{
			if(a[i]>=a[k-1])
			{
				c=c+1;
			}
			else
			{
				break;
			}
		}
		printf("%d",c);
	}
}
