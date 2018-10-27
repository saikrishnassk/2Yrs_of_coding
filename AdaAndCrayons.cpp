/*
Ada has an array of N crayons, some crayons are pointing upwards and some downwards. Ada thinks that an array of crayons is beautiful if all the crayons are pointing in the same direction.

In one step you can flip any segment of consecutive crayons. After flipping a segment, all crayons pointing downwards will point upwards and visceversa

What is the minimum number of steps to make the array of crayons beautiful?

Input
The first line of the input contains T the number of test cases. Each test case is described in one line containing a string S of N characters, the i-th character is 'U' if the i-th crayon is pointing upwards and 'D' if it is pointing downwards.

Output
For each test case, output a single line containing the minimum number of flips needed to make all crayons point to the same direction.
Example
Input:
1
UUDDDUUU

Output:
1
Explanation
Example case 1. In one step we can flip all the crayons pointing downwards

*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int c=1;
		char ch;
		string s;
		cin>>s;
		ch=s[0];
		for(int i=0;i<s.length();i++)
		{
			if(ch!=s[i])
			{
				ch=s[i];
				c+=1;
			}
		}
		cout<<c/2<<endl;
	}
}
