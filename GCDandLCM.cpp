/*
Two integers A and B are the inputs. Write a program to find GCD and LCM of A and B.

Input
The first line contains an integer T, total number of testcases. Then follow T lines, each line contains an integer A and B.

Output
Display the GCD and LCM of A and B separated by space respectively.

Constraints
1 = T = 1000
1 = A,B = 1000000
Example
Input
3 
120 11
10213 312
10 3

Output

1 1320
1 3186456
1 30
*/
#include<bits/stdc++.h>
using namespace std;
long gcd(long a,long b)
{
	long r;
	while(b!=0){
		r=a%b;
		a=b;
		b=r;
	}
	return a;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long a,b,c;
		cin>>a>>b;
		c=gcd(a,b);
		cout<<c<<" ";
		cout<<(a*b)/c<<endl;
	}
}
