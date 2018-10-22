#include<bits/stdc++.h>
using namespace std;
typedef struct Node{
	int data;
	Node *link;
}node;
struct gnode{
	char name[10];
	int dist;
	int dfn;
	int visited;
	node *eptr;
};
class queue1{
	int q[10],f,r;
	public:
		queue(){f=-1;r=-1;
		}
		int empty(){
			if(f==-1)return 1;
			else return 0;
		}
		void enqueue(int x){
			if(r==10){
				cout<<"Queue overflows"<<endl;
				return;
			}
			q[++r]=x;
			if(f==-1)f++;
			return;
		}
		int dequeue()
		{
			int x;
			if(r==-1){
				cout<<"Queue empty"<<endl;
				return -1;
			}
			x=q[f];
			if(f==r){
				f=r=-1;
			}
			else f++;
			return x;
		}
};
class graph{
	gnode v[10];
	int n;
	int count;
	public:
		void construct(){
			int m,adj;
			node *p;
			cout<<"enter no. of vertices: ";
			cin>>n;
			for(int i=0;i<n;i++){
				cout<<"enter the name of vertex"<<endl;
				cin>>v[i].name;
				v[i].eptr=NULL;
				cout<<"enter no. of adjacent vertices for "<<v[i].name<<" ";
				cin>>m;
				for(int j=0;j<m;j++){
					cout<<"enter the index of "<<j<<"th adjacent vertex for "<<v[i].name<<" ";
					cin>>adj;
					p=new node;
					p->data=adj;
					p->link=NULL;
					if(v[i].eptr==NULL){
						v[i].eptr=p;
					}
					else{
						node *temp=new node;
						temp=v[i].eptr;
						while(temp->link!=NULL){
							temp=(temp->link);
						}
						temp->link=p;
					}
				}
			}
		}
		void initialize(){
			count=0;
			for(int i=0;i<n;i++){
				v[i].dfn=0;
				v[i].dist=0;
				v[i].visited=0;
			}
		}
		void BFS(int u){
			class queue1 q;
			node *t;
			int w;
			initialize();
			v[u].dist=0;
			v[u].visited=1;
			q.enqueue(u);
			while(!q.empty()){
				u=q.dequeue();
				t=v[u].eptr;
				while(t!=NULL){
					w=t->data;
					if(v[w].visited==0){
						v[w].dist=v[u].dist+1;
						v[w].visited=1;
						cout<<v[u].name<<"-->"<<v[w].name<<endl;
						q.enqueue(w);
					}
					t=t->link;
				}
			}
		}
		void display(){
			cout<<"NO.\tName\tAdjacent Node List"<<endl;
			for(int i=0;i<n;i++)
			{
				cout<<i<<"\t"<<v[i].name<<"\t";
				node *t=new node;
				t=v[i].eptr;
				while(t!=NULL)
				{
					cout<<"-->"<<t->data;
					t=t->link;
				}
				cout<<endl;
			}
			cout<<"Edges used in the traversal are : "<<endl;
		}
};
int main()
{
	graph g;
	int v,op;
	g.construct();
	do{
		cout<<"1-BFS 2-DFS 3-Exit \n";
		cin>>op;
		switch(op){
			case 1:
				{
					cout<<"enter the index of starting vertex :";
					cin>>v;
					g.initialize();
					g.display();
					g.BFS(v);
					break;
				}
		}
	}while(op<3);
	return 0;
}















