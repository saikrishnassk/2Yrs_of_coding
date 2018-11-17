/*
All submissions for this problem are available.
Three numbers A, B and C are the inputs. Write a program to find second largest among three numbers.

Input
The first line contains an integer T, total number of testcases. Then follow T lines, each line contains three integers A, B and C.

Output
Display the second largest among A, B and C.

Constraints
1 = T = 1000
1 = A,B,C = 1000000
Example
Input
3 
120 11 400
10213 312 10
10 3 450

Output

120
312
10
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long a[3];
		cin>>a[0]>>a[1]>>a[2];
		sort(a,a+3);
		cout<<a[1]<<endl; 
	}
}