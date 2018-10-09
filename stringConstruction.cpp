/*
Amanda has a string of lowercase letters that she wants to copy to a new string. She can perform the following operations with the given costs. She can perform them any number of times to construct a new string p:

Append a character to the end of string p at a cost of 1 dollar.
Choose any substring of p and append it to the end of p at no charge.
Given n strings s[i], find and print the minimum cost of copying each s[i] to p[i] on a new line.

For example, given a string s=abcabc, it can be copied for 3 dollars. Start by copying a, b and c individually at a cost of 1 dollar per character. String p=abc at this time. Copy p[0:2] to the end of p at no cost to complete the copy.

Function Description

Complete the stringConstruction function in the editor below. It should return the minimum cost of copying a string.

stringConstruction has the following parameter(s):

s: a string
Sample Input

2
abcd
abab
Sample Output

4
2
*/
#include <bits/stdc++.h>

using namespace std;

// Complete the stringConstruction function below.
int stringConstruction(string s) {
    string p;
    int c=0;
    for(int i=0;i<s.length();i++)
    {
        if(p.find(s[i])==string::npos )
        {
            p=p+s[i];
            c=c+1;
        }
    }
    return c;


}
int main()
{
	string s;
	cin>>s;
	cout<<stringConstruction(s);
}
