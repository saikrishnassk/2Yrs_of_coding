/*
Lisa just got a new math workbook. A workbook contains exercise problems, grouped into chapters.
 Lisa believes a problem to be special if its index (within a chapter) is the same as the page number where it's located.
  The format of Lisa's book is as follows:

There are  chapters in Lisa's workbook, numbered from 1 to n.
The i th chapter has arr[i] problems, numbered from 1 to arr[i].
Each page can hold up to k problems. Only a chapter's last page of exercises may contain fewer than k problems.
Each new chapter starts on a new page, so a page will never contain problems from more than one chapter.
The page number indexing starts at 1.
Given the details for Lisa's workbook, can you count its number of special problems?

For example, Lisa's workbook contains arr[1]=4 problems for chapter 1, and arr[2]=2 problems for chapter 2. Each page can hold k=3 problems.
 The first page will hold 3 problems for chapter 1. Problem 1 is on page 1, so it is special.
  Page 2 contains only Chapter 1, Problem 4, so no special problem is on page 2. Chapter 2 problems start on page 2 and there are 2 problems.
   Since there is no problem 3 on page 3, there is no special problem on that page either. There is 1 special problem in her workbook.

Note: See the diagram in the Explanation section for more details.

Function Description

Complete the workbook function in the editor below. It should return an integer that represents the number of special problems in the workbook.

workbook has the following parameter(s):

n: an integer that denotes the number of chapters
k: an integer that denotes the maximum number of problems per page
arr: an array of integers that denote the number of problems in each chapter

Sample Input

5 3  
4 2 6 1 10
Sample Output

4

*/

#include <bits/stdc++.h>

using namespace std;


// Complete the workbook function below.
int workbook(int n, int k, vector<int> arr) {
    int p=0,j=0,c=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<k)
            p=p+1;
        else
        {
            p=p+(arr[i]/k);
            if(arr[i]%k!=0)
                p=p+1;
        }
    }
    int i=1,co=0;
    while(i!=(p+1))
    {
        if((j+k)>arr[c] && (i>j) && (i<=arr[c]))
            co=co+1;
        else if(i>j && i<=(j+k) && (j+k <= arr[c]))
            co=co+1;
        j=j+k;
        if(j>=arr[c])
        {
            j=0;
            c=c+1;
        }
        i=i+1;
    }
    return co;


}
int main()
{
	int n=10;
	vector<int> a(n);
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<workbook(n,5,a);
}
