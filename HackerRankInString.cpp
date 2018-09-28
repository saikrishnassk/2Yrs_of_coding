/*
We say that a string contains the word hackerrank if a subsequence of its characters spell the word hackerrank. For example, if string s= haacckkerrannkk it does contain hackerrank, but s=haacckkerannk does not. In the second case, the second r is missing. If we reorder the first string as hccaakkerrannkk, it no longer contains the subsequence due to ordering.

More formally,p[0],...p[9]  let  be the respective indices of h, a, c, k, e, r, r, a, n, k in string s. If p[0]<p[1]<p[2]<...<p[9] is true, then s contains hackerrank.

For each query, print YES on a new line if the string contains hackerrank, otherwise, print NO.


Sample Input 0

2
hereiamstackerrank
hackerworld
Sample Output 0

YES
NO
Explanation 0

We perform the following q=2 queries:

1. s=HereiAmstaCKERRANK
The characters of hackerrank are bolded in the string above. Because the string contains all the characters in hackerrank in the same exact order as they appear in hackerrank, we print YES on a new line.
2. s=hackerworld does not contain the last three characters of hackerrank, so we print NO on a new line.

Sample Input 1

2
hhaacckkekraraannk
rhbaasdndfsdskgbfefdbrsdfhuyatrjtcrtyytktjjt
Sample Output 1

YES
NO
*/
#include <bits/stdc++.h>

using namespace std;

// Complete the hackerrankInString function below.
string hackerrankInString(string s) {
    string ss="hackerrank",res;
    int k=0;
    for(int i=0;i<s.length();i++)
    {
        if(ss[k]==s[i])
        {
           
            res=res+ss[k];
            k=k+1;
        }
    }
    if(res=="hackerrank")
        return "YES";
    return "NO";


}
int main()
{
	string str;
	cin>>str;
	cout<<hackerrankInString(str);
}
