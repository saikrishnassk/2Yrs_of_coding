/*
Dothraki are planning an attack to usurp King Robert's throne. King Robert learns of this conspiracy from Raven and plans to lock the single door through which the enemy can enter his kingdom.

door

But, to lock the door he needs a key that is an anagram of a palindrome. He starts to go through his box of strings, checking to see if they can be rearranged into a palindrome.

For example, given the string s=[aabbccdd], one way it can be arranged into a palindrome is abcddcba.

Function Description

Complete the gameOfThrones function below to determine whether a given string can be rearranged into a palindrome. If it is possible, return YES, otherwise return NO.

gameOfThrones has the following parameter(s):

s: a string to analyze

Sample Input 0

aaabbbb
Sample Output 0

YES
Explanation 0

A palindromic permutation of the given string is bbaaabb.

Sample Input 1

cdefghmnopqrstuvw
Sample Output 1

NO
Explanation 1

Palindromes longer than 1 character are made up of pairs of characters. There are none here.

Sample Input 2

cdcdcdcdeeeef
Sample Output 2

YES
Explanation 2

An example palindrome from the string: ddcceefeeccdd
*/
#include <bits/stdc++.h>

using namespace std;

// Complete the gameOfThrones function below.
string gameOfThrones(string s) {
    map<char,int> m;
    for(int i=0;i<s.length();i++)
    {
        m.insert(pair<char,int>(s[i],1));
    }
    vector<int> res(m.size());
    map<char,int>::iterator it = m.begin();
    int t,j=0;
    char ch;
    for (it=m.begin(); it!=m.end(); ++it)
    {
        ch=it->first;
        for(int i=0;i<s.length();i++)
        {
            if(ch==s[i])
                t=t+1;
        }
        res[j]=t;
        t=0;
        j=j+1;
        
    }
    if(s.length()%2==0)
    {
        for(int i=0;i<res.size();i++)
        {
            if(res[i]%2 !=0)
                return "NO";
        }
    }
    else
    {
        t=0;
        for(int i=0;i<res.size();i++)
        {
            if(res[i]%2 !=0 && t==0)
                t=t+1;
            else if(res[i]%2 !=0)
                return "NO";
        }
        
    }
    return "YES";


}
int main()
{
	string s;
	cin>>s;
	cout<<gameOfThrones(s);
	
}
