/*
Arrays have fallen out of Chef's good books, and he plans to destroy all arrays he possesses. He is left with the last array A, consisting of N positive integers. In order to destroy the array, he can perform the following 2 types of operations any number of times.

Choose any 2 elements, say X and Y, from the given array A such that X != Y, and remove them, or
Choose any 1 element, say X, from A, and remove it.



In order to destroy the array as quickly as possible, Chef is interested in knowing the minimum number of operations required to destroy it. Please help him achieve this task.

Input
The first line of input contains a single integer T denoting the number of test cases. First line of each test case contains a single integer N — the number of integers in the array A.

Second line of each test case contains N space separated integers denoting the array A.

Output
For each test case, output the required answer in a new line.

Constraints
1 = T = 50000

1 = N = 50000

1 = Ai = 109

sum of N over all test cases does not exceed 5 × 105
Example
Input
3
2
1 2
2
1 1
3
1 2 3

Output
1
2
2

Explanation
Test 1: In an operation, Chef can choose 2 elements X and Y such that X = 1 and Y = 2 and can destroy them as X != Y.
Test 2: Chef cannot choose 2 elements X and Y such that X != Y. So, he has to use the second operation twice in order to destroy the array.
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll t;cin>>t;
    while(t--)
    {
        ll n,h;cin>>n;vector<ll>a;set<ll>s;map<ll,ll>m1,m;for(ll i=0;i<n;i++){cin>>h;m[h]++;s.insert(h);a.push_back(h);}
        set<ll>::iterator it;ll c=1,c1=1;sort(a.begin(),a.end());
        for(ll i=1;i<n;i++)
        {
            if(a[i]==a[i-1]){c1++;c=max(c,c1);}
            else{c1=1;}
        }
        if(c<=(n-c)){cout<<(n/2)+(n%2)<<endl;}
        else{cout<<c<<endl;}
    }
}

