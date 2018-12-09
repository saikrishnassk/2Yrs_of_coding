/*
Nobody knows, but N frogs live in Chef's garden.

Now they are siting on the X-axis and want to speak to each other. One frog can send a message to another one if the distance between them is less or equal to K.

Chef knows all P pairs of frogs, which want to send messages. Help him to define can they or not!

Note : More than 1 frog can be on the same point on the X-axis.
 

Input
The first line contains three integers N, K and P.
The second line contains N space-separated integers A1, A2, ..., AN denoting the x-coordinates of frogs".
Each of the next P lines contains two integers A and B denoting the numbers of frogs according to the input.
 

Output
For each pair print "Yes" without a brackets if frogs can speak and "No" if they cannot.
 

Constraints
1 = N, P = 10^5
0 = Ai, K = 10^9
1 = A, B = N
 

Example
Input:
5 3 3
0 3 8 5 12
1 2
1 3
2 5

Output:
Yes
Yes
No
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
	ll n,k,p;
	cin>>n>>k>>p;
	ll ans[n+1],b,a,temp;
	vector<pair<ll,ll>> v;
	for(ll i=1;i<=n;i++){
		cin>>temp;
		v.push_back({temp,i});
	}
	sort(v.begin(),v.begin()+n);
	for(ll i=1;i<=n;i++){
		ans[i]=i;
	}
	for(int i=0;i<n-1;i++){
		if(v[i+1].first-v[i].first<=k){
			ans[v[i+1].second]=ans[v[i].second];
		}
	}
	while(p--)
	{
		cin>>a>>b;
		if(ans[a]==ans[b]){
			cout<<"Yes\n";
		}
		else{
			cout<<"No\n";
		}
	}
}
