#include<bits/stdc++.h>
using namespace std;
long long hcf(long long a,long long b)
{
	if(b==0){
		return a;
}
	else{
		return hcf(b,a%b);
	}
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		long long ans=1e18;
		cin>>n;
		long long a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		for(int i = 0; i < n; ++i){
            for(int j = i + 1; j < n; ++j){
                ans = min(ans,a[i]*a[j]/hcf(a[i], a[j]));
            }
        }
        cout<<ans<<endl;
	}
}
