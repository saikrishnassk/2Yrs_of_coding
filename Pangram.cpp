
/*

Roy wanted to increase his typing speed for programming contests. His friend suggested that he type the sentence "The quick brown fox jumps over the lazy dog" repeatedly. This sentence is known as a pangram because it contains every letter of the alphabet.

After typing the sentence several times, Roy became bored with it so he started to look for other pangrams.

Given a sentence, determine whether it is a pangram. Ignore case.

Function Description

Complete the function pangrams in the editor below. It should return the string pangram if the input string is a pangram. Otherwise, it should return not pangram.

pangrams has the following parameter(s):

s: a string to test
Input Format

Input consists of a string s.
Output Format

Output a line containing pangram if s is a pangram, otherwise output not pangram. 

Sample Input 0

We promptly judged antique ivory buckles for the next prize

Sample Output 0

pangram

Sample Explanation 0

All of the letters of the alphabet are present in the string.

Sample Input 1

We promptly judged antique ivory buckles for the prize

Sample Output 1

not pangram

Sample Explanation 0

The string lacks an x.

*/

#include <bits/stdc++.h>

using namespace std;

// Complete the pangrams function below.
string pangrams(string s) {
    map<char,int> si;
    char c;
    for(int i=0;i<s.length();i++)
    {
        c=s[i];
        if(s[i]>=65&&s[i]<90)
            c=s[i]+32;
            si.insert(pair<char,int>(c,1));
            
        
    }
    for(c='a';c<='z';c++){
        if(!si.count(c)>0)
        {
            cout<<c;
            return "not pangram";
            
        }
            
        
    }
    return "pangram";


}
int main()
{
	string s;
	getline(cin,s);
	cout<<pangrams(s);
	
}
