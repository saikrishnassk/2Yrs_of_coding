/*
Chef is fan of pairs and he likes all things that come in pairs. He even has a doll collection in which all dolls have paired.One day while going through his collection he found that there are odd number of dolls. Someone had stolen a doll!!!

Help chef find which type of doll is missing..

Input
The first line contains the number of test cases. 
Second line of the input contains the number of elements in the array. 
The next n lines are the types of each doll that is left.
Output
Find the type of doll that doesn't have a pair
Input:
1
3
1 
2
1


Output:
2


Input:
1
5
1
1
2
2
3
Output:
3
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long n;
		cin>>n;
		long temp[n],c=0;
		for(int i=0;i<n;i++)
		{
			cin>>temp[i];
		}
		sort(temp,temp+n);
		int i=0;
		while(i<n)
		{
			if(temp[i]!=temp[i+1])
			{
				c=temp[i];
			}
			i=i+2;
		}
		cout<<c<<endl;
	}
}
