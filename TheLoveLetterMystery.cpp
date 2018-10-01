/*
James found a love letter that his friend Harry has written to his girlfriend. James is a prankster, so he decides to meddle with the letter. He changes all the words in the letter into palindromes.

To do this, he follows two rules:

He can only reduce the value of a letter by 1, i.e. he can change d to c, but he cannot change c to d or d to b.
The letter a may not be reduced any further.
Each reduction in the value of any letter is counted as a single operation. Find the minimum number of operations required to convert a given string into a palindrome.

For example, given the string s=cde, the following two operations are performed: cde ? cdd ? cdc.

Function Description

Complete the theLoveLetterMystery function in the editor below. It should return the integer representing the minimum number of operations needed to make the string a palindrome.

theLoveLetterMystery has the following parameter(s):

s: a string
Sample Input

4
abc
abcba
abcd
cba
Sample Output

2
0
4
2
Explanation

For the first test case, abc ? abb ? aba.
For the second test case, abcba is already a palindromic string.
For the third test case, abcd ? abcc ? abcb ? abca ? abba.
For the fourth test case, cba ? bba ? aba.
*/
#include <bits/stdc++.h>

using namespace std;

// Complete the theLoveLetterMystery function below.
int theLoveLetterMystery(string s) {
    int c=0;
    for(int i=0;i<(s.length()/2);i++)
    {
        int a=s[i],b=s[s.length()-1-i];
        int temp=a-b;
        if(temp<0)
            temp=-temp;
        c=c+temp;
        
    }
    return c;


}
int main()
{
	string s;
	cin>>s;
	cout<<theLoveLetterMystery(s);
}
