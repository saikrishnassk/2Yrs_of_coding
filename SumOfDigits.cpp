/*
All submissions for this problem are available.
You're given an integer N. Write a program to calculate the sum of all the digits of N.

Input
The first line contains an integer T, total number of testcases. Then follow T lines, each line contains an integer N.

Output
Calculate the sum of digits of N.

Constraints
1 = T = 1000
1 = N = 1000000
Example
Input
3 
12345
31203
2123
Output
15
9
8
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int s=0;
		long n;
		cin>>n;
		while(n!=0)
		{
			s=s+(n%10);
			n=n/10;
		}
		cout<<s<<endl;
	}
}
