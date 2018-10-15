/*
A numeric string, s, is beautiful if it can be split into a sequence of two or more positive integers,a[1],....a[n] , satisfying the following conditions:

1. a[i]-a[i-1]=1 for any 1<i<=n (i.e., each element in the sequence is 1 more than the previous element).
2.No a[i] contains a leading zero. For example, we can split s=10203 into the sequence {1,02,03}, but it is not beautiful because 02 and 03 have leading zeroes.
The contents of the sequence cannot be rearranged. For example, we can split s=312 into the sequence {3,1,2}, 
but it is not beautiful because it breaks our first constraint (i.e.,1-3 !=1 ).
You must perform q queries where each query consists of some integer string s. For each query, print whether or not the string is beautiful on a new line. If it's beautiful, print YES x, where x is the first number of the increasing sequence. If there are multiple such values of x, choose the smallest. Otherwise, print NO.
Sample Input 0

7
1234
91011
99100
101103
010203
13
1
Sample Output 0

YES 1
YES 9
YES 99
NO
NO
NO
NO
*/
#include<bits/stdc++.h>
using namespace std;
long long ToInteger(string s)
{
    std::istringstream istr(s);
    long long v;
    istr >> v;
    return v;
}
string ToString(long long v)
{
    std::ostringstream ostr;
    ostr << v;
    return ostr.str();
}
string change(string s1)
{
    long long l;
    l=ToInteger(s1);
    l=l+1;
    s1=ToString(l);
    return s1;
}
void seperateNumber(string s)
{
    for(int j=1;j<=(s.length()/2);j++)
    {
        int si=0,f=0,i=j;
        string first;
        first=s.substr(0,i);
        if(s[0]=='0')
        {
            cout<<"NO\n";
            return ;
        }
        do{
            string n;
            n=change(s.substr(si,i));
            
            if(!(n==s.substr(si+i,n.length())))
            {f=1;            }
            si=si+i;
            i=n.length();
        }while(si+i<s.length());
        if(f==0)
        {
            cout<<"YES "<<first<<endl;
            return ;
            
        }
        
    }
    cout<<"NO"<<endl;
}
int main()
{
    int i;
    cin>>i;
    string s;
    
    while(i--)
    {
        cin>>s;
    
    seperateNumber(s);
    }}
