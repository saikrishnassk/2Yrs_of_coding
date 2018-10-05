/*
Sample Input 0

10
-20 -3916237 -357920 -3620601 7374819 -7330761 30 6246457 -6461594 266854 
Sample Output 0

-20 30
Explanation 0 
(30) - (-20) = 50, which is the smallest difference.

Sample Input 1

12
-20 -3916237 -357920 -3620601 7374819 -7330761 30 6246457 -6461594 266854 -520 -470 
Sample Output 1

-520 -470 -20 30
Explanation 1 
(-470) - (-520) = 30 - (-20) = 50, which is the smallest difference.

Sample Input 2

4
5 4 3 2
Sample Output 2

2 3 3 4 4 5
Explanation 2 
Here, the minimum difference will be 1. Valid pairs are (2, 3), (3, 4), and (4, 5). We print the elements of each pair, space-separated on a single line.
*/

#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the closestNumbers function below.
vector<int> closestNumbers(vector<int> arr) {
    int res;
    
        for(int i=0;i<arr.size();i++)
    {
        for(int j=0;j<arr.size()-1;j++)
        {
            if(arr[j+1]<arr[j])
            {
                int t=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=t;
            }
            
        }
    }
    
    int min=arr[1]-arr[0];
    if(min<0)
        min=-min;
    for(int i=1;i<arr.size()-1;i++)
    {
        res=arr[i+1]-arr[i];
        if(res<0)
            res=(-1*res);
        if(res<min)
            min=res;
        
    }
    int c=0;
    for(int i=0;i<arr.size()-1;i++)
    {
        res=arr[i+1]-arr[i];
        if(res<0)
            res=(-1*res);
        if(res==min)
            c=c+2;
        
        
    }
    int k=0;
    vector<int> result(c);
    for(int i=0;i<arr.size()-1;i++)
    {
        res=arr[i+1]-arr[i];
        if(res<0)
            res=(-1*res);
        if(res==min)
        {
            result[k]=arr[i];
            k=k+1;
            result[k]=arr[i+1];
            k=k+1;
        }
    }
    return result;
    


}
int main()
{
	int n;
	cin>>n;
	vector<int> re(n);
	for(int i=0;i<n;i++)
	{
		cin>>re[i];
	}
	vector<int> result = closestNumbers(re);
	for(int i=0;i<result.size();i++)
	{
		cout<<result[i]<<endl;
	}
}
