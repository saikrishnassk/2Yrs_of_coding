/*All submissions for this problem are available.
If an Integer N, write a program to reverse the given number.

Input
The first line contains an integer T, total number of testcases. Then follow T lines, each line contains an integer N.

Output
Display the reverse of the given number N.

Constraints
1 = T = 1000
1 = N = 100000
Example
Input
4
12345
31203
2123
2300
Output
54321
30213
3212
32
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long r=0,rem=0,n;
		cin>>n;
		while(n!=0)
		{
			rem=n%10;
			r=r*10+rem;
			n=n/10;
		}
		cout<<r<<endl;
	}
}
