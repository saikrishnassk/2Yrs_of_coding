/*
Challenge 
Can you modify your previous Insertion Sort implementation to keep track of the number of shifts it makes while sorting? The only thing you should print is the number of shifts made by the algorithm to completely sort the array. A shift occurs when an element's position changes in the array. Do not shift an element if it is not necessary.

Function Description

Complete the runningTime function in the editor below. It should return an integer representing the number of shifts it will take to sort the given array.

runningTime has the following parameter(s):

arr: an array of integers
Sample Input

5
2 1 3 1 2
Sample Output

4
Explanation

Iteration   Array      Shifts
0           2 1 3 1 2
1           1 2 3 1 2     1
2           1 2 3 1 2     0
3           1 1 2 3 2     2
4           1 1 2 2 3     1

Total                     4
*/
#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the runningTime function below.
int runningTime(vector<int> arr) {
    int i,j,s=0;
    int value;
    for(i=1;i<arr.size();i++)
    {
        value=arr[i];
        j=i-1;
        while(j>=0 && value<arr[j])
        {
            arr[j+1]=arr[j];
            j=j-1;
            s=s+1;
        }
        arr[j+1]=value;
    }
    return s;
        
    }
    

int main()
{
	int n;
	cin>>n;
	vector<int> a(n);
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<runningTime(a);
}
