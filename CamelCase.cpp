/*
Alice wrote a sequence of words in CamelCase as a string of letters, , having the following properties:

It is a concatenation of one or more words consisting of English letters.
All letters in the first word are lowercase.
For each of the subsequent words, the first letter is uppercase and rest of the letters are lowercase.
Given s, print the number of words in  on a new line.

For example, s=oneTwoThree. There are 3 words in the string.

Function Description

Complete the camelcase function in the editor below. It must return the integer number of words in the input string.

camelcase has the following parameter(s):

s: the string to analyze
Input Format

A single line containing string s.
Sample Input

saveChangesInTheEditor
Sample Output

5
Explanation

String  contains five words:

save
Changes
In
The
Editor
Thus, we print 5 on a new line.
*/

#include <bits/stdc++.h>

using namespace std;

// Complete the camelcase function below.
int camelcase(string s) {
    int c=1;
    for(int i=0;i<s.length();i++)
    {
        int a=s[i];
        if(a>=65 && a<=90)
        {
            c=c+1;
        }
    }
    return c;


}

int main()
{
    
    string s;
    getline(cin, s);

    int result = camelcase(s);

    cout<<result;

    return 0;
}

