/*
A weighted string is a string of lowercase English letters where each letter has a weight. Character weights are 1 to 26 from a to z 
Function Description

Complete the weightedUniformStrings function in the editor below. It should return an array of strings, either Yes or No, one for each query.

weightedUniformStrings has the following parameter(s):

s: a string
queries: an array of integers
Input Format

The first line contains a string s, the original string. 
The second line contains an integer n, the number of querie

Output Format

Print n lines. For each query, print Yes on a new line if x[i] belongs  U. Otherwise, print No.

Sample Input 0

abccddde
6
1
3
12
5
9
10
Sample Output 0

Yes
Yes
Yes
Yes
No
No
Explanation 0
We print Yes on the first four lines because the first four queries match weights of uniform substrings of s. We print No for the last two queries because there are no uniform substrings s in  that have those weights.

Note that while de is a substring of s that would have a weight of 9, it is not a uniform substring.

Note that we are only dealing with contiguous substrings. So ccc is not a substring of the string ccxxc.

Sample Input 1

aaabbbbcccddd
5
9
7
8
12
5
Sample Output 1

Yes
No
Yes
Yes
No
*/
#include <bits/stdc++.h>

using namespace std;

// Complete the weightedUniformStrings function below.
vector<string> weightedUniformStrings(string s, vector<int> queries) {
    map<int,int>q;
    vector<string> ss(queries.size());
    int c=0;
    char ch=s[0];
    for(int i=0;i<s.length();i++)
    {
        if(ch!=s[i])
        {
         ch=s[i];
         c=0;
        }
        c=c+ch-96;
        q.insert(pair<int,int>(c,1));
        
    }
    for(int i=0;i<queries.size();i++)
    {
        if(q.count(queries[i])>0)
            ss[i]=ss[i]+"Yes";
        else
            ss[i]=ss[i]+"No";
        
    }
    return ss;


}
int main()
{
	string s;
	cin>>s;
	int n;
	cin>>n;
	vector<int> q(n);
	for(int i=0;i<n;i++)
	{
		cin>>q[i];
	}
	vector<string> res(n);
	res=weightedUniformStrings(s,q);
	for(int i=0;i<n;i++)
	{
		cout<<res[i]<<endl;
	}
	
}
