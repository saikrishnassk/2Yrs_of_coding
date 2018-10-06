/*
Two words are anagrams of one another if their letters can be rearranged to form the other word.

In this challenge, you will be given a string. You must split it into two contiguous substrings, then determine the minimum number of characters to change to make the two substrings into anagrams of one another.

For example, given the string 'abccde', you would break it into two parts: 'abc' and 'cde'. Note that all letters have been used, the substrings are contiguous and their lengths are equal. Now you can change 'a' and 'b' in the first substring to 'd' and 'e' to have 'dec' and 'cde' which are anagrams. Two changes were necessary.

Function Description

Complete the anagram function in the editor below. It should return the minimum number of characters to change to make the words anagrams, or -1 if it's not possible.

anagram has the following parameter(s):

s: a string
Sample Input

6
aaabbb
ab
abc
mnop
xyyx
xaxbbbxx
Sample Output

3
1
-1
2
0
1
Explanation

Test Case #01: We split s into two strings s1='aaa' and s2='bbb'. We have to replace all three characters from the first string with 'b' to make the strings anagrams. 

Test Case #02: You have to replace 'a' with 'b', which will generate "bb". 

Test Case #03: It is not possible for two strings of unequal length to be anagrams of one another. 

Test Case #04: We have to replace both the characters of first string ("mn") to make it an anagram of the other one. 

Test Case #05:s1  and s2 are already anagrams of one another. 

Test Case #06: Here S1 = "xaxb" and S2 = "bbxx". You must replace 'a' from S1 with 'b' so that S1 = "xbxb".
*/

#include <bits/stdc++.h>

using namespace std;

// Complete the anagram function below.
int anagram(string s) {
    if(s.length()%2==1)
        return -1;
    int f=s.length()/2;
    map<char,int> mymap,m1;
    int n=1,n1=1;
    map<char,int>::iterator it,it1;
    for(int i=0;i<f;i++)
    {
        it = mymap.find(s[i]);
        if (mymap.count(s[i])>0)
        {
            n=1+it->second;
            mymap.erase (it);
        }
        mymap.insert(pair<char,int>(s[i],n));
        n=1;
        
        it1 = m1.find(s[i+f]);
        if (m1.count(s[i+f])>0)
        {
            n1=1+it1->second;
            m1.erase (it1);
        }
        m1.insert(pair<char,int>(s[i+f],n1));
        n1=1;
		
    

    }
    for(it=mymap.begin();it!=mymap.end();++it)
    {
    	cout<<it->first<<"  "<<it->second<<endl;
	}
	cout<<"--------------"<<endl;
	
    for(it1=m1.begin();it1!=m1.end();++it1)
    {
    	cout<<it1->first<<"  "<<it1->second<<endl;
	}
    int c=0;
    int temp=0;
    for (it1=m1.begin(); it1!=m1.end(); ++it1)
    {
        if(mymap.count(it1->first)>0)
        {
        	
            it=mymap.find(it1->first);
            c=c+abs(it->second-it1->second);
            if(it->second > it1->second)
            {
            	temp=temp+it->second-it1->second;
			}
		}
        else
            {
			c=c+it1->second;
        cout<<"for "<<it1->first<<" c:"<<c<<endl<<it1->second<<endl;}
        
        
    }
    
    return c-temp;


}
int main()
{
	string s;

	int t;
	cin>>t;
	while(t--)
	{
		cin>>s;
	cout<<"-----------("<<anagram(s)<<")------------"<<endl;
}}
