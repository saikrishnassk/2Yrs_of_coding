#include<bits/stdc++.h>
using namespace std;
#define N 10
typedef struct Node{
	int data;
	Node *link;
}node;
class table
{
	node *head[N];
	public:
		table(){
			for(int i=0;i<N;i++)
			{
				head[i]=NULL;
			}
		}
		bool insert(int key)
		{
			int h=key%N;
			node *newnode=new node;
			if(newnode==NULL)
			{
				return false;
			}
			newnode->data=key;
			newnode->link=head[h];
			head[h]=newnode;
			cout<<"inserted\n";
			return true;
			}
		int search(int key)
		{
			int h=key%N;
			if(head[h]==NULL)
			{
				cout<<"element not found\n";
				return 0;
			}
			node *temp=new node;
			temp=head[h];
			int loc=1;
			while(temp!=NULL){
				if(temp->data==key)
				{
					cout<<"element present at "<<loc<<" in list "<<h;
					return 1;
				}
				else
				{
					loc+=1;
					temp=temp->link;
				}
			}
			cout<<"element is not present \n";
			return 0;
		}
		void display()
		{
			int h=0;
			node *temp=new node;
			while(h<N)
			{
				temp=head[h];
				while(temp!=NULL)
				{
					cout<<temp->data<<"\t";
					temp=temp->link;
				}
				cout<<endl;
				h++;
				
			}
		}
		
};
int main()
{
	int val,op;
	table t;
	do{
		cout<<"enter 1-insert 2-search 3-display 4-exit\n";
		cin>>op;
		if(op==1)
		{
			cout<<"enter val to be inserted\n";
			cin>>val;
			t.insert(val);
		}
		else if(op==2)
		{
			cout<<"enter val to search\n";
			cin>>val;
			t.search(val);
		}
		else if(op==3)
		{
			cout<<"displaying"<<endl;
			t.display();
		}
		
	}while(op<4);
	return 0;
}
