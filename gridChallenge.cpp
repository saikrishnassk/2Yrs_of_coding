/*
Given a square grid of characters in the range ascii[a-z], rearrange elements of each row alphabetically, ascending. Determine if the columns are also in ascending alphabetical order, top to bottom. Return YES if they are or NO if they are not.

For example, given:

a b c
a d e
e f g
The rows are already in alphabetical order. The columns a a e, b d f and c e g are also in alphabetical order, so the answer would be YES. Only elements within the same row can be rearranged. They cannot be moved to a different row.

Function Description

Complete the gridChallenge function in the editor below. It should return a string, either YES or NO.

gridChallenge has the following parameter(s):

grid: an array of strings
Sample Input

1
5
ebacd
fghij
olmkn
trpqs
xywuv
Sample Output

YES

*/

#include <bits/stdc++.h>

using namespace std;

// Complete the gridChallenge function below.
string gridChallenge(string grid[],int n) {
    cout<<n<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            for(int k=0;k<n-1;k++)
            {
                if(grid[i][k]>grid[i][k+1])
                {
                    char ch=grid[i][k];
                    grid[i][k]=grid[i][k+1];
                    grid[i][k+1]=ch;
                }
            }
        }
    }
    
    cout<<"diaplaying .."<<endl;
    for(int i=0;i<n;i++)
    {
    	for(int j=0;j<n;j++)
    	{
    		cout<<grid[i][j];
		}
		cout<<endl;
	}
    for(int i=0;i<n;i++)
    {
        for(int j=1;j<n;j++)
        {
            if(grid[j][i]<grid[j-1][i])
            {
            	cout<<grid[j][i]<<"  "<<grid[j-1][i];
            	return "NO";
			}
                
        }
    }
    return "YES";


}
int main()
{
int n;
        cin >> n;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        string grid[20];

        for (int i = 0; i < n; i++) {
            string grid_item;
            getline(cin, grid_item);

            grid[i] = grid_item;
        }

    cout<<gridChallenge(grid,n);

}
