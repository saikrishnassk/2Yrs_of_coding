/*
Every day, Mike goes to his job by a bus, where he buys a ticket. On the ticket, there is a letter-code that can be represented as a string of upper-case Latin letters.

Mike believes that the day will be successful in case exactly two different letters in the code alternate. Otherwise, he believes that the day will be unlucky. Please see note section for formal definition of alternating code.

You are given a ticket code. Please determine, whether the day will be successful for Mike or not. Print "YES" or "NO" (without quotes) corresponding to the situation.

Input
The first line of the input contains an integer T denoting the number of test cases. The description of T test cases follows.

The first and only line of each test case contains a single string S denoting the letter code on the ticket.

Output
For each test case, output a single line containing "YES" (without quotes) in case the day will be successful and "NO" otherwise.
Example
Input:
2
ABABAB
ABC

Output:
YES
NO
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
		int f;
		if(s[0]!=s[1])
		{
			f=1;
		}
		for(int i=2;i<s.length();i++)
		{
			if(s[i]!=s[i-2])
			{
				f=0;
				break;
			}
		}
		if(f==1)
		{
			cout<<"YES\n";
		}
		else{
			cout<<"NO\n";
		}
		
			}
}
