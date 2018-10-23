#include <iostream>
using namespace std;

struct vnode
{
  int parent;
  int d;
  int visited;
};

class Graph
{
   int n_ver;
   int w[100][100];
   vnode vtable[100];

 public:
   void inputGraph();
   void FindMWST(int s);
};

void Graph::inputGraph()
{
  cout << "Enter No. of vertices : ";
  cin >> n_ver;
  cout << "Enter the weight matrix : " << endl;
  for (int u=0; u< n_ver; u++)
  {
    for (int v=0; v < n_ver; v++)
       cin >> w[u][v];
    vtable[u].parent = -1;
    vtable[u].visited = 0;
    vtable[u].d = 9999;
  }
}


void Graph::FindMWST(int s)
{
   int count = 0, u, min_d, wt=0;
   vtable[s].d = 0;
   cout << "Edges of MWST using PRIM's Algorithm"<<endl;
   while (count<n_ver)
   {
     min_d = 9999;
     for (int i=0; i<n_ver; i++)
       if (vtable[i].visited == 0 && vtable[i].d < min_d)
       {
       	cout<<"came into if with vtable[i].d ="<<vtable[i].d <<" and min_d = "<<min_d<<endl;
	 min_d = vtable[i].d;
	 u = i;
       }
     count++;
     cout<<"for count "<<count<<" u ="<<u<<endl;
     vtable[u].visited = 1;
     if (vtable[u].parent != -1)
     {
       cout << "(" << vtable[u].parent << ", " << u << ") - "<<vtable[u].d<<endl;
       wt += vtable[u].d;
     }
     for (int v = 0; v < n_ver; v++)
     {
      if (vtable[v].visited == 0 && vtable[v].d > w[u][v])
      {
	 vtable[v].d = w[u][v];
	 vtable[v].parent = u;
      }
     }
   }
   cout << "Total weight of the spanning tree is : " << wt << endl;
}


int main()
{
   Graph g;
   int s;
   g.inputGraph();
   cout << "Enter Source Vertex: ";
   cin >> s;
   g.FindMWST(s);
   return 0;
   
}


