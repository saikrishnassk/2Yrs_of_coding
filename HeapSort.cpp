#include<bits/stdc++.h>
using namespace std;
class heap
{
	int h[20],s;
	
	public:
		heap(){
			cout<<"enter size of heap\n";
			cin>>s;
			for(int i=0;i<20;i++)
			{
				h[i]=-1;
			}
			cout<<"enter array elements\n";
			for(int i=0;i<s;i++)
			{
				cin>>h[i];
			}
		}
		void reheapup(int newnode)
		{
			int parent;
			if(newnode != 0)
			{
				parent=(newnode-1)/2;
				if(h[newnode]>h[parent])
				{
					int temp=h[newnode];
					h[newnode]=h[parent];
					h[parent]=temp;
					reheapup(parent);
				}
			}
		}
		void reheapdown(int newnode,int last)
		{
			if(h[(2*newnode)+1]!=-1 && ((2*newnode)+1)<=last)
			{
				int left,right,largest;
				left=(2*newnode)+1;
				cout<<"left ="<<left<<endl;
				if(h[(2*newnode)+2]!=-1 && ((2*newnode)+2)<=last)
				{
					cout<<"came to right ";
					right=(2*newnode)+2;
					cout<<right<<endl;
				}
				else{
					right=-1;
				}
				if(h[left]>h[right])
				{
					cout<<"largest left ="<<left<<endl;
					largest=left;
				}
				else
				{
					cout<<"right is largest ="<<right;
					largest=right;
				}
				if(h[largest]>h[newnode])
				{
					cout<<"swapping is done here h largest ="<<h[largest]<<" h newnode= "<<h[newnode]<<endl; 
					int temp=h[largest];
					h[largest]=h[newnode];
					h[newnode]=temp;
					reheapdown(largest,last);
				}
				
			}
		}
		void buildMaxheap()
		{
			int walker=1;
			while(walker<s)
			{
				reheapup(walker);
				walker+=1;
			}
			cout<<"after building max heap \n";
			this->display();
		}
		void heapSort()
		{
			buildMaxheap();
			int last=s-1;
			while(last>=1)
			{
				int temp=h[last];
				h[last]=h[0];
				h[0]=temp;
				cout<<last<< " -------------"<<endl;
				last-=1;
				reheapdown(0,last);
				display();
			}
		}
		void display()
		{
			for(int i=0;i<s;i++)
			{
				cout<<h[i]<<" ";
			}
			cout<<endl;
		}
};
int main()
{
	heap h;
	h.heapSort();
	h.display();
}
