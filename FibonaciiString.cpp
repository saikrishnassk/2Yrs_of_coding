/*
For a string S let the unique set of characters that occur in it one or more times be C. Consider a permutation of the elements of C as (c1,c2,c3...). Let f(c) be the number of times c occurs in S.

If any such permutation of the elements of C satisfies f(ci)=f(ci-1)+f(ci-2) for all i=3, the string is said to be a dynamic string.

Mr Bancroft is given the task to check if the string is dynamic, but he is busy playing with sandpaper. Would you help him in such a state?

Note that if the number of distinct characters in the string is less than 3, i.e. if |C|<3, then the string is always dynamic.

Input:
First line will contain T, number of testcases. Then the testcases follow.
Each testcase contains of a single line of input, a string S.
Output:
For each testcase, output in a single line "Dynamic" if the given string is dynamic, otherwise print "Not". (Note that the judge is case sensitive)
Sample Input:
3
aaaabccc
aabbcc
ppppmmnnoooopp
Sample Output:
Dynamic
Not
Dynamic
*/
#include<bits/stdc++.h>
using namespace std;
string checking(string s)
{
	map<char,int> m;
	int l;
	map<char,int>::iterator it;
	for(int i=0;i<s.length();i++)
	{
		l=1;
		if(m.count(s[i])>0)
		{
			//cout<<"came\n";
			//cout<<m.find(s[i])->second<<endl;
			l=l+m.find(s[i])->second;
			m.erase(m.find(s[i]));
			
		}
		m.insert(pair<char,int>(s[i],l));
		
	}
	int  a[26],j=0;
	for(it=m.begin();it!=m.end();++it)
	{
		a[j]=it->second;
		j++;
	}
	sort(a,a+j);
	for(int i=2;i<j;i++)
	{
		if((a[i]!=(a[i-1]+a[i-2]))&&((a[i]+a[i-1])!=a[i-2])&&((a[i-1]+a[i-2])!=a[i]) ) 
		{
			return "Not";
		}
		
	}
	return "Dynamic";
}
int main()
{
	string res;
	int t;
	cin>>t;
	while(t--)
	{
		cin>>res;
		cout<<checking(res)<<endl;
	
		
	}
}
