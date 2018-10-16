/*
Devu has an array A consisting of N positive integers. He would like to perform following operation on array.

Pick some two elements a, b in the array (a could be same as b, but their corresponding indices in the array should not be same). Remove both the elements a and b and instead add a number x such that x lies between min(a, b) and max(a, b), both inclusive, (i.e. min(a, b) = x = max(a, b)).
Now, as you know after applying the above operation N - 1 times, Devu will end up with a single number in the array. He is wondering whether it is possible to do the operations in such a way that he ends up a number t.

He asks your help in answering Q such queries, each of them will contain an integer t and you have to tell whether it is possible to end up t.
Input
There is only one test case per test file.

First line of the input contains two space separated integers N, Q denoting number of elements in A and number of queries for which Devu asks your help, respectively

Second line contains N space separated integers denoting the content of array A.

Each of the next Q lines, will contain a single integer t corresponding to the query.

Output
Output Q lines, each containing "Yes" or "No" (both without quotes) corresponding to the answer of corresponding query.
Example
Input 1:
1 2
1
1
2

Output:
Yes
No

Input 2:
2 4
1 3
1
2
3
4

Output:
Yes
Yes
Yes
No
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long n,q,a[100000],b[100000];
	scanf("%ld%ld",&n,&q);
	for(long i=0;i<n;i++)
	{
		scanf("%ld",&a[i]);
	}
	sort(a,a+n,greater<long>());
	
	for(long i=0;i<q;i++)
	{
		scanf("%ld",&b[i]);
		
	}
	for(long i=0;i<q;i++)
	{
		if(b[i]<=a[0] && b[i]>=a[n-1])
		{
			printf("YES\n");
			
		}
		else{
			printf("NO\n");
		}
	}
	


}
