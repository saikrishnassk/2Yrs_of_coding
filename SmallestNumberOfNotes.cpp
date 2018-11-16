/*
Consider a currency system in which there are notes of seven denominations, namely, Rs. 1, Rs. 2, Rs. 5, Rs. 10, Rs. 50, Rs. 100.
If the sum of Rs. N is input, write a program to computer smallest number of notes that will combine to give Rs. N.

Input
The first line contains an integer T, total number of testcases. Then follow T lines, each line contains an integer N.

Output
Display the smallest number of notes that will combine to give N.

Constraints
1 = T = 1000
1 = N = 1000000
Example
Input
3 
1200
500
242

Output
12
5
7
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long n;
		cin>>n;
		int a[6]={100,50,10,5,2,1};
		int c=0,i=0;
		while(n>0)
		{
			if(n-a[i]>=0)
			{
			
			n=n-a[i];
			c=c+1;
			while(n-a[i]>=0)
			{
				n=n-a[i];
				c=c+1;
			}}
			
			i++;
		}
		cout<<c<<endl;
	}
}
