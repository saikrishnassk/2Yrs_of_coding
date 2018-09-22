/*
You are given a square map as a matrix of integer strings. Each cell of the map has a value denoting its depth.
We will call a cell of the map a cavity if and only if this cell is not on the border of the map and each cell
adjacent to it has strictly smaller depth. Two cells are adjacent if they have a common side, or edge.

Find all the cavities on the map and replace their depths with the uppercase character X.

For example, given a matrix:

989
191
111
You should return:

989
1X1
111
The center cell was deeper than those on its edges: [8,1,1,1]. The deep cells in the top two corners don't share an edge with the center cell.
Sample Input

4
1112
1912
1892
1234
Sample Output

1112
1X12
18X2
1234
Explanation

The two cells with the depth of 9 are not on the border and are surrounded on all sides by shallower cells.
Their values have been replaced by X.
*/

#include <bits/stdc++.h>

using namespace std;

// Complete the cavityMap function below.
vector<string> cavityMap(vector<string> grid) {
    for(int i=1;i<grid.size()-1;i++)
    {
        for(int j=1;j<grid.size();j++)
                           {
                               if(grid[i][j]>grid[i-1][j] && grid[i][j]>grid[i][j-1]&&grid[i][j]>grid[i+1][j]&&grid[i][j]>grid[i+1][j])
                                   grid[i][j]='X';
                           }
    }
                           return grid;


}
int main()
{
	int n;
	cin>>n;
	vector<string> g(n+1);
	for(int i=0;i<=n;i++)
	{
		string gi;
		getline(cin,gi);
		g[i]=gi;
	}
	vector<string> result = cavityMap(g);

    for (int i = 0; i < result.size(); i++) {
        cout<< result[i];

        if (i != result.size() - 1) {
            cout<< "\n";
        }
    }
}

