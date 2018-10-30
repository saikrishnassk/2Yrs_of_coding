/*
Bear Limak has a string S. Each character of S is a digit '0' or '1'.

Help Limak and check if all the '1' digits form a single non-empty segment (consecutive subsequence) in the string. For each test case, print "YES" or "NO" accordingly.

Input
The first line of the input contains an integer T denoting the number of test cases. The description of T test cases follows.

The only line of each test case contains one string S, consisting of digits '0' and '1' only.

Output
For each test case, output a single line containing the answer — "YES" if all the '1' digits form a single non-empty segment, and "NO" otherwise. Don't print the quotes.
Example
Input:
6
001111110
00110011
000
1111
101010101
101111111111

Output:
YES
NO
NO
YES
NO
NO
Explanation
The answer is "YES" for strings 001111110 and 1111.

The answer is "NO" for 00110011 because the '1' digits form two disjoint segments (while they should all be consecutive, with no '0' digits between them).

The answer is "NO" for 000 because the segment formed by the '1' digits must be non-empty (as written in the statement)

*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		int f=0;
		char ch=s[0];
		if(ch=='1')
		{
		
		for(int i=0;i<s.length();i++)
		{
			if(ch!=s[i] && f==0)
			{
				f=1;
				ch=s[i];
			}
			else if(ch!=s[i])
			{
				cout<<"NO"<<endl;
				f=3;
				break;
			}
			
		}
	}
	else{
		for(int i=0;i<s.length();i++)
		{
			if(ch!=s[i] && f<2)
			{
				f++;
				ch=s[i];
			}
			else if(ch!=s[i])
			{
				cout<<"NO"<<endl;
				f=3;
				break;
				
			}
		}
		if(f==0)
		{
			cout<<"NO\n";
			f=3;
		}
	}
	if(f!=3)
	{
		cout<<"YES\n";
	}
	}
}
