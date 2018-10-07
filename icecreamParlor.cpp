/*
Sunny and Johnny like to pool their money and go to the ice cream parlor. Johnny never buys the same flavor that Sunny does. The only other rule they have is that they spend all of their money.

Given a list of prices for the flavors of ice cream, select the two that will cost all of the money they have.

For example, they have m=6 to spend and there are flavors costing cost=[1,3,4,5,6]. The two flavors costing 1 and 5 meet the criteria. Using 1-based indexing, they are at indices 1 and 4.

Function Description

Complete the icecreamParlor function in the editor below. It should return an array containing the indices of the prices of the two flavors they buy, sorted ascending.

icecreamParlor has the following parameter(s):

m: an integer denoting the amount of money they have to spend
cost: an integer array denoting the cost of each flavor of ice cream
Sample Input

2
4
5
1 4 5 3 2
4
4
2 2 4 3
Sample Output

1 4
1 2
*/
#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the icecreamParlor function below.
vector<int> icecreamParlor(int m, vector<int> arr) {
    vector<int> res(2);
    for(int i=0;i<arr.size();i++)
    {
        for(int j=i+1;j<arr.size();j++)
        {
            if(arr[i]+arr[j]==m)
            {
                res[0]=i+1;
                res[1]=j+1;
                return res;
            }
        }
    }
    return res;
    


}
int main()
{
	int m,n;
	cin>>m>>n;
	vector<int> cost(n),res(2);
	for(int i=0;i<n;i++)
	{
		cin>>cost[i];
	}
	res=icecreamParlor(m,cost);
	for(int i=0;i<2;i++)
	{
		cout<<" "<<cost[i];
	}
}
