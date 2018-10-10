#include<bits/stdc++.h>
using namespace std;
class stack1
{
	int top;
	char a[250];
	public:
		stack1(){top=-1;
		}
		int push(char d){
			
			if(top==24)
			{
				cout<<"unable to push"<<endl;
				return 0;
			}
			top=top+1;
			
			a[top]=d;
			return 1;
		}
		char pop()
		{
			if(top==-1)
			{
				cout<<"error "<<endl;
				return -1;
			}
			char out=a[top];
			
			top=top-1;
			
			return out;
		}
		char peek()
		{
			if(top==-1)
			{
				cout<<"error "<<endl;
				return -1;
			}
			return a[top];
		}
		int display()
		{
			
			if(top==-1)
			{
				cout<<"nothing to display";
				return 0;
			}
			for(int i=top;i>=0;i--)
			{
				cout<<a[i]<<" ";
			}
			return 1;
		}
		string reversed()
		{
			string rev;
			for(int i=top;i>=0;i--)
			{
				rev=rev+a[i];
			}
			return rev;
		}
		
};
int main()
{
	stack1 b;
	string s,r;
	getline(cin,s);
	char ch;
	cout<<s<<endl;
	for(int i=0;i<s.length();i++)
	{
		if( (s[i]>=65 && s[i]<=88) || (s[i]>=97 && s[i]<123) )
		{
		
		if(s[i]>=65 && s[i]<=88)
		{
			ch=(s[i]+32);
			r=r+ch;
			b.push(ch);
		}
		else
		{
			b.push(s[i]);
			r=r+s[i];
		}
	}}
	string result;
	result=b.reversed();
	cout<<r<<endl<<result<<endl;
	if(result==r)
	{
		cout<<"given string is a palindrome"<<endl;
	}
	else
	{
		cout<<"not a palindrome"<<endl;
	}
}
