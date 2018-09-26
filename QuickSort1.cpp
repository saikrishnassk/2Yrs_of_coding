/*
Step 1: Divide 
Choose some pivot element, p , and partition your unsorted array,arr , into three smaller arrays:left ,right ,and equal , where each element in left<p, each element in right>p, and each element in equal=p.

For example: Assume arr=[5,7,4,3,8]  
The pivot is at arr[0]=p  
 is divided into ,left={4,3} ,equal={5} and right={7,8} . 
Putting them all together, you get {4,3,5,7,8} . Another valid solution is {3,4,5,8,7}.

Given  arr and p=arr[0], partition arr into left,right , and equal using the Divide instructions above. Then print each element in left followed by each element in equal, followed by each element in right on a single line. Your output should be space-separated and does not have to maintain ordering of the elements within the three categories.

Function Description

Complete the quickSort function in the editor below. It should return an array of integers as described above.

quickSort has the following parameter(s):

arr: an array of integers where  is the pivot element
Sample Input

5
4 5 3 7 2
Sample Output

3 2 4 5 7

*/
#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the quickSort function below.
vector<int> quickSort(vector<int> arr) {
    int p=arr[0],n=arr.size();
    int le[1000],ri[1000],l=0,r=0,eq[1000],e=0;
    vector<int>res(n);
    for(int i=0;i<n;i++)
    {
        if(arr[i]>p)
        {
            ri[r]=arr[i];
            r=r+1;
        }
        else if(arr[i]<p)
        {
            le[l]=arr[i];
            l=l+1;
        }
        else
        {
        	eq[e]=arr[i];
        	e=e+1;
		}
    }
    int k=0;
    for(int i=0;i<l;i++)
        res[k++]=le[i];
        
    for(int i=0;i<e;i++)
        res[k++]=eq[i];
    
    for(int i=0;i<r;i++)
        res[k++]=ri[i];
    return res;
    
    


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
	a=quickSort(a);
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";	
	}
}
