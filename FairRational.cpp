/*
You are the benevolent ruler of Rankhacker Castle, and today you're distributing bread. 
Your subjects are in a line, and some of them already have some loaves. 
Times are hard and your castle's food stocks are dwindling, so you must distribute as few loaves as possible according to the following rules:

Every time you give a loaf of bread to some person ,
 you must also give a loaf of bread to the person immediately in front of or behind them in the line (i.e., persons i+1 or i-1 ).
After all the bread is distributed, each person must have an even number of loaves.
Given the number of loaves already held by each citizen,
 find and print the minimum number of loaves you must distribute to satisfy the two rules above.
 If this is not possible, print NO.

For example, the people in line have loaves B=[4,5,6,7]. We can first give a loaf to i=3 and i=4 so B=[4,5,7,8]. 
Next we give a loaf to i=2 and i=3 and have B=[4,6,8,8] which satisfies our conditions. We had to distribute 4 loaves.

Function Description

Complete the fairRations function in the editor below. It should return an integer that represents the minimum number of loaves required.

fairRations has the following parameter(s):

B: an array of integers that represent the number of loaves each persons starts with .
Input Format

The first line contains an integer , the number of subjects in the bread line.

The second line contains  space-separated integers .
Sample Input 0

5
2 3 4 5 6
Sample Output 0

4
*/


#include <bits/stdc++.h>

using namespace std;


// Complete the fairRations function below.
int fairRations(vector<int> B) {
    int odd=0;
    for(int i=0;i<B.size()-1;i++)
    {
        if(B[i]%2==1)
    	{
    		B[i]+=1;
    		B[i+1]+=1;
    		odd+=2;
		}
    }
    if(B[B.size()-1]%2==1)
    {
        
        return -1;
    }
    return odd;
    


}
int main()
{
	int n;
	cin>>n;
	vector<int> b(n);
	for(int i=0;i<n;i++)
	{
		cin>>b[i];
	}
	cout<<fairRations(b);
	return 0;
}
