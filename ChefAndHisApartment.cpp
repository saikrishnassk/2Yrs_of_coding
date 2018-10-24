#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		cin>>a[0];
		
		long long cost=0;
		if(a[0]==0)
		{
			
			cost+=1100;
		}
		for(int i=1;i<n;i++)
		{
			cin>>a[i];
			if(a[i]==0 )
			{
				
				cost+=1100;
			}
			else if(a[i]==1 && a[i-1]==0)
			{
				
				a[i]=0;
				cost+=100;
			}
		}
		cout<<cost<<endl;
		
	}
}
