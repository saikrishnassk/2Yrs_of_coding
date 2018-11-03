/*
Chef belongs to a very rich family which owns many gold mines. Today, he brought N gold coins and decided to form a triangle using these coins. Isn't it strange?

Chef has a unusual way of forming a triangle using gold coins, which is described as follows:

He puts 1 coin in the 1st row.
then puts 2 coins in the 2nd row.
then puts 3 coins in the 3rd row.
and so on as shown in the given figure.
A.png
Chef is interested in forming a triangle with maximum possible height using at most N coins. Can you tell him the maximum possible height of the triangle?

Input
The first line of input contains a single integer T denoting the number of test cases.

The first and the only line of each test case contains an integer N denoting the number of gold coins Chef has.

Output
For each test case, output a single line containing an integer corresponding to the maximum possible height of the triangle that Chef can get.
Example
Input
3
3
5
7

Output
2
2
3
Explanation
Test 1: Chef can't form a triangle with height > 2 as it requires atleast 6 gold coins.
Test 2: Chef can't form a triangle with height > 2 as it requires atleast 6 gold coins.
Test 3: Chef can't form a triangle with height > 3 as it requires atleast 10 gold coins.

*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		long long c=0;
		while(n>0)
		{
			c=c+1;
			n=n-c;
			if(n<0)
			{
				c=c-1;
			}
		}
		cout<<c<<endl;
		
	}
}
