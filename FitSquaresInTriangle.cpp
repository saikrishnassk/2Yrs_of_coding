/*
What is the maximum number of squares of size 2x2 that can be fit in a right angled isosceles triangle of base B.
One side of the square must be parallel to the base of the isosceles triangle.
Base is the shortest side of the triangle
Input
First line contains T, the number of test cases.
Each of the following T lines contains 1 integer B.
Output
Output exactly T lines, each line containing the required answer.
Constraints
1 = T = 103
1 = B = 104
Sample Input

11
1
2
3
4
5
6
7
8
9
10
11
Sample Output 

0
0
0
1
1
3
3
6
6
10
10
*/
#include<bits/stdc++.h>
using namespace std;
int NumSquare(int n)
{
	int n1;
	n1=n;
	if(n<0 || n-2<2)
	{
		return 0;
	}
	n=n-2;
	if(n%2==1)
	{
		n=n-1;
	}
	n=n/2;
	return (2*n-1)+NumSquare(n1-4);
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int b;
		cin>>b;
		cout<<NumSquare(b)<<endl;
	}
}
