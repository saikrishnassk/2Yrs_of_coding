/*
An array a is called beautiful if for every pair of numbers ai, aj, (i ? j), there exists an ak such that ak = ai * aj. Note that k can be equal to i or j too.

Find out whether the given array a is beautiful or not!

Input
First line of the input contains an integer T denoting the number of test cases. T test cases follow.

First line of each test case contains an integer n denoting number of elements in a.

Next line contains n space separated integers denoting the array a.

Output
For each test case, output a single line containing "yes" or "no" (without quotes) corresponding to the answer of the problem.

Constraints
1 = T = 106
1 = n = 105
Sum of n over all the test cases = 106
-109 = ai = 109
Example
Input
3
2
0 1
2
1 2
2
5 6

Output:
yes
yes
no
Explanation
Test case 1. If you multiply 0 with 1, you get 0, we see that a0 = 0. So, the array is beautiful.

Test case 3. If you multiply 5 with 6, you get 30, there does not exist an k such that ak = 30. So, the array is not beautiful.
*/
#include<bits/stdc++.h>
#define ll long long
using namespace std;



int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--)
	{	
		ll n;
		cin>>n;
		ll a[n],cnt=0,z=0,m=0,other=0;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			if(a[i]==1) cnt++;
			else if(a[i]==0) z++;
			else if(a[i]==-1) m++;
			else other++;
		}
		if(other>1) cout<<"no\n";
		else if(m!=0 && other!=0) cout<<"no\n";
		else if(m>1 && !cnt) cout<<"no\n";
		else cout<<"yes\n";
	}	
}
