/*
Program to convert general tree to binary tree
*/
#include<bits/stdc++.h>
#define n 20
using namespace std;
typedef struct Node
{
	char d;
	Node *leftsubtree,*rightsubtree;
	 
}node;
typedef struct leveler
{
	int level;
	node *loc;
}Pred;
node *head;
class stack1
{
	int top;
	Pred p[20];
	public:
		stack1(){
			top=-1;
		}
		void push(Pred temp)
		{
			if(top==19)
			{
				cout<<"unable to push"<<endl;
				return ;
			}
			top=top+1;
			this->p[top]=temp;
			cout<<"done pushing "<<temp.level<<" "<<temp.loc->d<<endl;
			
		}
		Pred pop()
		{
			if(top==-1)
			{
				cout<<"nothing to pop\n";
				
			}
			else{
			
			Pred temp;
			temp=p[top];
			top--;
			cout<<"done poping of "<<temp.level<<"  "<<temp.loc->d<<endl;
			return temp;
		}}
		Pred peek()
		{
			if(top==-1)
			{
				cout<<"NO peeking\n";
			}
			Pred temp;
			temp=p[top];
			return temp;
		}
		void display()
		{
			Pred temp;
			while(!(top==-1))
			{
				temp=this->pop();
				cout<<temp.level<<"  "<<temp.loc->d<<endl;
			}
		}
		void preorder(node *root)
		{
			if(root!=NULL)
			{
				cout<<root->d<<" ";
				preorder(root->leftsubtree);
				preorder(root->rightsubtree);
			}
		}
		void inorder(node *root)
		{
			if(root!=NULL)
			{
				inorder(root->leftsubtree);
				cout<<root->d<<" ";
				inorder(root->rightsubtree);
			}
		}
		void postorder(node *root)
		{
			if(root!=NULL)
			{
				
				postorder(root->leftsubtree);
				postorder(root->rightsubtree);
				cout<<root->d<<" ";
			
			}
		}
		void genToBinary()
		{
			char c;
			node *newnode=new node;
			head=newnode;
			head->leftsubtree= NULL;
			head->rightsubtree=NULL;
			Pred a;
			a.level=-1;
			a.loc=head;
			push(a);
			int leve;
			char name;
			do{
				cout<<"Enter level and name :\n";
				cin>>leve>>name;
				node *newnode=new node;
				newnode->leftsubtree=NULL;
				newnode->rightsubtree=NULL;
				newnode->d=name;
				Pred pred;
				pred=this->peek();
				if(pred.level<leve)
				{
					pred.loc->leftsubtree=newnode;
				}
				else{
					cout<<"came to else with pred.level "<<pred.level<<" and level given "<<leve<<endl;
					while(pred.level>leve)
					{
						cout<<"came into while "<<endl;
						pop();
						pred=peek();
					}
					if(pred.level<leve)
					{
						cout<<"error Mixed inputs\n";
						return ;
					}
					pred.loc->rightsubtree=newnode;
					//pop();
				}
				a.level=leve;
				a.loc=newnode;
				push(a);
				cout<<"\nDo U wan to continue(y/n)?";
				cin>>c;
				
			}while(c=='y');
			cout<<"\nBinary Tree \nIn PreOrder: ";
			preorder(head);
			cout<<"\nInOrder: ";
			inorder(head);
			cout<<"\nPostorder: ";
			postorder(head);
			
			
			
		}
};
int main()
{
	stack1 s;
	s.genToBinary();
//	s.display();
}
