/*
We have a rectangular piece of cardboard with width 1 (its height is not important). We are going to fold it in the following way:

pick up the right side of the piece of cardboard and move it to the left until it touches the left side
this way, a smaller piece of cardboard with width 1/2 is created; if we unfolded it, we could see a vertical ridge formed in the middle
pick up the left side of this new piece of cardboard and move it to the right until it touches the (new) right side
pick up the right side of the resulting piece of cardboard and move it to the left until it touches the left side, etc.
Whenever the cardboard is folded, exactly one of its new sides is a newly formed ridge (there may be more, internal ridges formed, but we do not consider these). Let's denote such a ridge created in the k-th folding by Rk.

In total, we fold the piece of cardboard N times. Afterwards, we unfold it and look at the formed ridges. Let's denote the distance of ridge RN (i.e. the last formed outer ridge) from the left side of the original piece of cardboard by DN. For example, D1=1/2 and D2=1/4.

It is possible to express DN as an irreducible fraction x/y. Find this fraction.

Assume that it is possible to fold the piece of cardboard as many times as we want.

Input
The first and only line of the input contains a single integer T denoting the number of test cases. For each test case, a space and an integer N follows.

Output
Print a single line containing 2T space-separated integers. For the i-th test case (1=i=T), the 2i-1-th and 2i-th integer should denote x and y � the position of the last ridge as an irreducible fraction.

Constraints
1=T=5
1=N=25
Subtask #1 (10 points):

1=T=5
1=N=5
Subtask #2 (90 points): original constraints

Example Input
2 1 2
Example Output
1 2 1 4
Explanation
Example case 1: We only fold once, so x=1 and y=2.

Example case 2: We fold the piece of cardboard twice. The last edge is at 1/4, so x=1 and y=4.
*/
#include<bits/stdc++.h>
using namespace std;

void adding(long *x,long *y,long a,long b)
{
	*x=(*x)*b/(*y);
	*x+=a;
	*y=b;
	
}
int main()
{
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		long x=1,y=2;
		if(n==1){
			x=1;
			y=2;
		}
		else if(n==2){
			x=1;
			y=4;
			
		}
		else{
			x=1;
			y=4;
			 long x1=x,y1=y,x2=x,y2=y,temp1,temp2;
			for(int i=3;i<=n;i++)
			{
				y1=y1*2;
				temp1=x2;
				temp2=y2;
				adding(&x2,&y2,x1,y1);
				x=x2;
				y=y2;
				x2=temp1;
				y2=temp2;
				if(i%2==0){
					x2=x;
					y2=y;
				}
				
			}
		}
		cout<<x<<" "<<y<<" ";
	}
}
