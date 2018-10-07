/*
Mark and Jane are very happy after having their first child. Their son loves toys, so Mark wants to buy some. There are a number of different toys lying in front of him, tagged with their prices. Mark has only a certain amount to spend, and he wants to maximize the number of toys he buys with this money.

Given a list of prices and an amount to spend, what is the maximum number of toys Mark can buy? For example, if prices=[1,2,3,4] and Mark has k=7 to spend, he can buy items [1,2,3] for 6, or [3,4] for 7 units of currency. He would choose the first group of 3 items.

Function Description

Complete the function maximumToys in the editor below. It should return an integer representing the maximum number of toys Mark can purchase.

maximumToys has the following parameter(s):

prices: an array of integers representing toy prices
k: an integer, Mark's budget
Sample Input

7 50
1 12 5 111 200 1000 10
Sample Output

4
*/
#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the maximumToys function below.
int maximumToys(vector<int> p, int k) {
    vector<int> res(p.size());
    int k1=0;
    for(int i=0;i<p.size();i++)
    {
        if(p[i]<=k)
        {
            res[k1++]=p[i];
            
        }
    }
    for(int i=0;i<k1;i++)
    {
        for(int j=0;j<k1-1;j++)
        {
            if(res[j]>res[j+1])
            {
                int temp=res[j];
                res[j]=res[j+1];
                res[j+1]=temp;
            }
            
        }
    }
    int c=0,co=0;
    for(int i=0;i<k1;i++)
    {
        c=c+res[i];
        co=co+1;
        if(c==k)
            return co;
        else if(c>k)
            return co-1;
    }
    return co;


}
int main()
{
	int n,k;
	cin>>n>>k;
	vector<int> p(n);
	for(int i=0;i<n;i++)
	{
		cin>>p[i];
	}
	cout<<maximumToys(p,k);
	
}
/*
//OR
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int num, money,i,sum=0;
    cin>>num>>money;
    int cost[num];
    for (i=0;i<num;i++)
    {
        cin>>cost[i];
    }
    sort(cost,cost+num);
    i=0;
    while(cost[i]<money)
    {
        sum=sum+cost[i];
        if(sum>money) break;
        i++;
        
    }
    cout<<i;
    return 0;
}
*/
