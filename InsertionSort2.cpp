/*
In Insertion Sort Part 1, you inserted one element into an array at its correct sorted position. Using the same approach repeatedly, can you sort an entire array?

Guideline: You already can place an element into a sorted array. How can you use that code to build up a sorted array, one element at a time? Note that in the first step, when you consider an array with just the first element, it is already sorted since there's nothing to compare it to.

In this challenge, print the array after each iteration of the insertion sort, i.e., whenever the next element has been inserted at its correct position. Since the array composed of just the first element is already sorted, begin printing after placing the second element.

For example, there are n=7 elements in arr=[3,4,7,5,6,2,1]. Working from left to right, we get the following output:

3 4 7 5 6 2 1
3 4 7 5 6 2 1
3 4 5 7 6 2 1
3 4 5 6 7 2 1
2 3 4 5 6 7 1
1 2 3 4 5 6 7
Function Description

Complete the insertionSort2 function in the editor below. At each iteration, it should print the array as space-separated integers on a separate line.

insertionSort2 has the following parameter(s):

n: an integer representing the length of the array arr 
arr: an array of integers
Sample Input

6
1 4 3 5 6 2
Sample Output

1 4 3 5 6 2 
1 3 4 5 6 2 
1 3 4 5 6 2 
1 3 4 5 6 2 
1 2 3 4 5 6 
*/
#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the insertionSort1 function below.
void insertionSort2(int n, vector<int> arr) {
    
    for(int k=0;k<n-1;k++)
    {
    	if(arr[k]>arr[k+1])
    	{
			    int temp=arr[k+1];
			    int i=k+1;
			    while(temp!=0 && i>0)
			    {
			        if(temp<arr[i-1])
			        {
			            arr[i]=arr[i-1];
			        
			        }
			        else
			        {
			            arr[i]=temp;
			            temp=0;   
			        }
			        i=i-1;
			    }
			    if(i==0 && temp !=0)
			    {
			    	arr[i]=temp;
				}
		}
		for(int i=0;i<n;i++)
		{
			cout<<arr[i]<<" ";
		}
		cout<<endl;
    	
	}
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
	insertionSort2(n,a);
	
}
