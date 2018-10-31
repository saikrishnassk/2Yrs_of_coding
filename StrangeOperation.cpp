/*
Given an array consisting of N integers, you have to do the following operation K times.

Find out the sum of all the elements in the array. Denote it by S. Insert an integer in the array strictly greater than S. Hence, size of the array will increase by one.
Thus, at the end of the K operations, the array will have N + K elements. Find out the smallest possible value of the last number inserted in the array. Since this number can be very large, you just have to tell whether it will be odd or even.

Input
The first line of each test file contains the number of test cases, T.
The description of the test cases follows this line. Each test case description consists of 2 lines.
The first line has the values of N and K, separated by a space.
The next line contains a single-space separated list of values of the elements in the array.
Output
For each test case, output a single line containing the answer to the problem.If the number is even print "even" and if the number is odd print "odd"
Example
Sample Input:
1
2 3
5 7
Sample Output:
even
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long n,k;
		cin>>n>>k;
		long long s=0,temp;
		while(n--)
		{
			cin>>temp;
			s=s+temp;
		}
		if(s%2==0)
		{
			if(k==1)
			{
				cout<<"odd\n";
			}
			else{
				cout<<"even\n";
			}
		}
		else{
			cout<<"even\n";
		}
	}
}
