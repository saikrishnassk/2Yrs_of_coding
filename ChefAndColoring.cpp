/*
After a long time, Chef has finally decided to renovate his house. Chef's house has N rooms in it numbered from 1 to N. Each room is currently painted in one of the red, blue or green colors. Your are given configuration of colors of his house by a string S consisting of N characters. In this string, color red will be denoted by 'R', green by 'G' and blue by 'B'.

Chef does not like current painting configuration that much and would like to repaint the house such that each room has same color.

For painting, Chef has all the 3 color paints available and mixing any 2 color paints will result into 3rd color paint i.e

R + B = G
B + G = R
G + R = B
For example, painting a room having red color before with green color paint will make the color of room blue.

Also, Chef has many buckets of paint of each color. Simply put, you can assume that he will not run out of paint.

Being extraordinary lazy, our little chef does not want to work much and therefore, he has asked you to find the minimum number of rooms he has to repaint (possibly zero) in order to have all the rooms with same color. Can you please help him?

Input
First line of input contains a single integer T denoting the number of test cases. First line of each test case contains an integer N denoting the number of rooms in the chef's house. Next line of each test case contains a string S denoting the current color configuration of rooms.

Output
For each test case, Print the minimum number of rooms need to be painted in order to have all the rooms painted with same color i.e either red, blue or green.

Constraints
1 = T = 10

1 = N = 105

Si = {'R','G','B'}
Scoring
Subtask 1 (40 points) : 1 = N = 10
Subtask 2 (60 points) : original constraints
Example
Input

3
3
RGR
3
RRR
3
RGB
Output

1
0
2

*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,r=0,g=0,b=0;
		cin>>n;
		char ch;
		for(int i=0;i<n;i++)
		{
			cin>>ch;
			if(ch=='R'){
				r=r+1;
			}
			else if(ch=='G'){
				g=g+1;
			}
			else{
				b=b+1;
			}
		}
		if(r>g){
			if(b>r){
				cout<<r+g<<endl;
			}
			else{
				cout<<b+g<<endl;
			}
		}
		else{
			if(b>g){
				cout<<g+r<<endl;
			}
			else{
				cout<<b+r<<endl;
			}
		}
	}
}
