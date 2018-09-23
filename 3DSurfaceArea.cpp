#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the surfaceArea function below.
/*int surfaceArea(int A[100][100],int m,int n) {
    vector<int> maxrow(m),maxcol(n);
    int area=0;
    cout<<"row............"<<endl;
    for(int i=0;i<m;i++)
    {
        maxrow[i]=A[i][0];
        for(int j=0;j<n;j++)
        {
            if(A[i][j]>maxrow[i])
                maxrow[i]=A[i][j];
            
        }
        cout<<maxrow[i]<<endl;
    }
    cout<<"col..........."<<endl;
    for(int i=0;i<n;i++)
    {
        maxcol[i]=A[0][i];
        for(int j=0;j<m;j++)
        {
            if(A[j][i]>maxcol[i])
                maxcol[i]=A[j][i];
            
        }
        cout<<maxcol[i]<<endl;
    }
    for(int i=0;i<m;i++)
    {
        for(int j=1;j<n-1;j++)
        {
            if(A[i][j-1]>A[i][j] && A[i][j+1]>A[i][j])
            {
            	if(A[i][j-1]>A[i][j+1])
            	{
            		area+=2*(A[i][j+1]-A[i][j]);
				}
				else
				{
					area+=2*(A[i][j-1]-A[i][j]);
					
				}
			}
            
        }
    }
    cout<<"present area ::"<<area<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=1;j<m-1;j++)
        {
            if(A[j-1][i]>A[j][i] && A[j+1][i]>A[j][i])
            {
            	if(A[j-1][i]>A[j+1][i])
            	{
            		area+=2*(A[j+1][i]-A[j][i]);
            		cout<<"at "<<A[j][i]<<endl<<"entered "<<2*(A[j+1][i]-A[j][i])<<endl;
				}
				else
				{
					area+=2*(A[j-1][i]-A[j][i]);
					cout<<"at "<<A[j][i]<<endl<<"entered "<<2*(A[j-1][i]-A[j][i])<<endl;
					
				}
            	
			}
            
        }
    }
    
    cout<<"present area ::"<<area<<endl;
    for(int i=0;i<m;i++)
    {
        area+=2*maxrow[i];
    }
    for(int i=0;i<n;i++)
    {
        area+=2*maxcol[i];
    }
    area+=2*(m*n);
    
    return area;


}
int main()
{
	int a[100][100],m,n;
	cin>>m>>n;
	for(int i=0;i<m;i++)
    {
        
        for(int j=0;j<n;j++)
        {
           cin>>a[i][j];    
        }
    }
    cout<<surfaceArea(a,m,n)<<endl;
}*/

int a[102][102];

int dx[] = {0, 0, 1, -1};
int dy[] = {1, -1, 0, 0};

int main() {
	int h, w;

	cin >> h >> w;	


	for(int x = 1; x <= h; x++)
		for(int y = 1; y <= w; y++)
			cin >> a[x][y];

	int ans = 2 * h * w; // top + bottom
	
	for(int x = 1; x <= h; x++) {
		for(int y = 1; y <= w; y++) {
			for(int i = 0; i < 4; i++) {
				int x_ = x + dx[i];
				int y_ = y + dy[i];
				ans += max(0, a[x][y] - a[x_][y_]);
			}
		}
	}
	cout << ans << endl;

	return 0;
}

