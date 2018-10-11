/*
Function Description

Complete the minimumAbsoluteDifference function in the editor below. It should return an integer that represents the minimum absolute difference between any pair of elements.

minimumAbsoluteDifference has the following parameter(s):

n: an integer that represents the length of arr
arr: an array of integers
Sample Input 0

3
3 -7 0
Sample Output 0

3
*/
#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the minimumAbsoluteDifference function below.
int minimumAbsoluteDifference(int arr[],int n) {
    sort(arr,arr+n);
    long long min=1000000000000000000;
    for(int i=1;i<n;i++)
    {
        if(min>abs(arr[i]-arr[i-1]))
            min=abs(arr[i]-arr[i-1]);
    }
    return min;


}
int main()
{
	int n,a[100000];
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		
	}
	int res=minimumAbsoluteDifference(a,n);
	cout<<res<<endl;
}
