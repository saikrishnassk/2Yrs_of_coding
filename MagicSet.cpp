/*
Katya has a sequence of integers a1,a2,�,an and an integer m.

She defines a good sequence of integers as a non-empty sequence such that the sum of the elements in each of its non-empty subsequences is divisible by m.

Katya wants to know the number of good subsequences of the sequence a. Can you help her?

Input
The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
The first line of each test case contains two space-separated integers n and m.
The second line contains n space-separated integers a1,a2,�,an.
Output
For each test case, print a single line containing one integer � the number of good subsequences.

Constraints
1=T=1,000
1=n=30
1=m=1,000
1=ai=1,000 for each valid i
Subtasks
Subtask #1 (30 points): 1=n=5
Subtask #2 (70 points): original constraints

Example Input
2
2 3
1 2
2 3
1 3
Example Output
0
1
Explanation
Example case 1: There are no good subsequences.

Example case 2: There is exactly one good subsequence of a: [3].
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m,cnt=0;
		cin>>n>>m;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
			if(a[i]%m==0){
				cnt++;
			}
		}
		cout<<(1<<cnt)-1<<endl;
	}
}
