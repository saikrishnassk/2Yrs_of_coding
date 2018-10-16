/*
All submissions for this problem are available.Meliodas and Ban are fighting over chocolates. Meliodas has X chocolates, while Ban has Y. Whoever has lesser number of chocolates eats as many chocolates as he has from the other's collection. This eatfest war continues till either they have the same number of chocolates, or atleast one of them is left with no chocolates.
Can you help Elizabeth predict the total no of chocolates they'll be left with at the end of their war?

Input:
First line will contain T, number of testcases. Then the testcases follow.
Each testcase contains of a single line of input, which contains two integers X,Y, the no of chocolates Meliodas and Ban have, respectively.
Output:
For each testcase, output in a single line the no of chocolates that remain after Ban and Meliodas stop fighting.
Sample Input:
3
5 3
10 10
4 8

Sample Output:
2
20
8

EXPLANATION:
Denoting Meliodas as M, Ban as B.

Testcase 1:
M=5, B=3
Ban eates 3 chocolates of Meliodas.
M=2, B=3
Meliodas eats 2 chocolates of Ban.
M=2, B=1
Ban eates 1 chocolate of Meliodas.
M=1, B=1
Since they have the same no of candies, they stop quarreling.
Total candies left: 2

Testcase 2:
M=10, B=10
Since both of them had the same candies to begin with, there was no point in fighting.
Total candies left: 20

Testcase 3:
M=4, B=8
Meliodas eats 4 chocolates of Ban.
M=4, B=4
Since they have the same no of candies, they stop quarreling.
Total candies left: 8
*/
#include<bits/stdc++.h>
using namespace std;
/*long long deadSin(long long m,long long n)
{
	if(m==1 || n==1)
	{
		return 2;
	}
	if(m==0 || n==0)
	{
		return m+n;
	}
		if(m==n)
		{
			return m+n;
		}
		else if(m>n && m%n==0)
		{
			return 2*n;
		}
		else if(n>m  && n%m==0)
		{
			return 2*m;
		}
		else if(m>n)
		{
			return deadSin(m-n,n);
		}
		else if(n>m)
		{
			return deadSin(m,n-m);
		}
	
}*/
long gcd(long m,long n)
{
	if(n==0)
	{
		return m;
	}
	else if(m==0)
	{
		return n;
	}
	return gcd(n,m%n);
}
int main()
{
	long t;
	scanf("%ld",&t);
	while(t--)
	{
		long long m,n,g;
		scanf("%ld%ld",&m,&n);
		
		if(m>n)
		{
			g=gcd(m,n);
		}
		else if(n>m)
		{
			g=gcd(n,m);
		}
		else
		{
			g=m+n;
		}
		printf("%ld\n",2*g);
	}
}
