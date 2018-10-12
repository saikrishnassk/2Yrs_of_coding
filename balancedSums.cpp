/*
Watson gives Sherlock an array of integers. His challenge is to find an element of the array such that the sum of all elements to the left is equal to the sum of all elements to the right. For instance, given the array ,arr=[5,6,8,11],8  is between two subarrays that sum to 11. If your starting array is [1], that element satisfies the rule as left and right sum to 0.

You will be given arrays of integers and must determine whether there is an element that meets the criterion.

Function Description

Complete the balancedSums function in the editor below. It should return a string, either YES if there is an element meeting the criterion or NO otherwise.

balancedSums has the following parameter(s):

arr: an array of integers
Sample Input 0

2
3
1 2 3
4
1 2 3 3
Sample Output 0

NO
YES
Sample Input 1

3
5
1 1 4 1 1
4
2 0 0 0
4
0 0 2 0 
Sample Output 1

YES
YES
YES
*/
#include<bits/stdc++.h>
using namespace std;
#define assn(n,a,b) assert(n<=b && n>=a)
typedef long long LL;
LL pre[100005];
int main()
{
    int t;
    cin >> t;
    assn(t,1,10);
    while(t--)
    {
        LL n,i,j,flag=0,x;
        cin >> n;
        assn(n,1,100000);
        for(i=1; i<=n; i++)
        {
            cin >> x;
            assn(x,1,20000);
            // store pre[i]= sum of all elements till index i.
            pre[i]=pre[i-1]+x;
        }
        for(i=1; i<=n; i++)
        {
            // check if sum to left is same as sum to right
            if(pre[i-1]==(pre[n]-pre[i]))flag=1;
        }
        if(flag)cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
