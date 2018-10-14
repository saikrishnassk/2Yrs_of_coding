/*
The median of a list of numbers is essentially it's middle element after sorting. The same number of elements occur after it as before. Given a list of numbers with an odd number of elements, can you find the median?

For example, the median of [1,2,4,3,5] is 3, the middle element in the sorted array.

Function Description

Complete the findMedian function in the editor below. It must return an integer that represents the median of the array.

findMedian has the following parameter(s):

arr: an unsorted array of integers
Sample Input 0

7
0 1 2 4 6 5 3
Sample Output 0

3
*/
#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the findMedian function below.
int findMedian(int arr[],int n) {
    sort(arr,arr+n);
    for(int i=0;i<n;i++)
    {
    	cout<<arr[i]<<" ";
	}
    if(n%2==1)
    {
        return arr[(n/2)];
    }
    return (arr[n/2]+arr[ (n/2)-1 ])/2;


}
int main()
{
	int n,a[20];
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<findMedian(a,n);
}
