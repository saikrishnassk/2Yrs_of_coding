#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the circularArrayRotation function below.
vector<int> circularArrayRotation(vector<int> a, int k, vector<int> queries) {
    vector<int> res(queries.size());
    for(int i=0;i<queries.size();i++)
    {
        if(a.size()-k >0)
            res[i]=a[ (queries[i]+(a.size()-k))%a.size()];
        else
        {
            int n=(k-a.size())%a.size();
            res[i]=a[(queries[i]+n)%a.size()];
        }
            
        
    }
    return res;


}
int main()
{
	int n,k,q;
	cin>>n>>k>>q;
	vector<int> a(n),que(q);
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<q;i++)
	{
		cin>>que[i];
	}
	vector<int> res(q);
	res=circularArrayRotation(a,k,que);
	for(int  i=0;i<q;i++)
	{
		cout<<res[i]<<endl;
	}
	
}
