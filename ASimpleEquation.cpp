/*
Statement
Given N,A,B,C, find how many solutions exist to the equation : a + b + c = N, such that 0 = a = A, 0 = b = B, 0 = c = C.

Input
The first line contains the number of test cases T. Each test case contains 4 integers, N,A,B,C. 0 = N,A,B,C = 2500

Output
Output T lines, one for each test case.

Sample Input
2
4 3 2 1
1 1 1 1
Sample Output
20
4
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int n,a,b,c,con=0;
		cin>>n>>a>>b>>c;
		for(long long int i=0;i<=a;i++)
		{
			for(long long int j=0;j<=b;j++)
			{
				if(n-i-j>=c){
					con+=c;
					con+=1;
				}
				else if(n-i-j>=0){
					con+=n-i-j+1;
				}
			}
		}
		cout<<con<<endl;
	}
}
