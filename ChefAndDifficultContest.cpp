/*
Oh, these difficult contests� In each contest, there are so many hard tasks Chef cannot solve. However, he knows that he can only become a successful coder if he works hard. Fortunately, he has a problem in mind for training.

You are given two positive integers a and b. You may apply the following magical operation any number of times (including zero):

choose an arbitrary positive integer d
perform exactly one of the following actions:
add d to a, add d-1 to b
add d-1 to a, add d to b
Chef is asking you to find out if it is possible to obtain a=b. Help him!

Input
The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
The first and only line of each test case contains two space-separated integers a and b.
Output
For each test case, print a single line containing the string "YES" if it is possible to obtain a=b or "NO" if it is impossible.

Constraints
1=T=1,000
1=a,b=109
Subtasks
Subtaks #1 (100 points): original constraints

Example Input
1
5 7
Example Output
YES
Explanation
Example case 1: One possible strategy for Chef is:

choose d=10, add d-1=9 to a and d=10 to b; after this operation, a=14 and b=17
choose d=10, add d=10 to a and d-1=9 to b; afterwards, a=24 and b=26
choose d=9, add d=9 to a and d-1=8 to b; afterwards, a=33 and b=34
choose d=9, add d to a and d-1 to b; finally, we have a=b=42
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--){
		long long a,b;
		cin>>a>>b;
		cout<<"YES"<<endl;
	}
	return 0;
}
