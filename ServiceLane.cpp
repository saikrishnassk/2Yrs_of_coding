/*
Calvin is driving his favorite vehicle on the 101 freeway. He notices that the check engine light of his vehicle is on, 
and he wants to service it immediately to avoid any risks. Luckily, a service lane runs parallel to the highway.
 The service lane varies in width along its length.

Paradise Highway

You will be given an array of widths at points along the road (indices), then a list of the indices of entry and exit points.
 Considering each entry and exit point pair, calculate the maximum size vehicle that can travel that segment of the service lane safely.

For example, there are n=4 measurements yielding width=[2,3,2,1]. If our entry index, i=1 and our exit,j=2 , there are two segment widths of 2 and 3 respectively. 
The widest vehicle that can fit through both is 2. If i=2 and j=4, our widths are [3,2,1] which limits vehicle width to 1.

Function Description

Complete the serviceLane function in the editor below.
 It should return an array of integers representing the maximum width vehicle that can pass through each segment of the highway described.

serviceLane has the following parameter(s):

n: an integer denoting the size of the cases array
cases: a two dimensional array of integers where each element is an array of 
two integers representing starting and ending indices for a segment to consider .
Sample Input

8 5
2 3 1 2 3 2 3 3
0 3
4 6
6 7
3 5
0 7
Sample Output

1
2
3
2
1
Explanation

Below is the representation of the lane:

   |HIGHWAY|Lane|    ->    Width

0: |       |--|            2
1: |       |---|           3
2: |       |-|             1
3: |       |--|            2
4: |       |---|           3
5: |       |--|            2
6: |       |---|           3
7: |       |---|           3*/
#include <bits/stdc++.h>

using namespace std;


// Complete the serviceLane function below.
vector<int> serviceLane(int n,vector<int>width, int  cases[100][2]) {
    vector<int> result(n);
    for(int i=0;i<n;i++)
    {
        int min=100000;
        for(int j=cases[i][0];j<=cases[i][1];j++)
        {
            if(min>width[j])
            {
                min=width[j];
            }
        }
        result[i]=min;
    }
    return result;
    


}
int main()
{
	
    int n,t;
    cin>>n>>t;
    int cases[100][2];
    for(int i=0;i<t;i++)
    {
    	for(int j=0;j<2;j++)
    	{
    		cin>>cases[i][j];
		}
	}
    vector<int> w(n);
    for(int i=0;i<n;i++)
    {
    	cin>>w[i];
	}
	vector<int> res(t);
	res=serviceLane(n,w,cases);
	for(int i=0;i<t;i++)
	{
		cout<<res[i]<<endl;
	}
	
}

