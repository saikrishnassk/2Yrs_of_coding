/*
There is a garland — a cyclic rope with red and green flowers on it in some order. The sequence of flower colours is described by a string s; since the rope is cyclic, each two consecutive flowers are adjacent and the first and last flower are also adjacent.

The garland is beautiful if there is no pair of adjacent flowers with identical colours.

You want the garland to be beautiful. To achieve that, you may perform the following operation at most once:

Make two cuts on the rope (not intersecting the flowers), splitting the garland into two parts.
Reverse one of these two parts.
Tie together corresponding endpoints of the two parts, creating one whole garland again.
Can you find out whether it is possible to make the garland beautiful?

Input
The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
The first and only line of each test case contains a single string s describing the garland. Each character of s is either 'R' or 'G', denoting a red or green flower respectively.
Output
For each test case, print a single line containing the string "yes" if the garland can be made beautiful or "no" otherwise.

Constraints
1=T=105
2=|s|=105
the sum of |s| over all test cases does not exceed 106
Example Input
3
RG
RRGG
RR
Example Output
yes
yes
no
Explanation
Example case 1: The garland is already beautiful.

Example case 2: We can cut the garland between flowers 1 and 2 and between flowers 3 and 4. After reversing the part containing flowers 2 and 3 and rejoining, we obtain "RGRG".
*/
#include <bits/stdc++.h>
using namespace std;
bool beautiful(string s)
{
    int c=0;
    for(int i=0;i<s.length()-1;i++)
    {
        if(s[i]==s[i+1])
        c++;
    }
    if(s[0]==s[s.length()-1])
    c++;
    if(c==0||c==2)
    return 1;
    else
    return 0;
}

int main() {
	int T;
	cin>>T;
	string str;
	while(T--)
	{
	    int i, r = 0,g = 0,t = 0;
	    cin>>str;
	    for(i=0;i<str.length();i++)
	    {
	        if(str[i]=='R')
	        r++;
	        else
	        g++;
	    }
	    if(r==g){
	        if(beautiful(str))
	          cout<<"yes"<<endl;
	          else
	          cout<<"no"<<endl;}
	    else
	          cout<<"no"<<endl;}
	return 0;
}
