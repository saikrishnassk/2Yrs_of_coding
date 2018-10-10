#include<bits/stdc++.h>
using namespace std;

class stack1
{
	int top;
	int a[25];
	public:
		stack1(){top=-1;
		}
		int push(int d){
			
			if(top==24)
			{
				cout<<"unable to push"<<endl;
				return 0;
			}
			top=top+1;
			
			a[top]=d;
			return 1;
		}
		int pop()
		{
			if(top==-1)
			{
				cout<<"error "<<endl;
				return -1;
			}
			int out=a[top];
			
			top=top-1;
			
			return out;
		}
		int peek()
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
		int display5()
		{
			if(top==-1)
			{
				cout<<"error 1"<<endl;
				return -1;
			}
			int t;
			cout<<endl;
			for(int i=0;i<5;i++)
			{
				t=this->pop();
				if(t==-1)
				{
					return -1;
				}
				cout<<t<<"  ";
				
			}
			cout<<endl;
			return 1;
		}
		
};
int main()
{
	stack1 s;
	int b[50],m,t;
	cout<<"enter size"<<endl;
	cin>>m;
	for(int i=0;i<m;i++)
	{
		cin>>b[i];
	}
	for(int i=0;i<m;i++)
	{
		
		
		if(b[i]>=0)
		{
			s.push(b[i]);
		}
		else
		{
			cout<<"negitive number came "<<endl;
			t=s.display5();
			if(t==-1)
			{
				exit(1);
			}
		}
	}
	s.display();
	
	
}
