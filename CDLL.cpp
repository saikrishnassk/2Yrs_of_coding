#include<bits/stdc++.h>
using namespace std;
typedef struct Node
{
	int data;
	Node *front,*back;
}node;
typedef struct head
{
	int c;
	node *fore,*rear;
}hd;
void insbegin(hd *h,int d)
{
	if(h==NULL){
		cout<<"unable to insert"<<endl;
		return ;
	}
	
	node *newnode=new node;
	newnode->data=d;
	newnode->back=h->rear;
	newnode->front=h->fore;
	if(h->c!=0){
	
	h->fore->back=newnode;
	h->rear->front=newnode;
	h->fore=newnode;}
	else{
		h->fore=newnode;
		h->rear=newnode;
	}
	h->c+=1;
	cout<<"success\n";
	return ;
}
void insend(hd *h,int d)
{
	if(h->c==0)
	{
		insbegin(h,d);
		return ;
	}
	node *newnode=new node;
	newnode->data=d;
	newnode->back=h->rear;
	newnode->front=h->fore;
	h->rear->front=newnode;
	h->fore->back=newnode;
	h->rear=newnode;
	h->c+=1;
	cout<<"finished end \n";
	return ;
	
}
void delnode(hd *h,int d){
	if(h->fore==NULL){
		cout<<"can not delete \n";
		return ;
	}
	node *n=new node;
	n=h->fore;
	for(int i=0;i<h->c;i++)
	{
		if(n->data==d)
		{
			if(h->c==1){
				h->rear=NULL;
				h->fore=NULL;
			}
			else if(n->back==h->rear)
			{
				if(h->c==2)
				{
					n->front->back=NULL;
					n->back->front=NULL;
				}
				else{
				
				n->front->back=h->rear;
				h->rear->front=n->front;
				h->fore=n->front;}
				delete(n);
			}
			else if(n->front==h->fore)
			{
				if(h->c==2)
				{
					n->back->front=NULL;
					n->front->back=NULL;
				}
				else{
				
				n->back->front=h->fore;
				h->fore->back=n->back;
				h->rear=n->back;}
				delete(n);
			}
			else{
				n->front->back=n->back;
				n->back->front=n->front;
				delete(n);
			}
			h->c-=1;
			cout<<"deleted\n";
			return;
		}
		n=n->front;
	}
}
void display(hd *h){
	if(h->fore==NULL)
	{
		cout<<"nothing to display"<<endl;
		return;
	}
	node *n=new node;
	n=h->fore;
	for(int i=0;i<h->c;i++)
	{
		cout<<n->data<<" ";
		n=n->front;
	}
}
int main(){
	hd *h=new hd;
	h->c=0;
	h->fore=NULL;
	h->rear=NULL;
	insbegin(h,12);
	insend(h,14);
	insbegin(h,13);
	insbegin(h,15);
	insbegin(h,16);
	insend(h,20);
	display(h);
	delnode(h,20);
	display(h);
	delnode(h,13);
	display(h);
}
