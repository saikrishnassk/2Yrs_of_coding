/*
All submissions for this problem are available.
If Give an integer N . Write a program to obtain the sum of the first and last digit of this number.

Input
The first line contains an integer T, total number of test cases. Then follow T lines, each line contains an integer N.

Output
Display the sum of first and last digit of N.

Constraints
1 = T = 1000
1 = N = 1000000
Example
Input
3 
1234
124894
242323

Output
5
5
5
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
	int temp,c=n%10;
	while(n!=0)
	{
		temp=n;
		n=n/10;
	}
	c=c+temp;
	cout<<c<<endl;
	
}
}
