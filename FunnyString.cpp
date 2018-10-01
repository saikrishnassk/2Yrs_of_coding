/*
In this challenge, you will determine whether a string is funny or not. To determine whether a string is funny, create a copy of the string in reverse e.g.abc->cba . Iterating through each string, compare the absolute difference in the ascii values of the characters at positions 0 and 1, 1 and 2 and so on to the end. If the list of absolute differences is the same for both strings, they are funny.

Determine whether a give string is funny. If it is, return Funny, otherwise return Not Funny.

For example, given the string s=lmnop , the ordinal values of the charcters are [108,109,110,111,112].s_rev=ponml and the ordinals are [112,111,110,109,108]. The absolute differences of the adjacent elements for both strings are [1,1,1,1], so the answer is Funny.

Function Description

Complete the funnyString function in the editor below. For each test case, it should return a string, either Funny or Not Funny.

funnyString has the following parameter(s):

s: a string to test
Sample Input

2
acxz
bcxz
Sample Output

Funny
Not Funny
*/
#include <bits/stdc++.h>

using namespace std;

// Complete the funnyString function below.
string funnyString(string s) {
    int temp,temp1;
	string n,n1;
    string reverse;
    for(int i = s.length() - 1; i >= 0; i--)
{
reverse = reverse + s[i];
}
    for(int i=0;i< (s.length()-1);i++)
    {
        int a=s[i+1],b=s[i],a1=reverse[i+1],b1=reverse[i];
        temp=a-b;
        temp1=a1-b1;
        
        if(temp<0)
            temp=-temp;
		
        if(temp1<0)
            temp1=-temp1;
        
		ostringstream str1,str2; 
    str1 << temp; 
    str2<<temp1;
        n=n+ str1.str();
        n1=n1+str2.str();
    }
    cout<<n<<endl<<n1;
    
    if(n1==n)
        return "Funny";
    return "Not Funny";


}
int main()
{
	string s;
	cin>>s;
	cout<<funnyString(s);
	
}
